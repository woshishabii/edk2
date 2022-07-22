;------------------------------------------------------------------------------
; @file
; This file includes all other code files to assemble the reset vector code
;
; Copyright (c) 2008 - 2013, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

;
; If neither ARCH_IA32 nor ARCH_X64 are defined, then try to include
; Base.h to use the C pre-processor to determine the architecture.
;
%ifndef ARCH_IA32
  %ifndef ARCH_X64
    #include <Base.h>
    #if defined (MDE_CPU_IA32)
      %define ARCH_IA32
    #elif defined (MDE_CPU_X64)
      %define ARCH_X64
    #endif
  %endif
%endif

%ifdef ARCH_IA32
  %ifdef ARCH_X64
    %error "Only one of ARCH_IA32 or ARCH_X64 can be defined."
  %endif
%elifdef ARCH_X64
%else
  %error "Either ARCH_IA32 or ARCH_X64 must be defined."
%endif

;------------------------------------------------------------------------------
; @file
; Common macros used in the ResetVector VTF module.
;
; Copyright (c) 2008, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

%define ADDR16_OF(x) (0x10000 - fourGigabytes + x)
%define ADDR_OF(x) (0x100000000 - fourGigabytes + x)

%macro  OneTimeCall 1
    jmp     %1
%1 %+ OneTimerCallReturn:
%endmacro

%macro  OneTimeCallRet 1
    jmp     %1 %+ OneTimerCallReturn
%endmacro

StartOfResetVectorCode:

%define ADDR_OF_START_OF_RESET_CODE ADDR_OF(StartOfResetVectorCode)



;------------------------------------------------------------------------------
; @file
; Definitions of POST CODES for the reset vector module
;
; Copyright (c) 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

%define POSTCODE_16BIT_MODE     0x16
%define POSTCODE_32BIT_MODE     0x32
%define POSTCODE_64BIT_MODE     0x64

%define POSTCODE_BFV_NOT_FOUND  0xb0
%define POSTCODE_BFV_FOUND      0xb1

%define POSTCODE_SEC_NOT_FOUND  0xf0
%define POSTCODE_SEC_FOUND      0xf1



%ifdef DEBUG_PORT80
;------------------------------------------------------------------------------
; @file
; Port 0x80 debug support macros
;
; Copyright (c) 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    16

%macro  debugInitialize 0
    ;
    ; No initialization is required
    ;
%endmacro

%macro  debugShowPostCode 1
    mov     al, %1
    out     0x80, al
%endmacro


%elifdef DEBUG_SERIAL
;------------------------------------------------------------------------------
; @file
; Serial port debug support macros
;
; Copyright (c) 2008 - 2018, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

;//---------------------------------------------
;// UART Register Offsets
;//---------------------------------------------
%define BAUD_LOW_OFFSET         0x00
%define BAUD_HIGH_OFFSET        0x01
%define IER_OFFSET              0x01
%define LCR_SHADOW_OFFSET       0x01
%define FCR_SHADOW_OFFSET       0x02
%define IR_CONTROL_OFFSET       0x02
%define FCR_OFFSET              0x02
%define EIR_OFFSET              0x02
%define BSR_OFFSET              0x03
%define LCR_OFFSET              0x03
%define MCR_OFFSET              0x04
%define LSR_OFFSET              0x05
%define MSR_OFFSET              0x06

;//---------------------------------------------
;// UART Register Bit Defines
;//---------------------------------------------
%define LSR_TXRDY               0x20
%define LSR_RXDA                0x01
%define DLAB                    0x01

; UINT16  gComBase = 0x3f8;
; UINTN   gBps = 115200;
; UINT8   gData = 8;
; UINT8   gStop = 1;
; UINT8   gParity = 0;
; UINT8   gBreakSet = 0;

%define DEFAULT_COM_BASE 0x3f8
%define DEFAULT_BPS 115200
%define DEFAULT_DATA 8
%define DEFAULT_STOP 1
%define DEFAULT_PARITY 0
%define DEFAULT_BREAK_SET 0

%define SERIAL_DEFAULT_LCR ( \
     (DEFAULT_BREAK_SET << 6) | \
     (DEFAULT_PARITY << 3) | \
     (DEFAULT_STOP << 2) | \
     (DEFAULT_DATA - 5) \
    )

%define SERIAL_PORT_IO_BASE_ADDRESS DEFAULT_COM_BASE

%macro  inFromSerialPort 1
    mov     dx, (SERIAL_PORT_IO_BASE_ADDRESS + %1)
    in      al, dx
%endmacro

%macro  waitForSerialTxReady 0

%%waitingForTx:
    inFromSerialPort LSR_OFFSET
    test    al, LSR_TXRDY
    jz      %%waitingForTx

%endmacro

%macro  outToSerialPort 2
    mov     dx, (SERIAL_PORT_IO_BASE_ADDRESS + %1)
    mov     al, %2
    out     dx, al
%endmacro

%macro  debugShowCharacter 1
    waitForSerialTxReady
    outToSerialPort 0, %1
%endmacro

%macro  debugShowHexDigit 1
  %if (%1 < 0xa)
    debugShowCharacter BYTE ('0' + (%1))
  %else
    debugShowCharacter BYTE ('a' + ((%1) - 0xa))
  %endif
%endmacro

%macro  debugNewline 0
    debugShowCharacter `\r`
    debugShowCharacter `\n`
%endmacro

%macro  debugShowPostCode 1
    debugShowHexDigit (((%1) >> 4) & 0xf)
    debugShowHexDigit ((%1) & 0xf)
    debugNewline
%endmacro

BITS    16

%macro  debugInitialize 0
  jmp  real16InitDebug
real16InitDebugReturn:
%endmacro

real16InitDebug:
    ;
    ; Set communications format
    ;
    outToSerialPort LCR_OFFSET, ((DLAB << 7) | SERIAL_DEFAULT_LCR)

    ;
    ; Configure baud rate
    ;
    outToSerialPort BAUD_HIGH_OFFSET, ((115200 / DEFAULT_BPS) >> 8)
    outToSerialPort BAUD_LOW_OFFSET, ((115200 / DEFAULT_BPS) & 0xff)

    ;
    ; Switch back to bank 0
    ;
    outToSerialPort LCR_OFFSET, SERIAL_DEFAULT_LCR

    jmp     real16InitDebugReturn


%else
;------------------------------------------------------------------------------
; @file
; Debug disabled
;
; Copyright (c) 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    16

%macro  debugInitialize 0
    ;
    ; No initialization is required
    ;
%endmacro

%macro  debugShowPostCode 1
%endmacro


%endif

;------------------------------------------------------------------------------
; @file
; Search for the Boot Firmware Volume (BFV) base address
;
; Copyright (c) 2008 - 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

;#define EFI_FIRMWARE_FILE_SYSTEM2_GUID \
;  { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 } }
%define FFS_GUID_DWORD0 0x8c8ce578
%define FFS_GUID_DWORD1 0x4f1c8a3d
%define FFS_GUID_DWORD2 0x61893599
%define FFS_GUID_DWORD3 0xd32dc385

BITS    32

;
; Modified:  EAX, EBX
; Preserved: EDI, ESP
;
; @param[out]  EBP  Address of Boot Firmware Volume (BFV)
;
Flat32SearchForBfvBase:

    xor     eax, eax
searchingForBfvHeaderLoop:
    ;
    ; We check for a firmware volume at every 4KB address in the top 16MB
    ; just below 4GB.  (Addresses at 0xffHHH000 where H is any hex digit.)
    ;
    sub     eax, 0x1000
    cmp     eax, 0xff000000
    jb      searchedForBfvHeaderButNotFound

    ;
    ; Check FFS GUID
    ;
    cmp     dword [eax + 0x10], FFS_GUID_DWORD0
    jne     searchingForBfvHeaderLoop
    cmp     dword [eax + 0x14], FFS_GUID_DWORD1
    jne     searchingForBfvHeaderLoop
    cmp     dword [eax + 0x18], FFS_GUID_DWORD2
    jne     searchingForBfvHeaderLoop
    cmp     dword [eax + 0x1c], FFS_GUID_DWORD3
    jne     searchingForBfvHeaderLoop

    ;
    ; Check FV Length
    ;
    cmp     dword [eax + 0x24], 0
    jne     searchingForBfvHeaderLoop
    mov     ebx, eax
    add     ebx, dword [eax + 0x20]
    jnz     searchingForBfvHeaderLoop

    jmp     searchedForBfvHeaderAndItWasFound

searchedForBfvHeaderButNotFound:
    ;
    ; Hang if the SEC entry point was not found
    ;
    debugShowPostCode POSTCODE_BFV_NOT_FOUND

    ;
    ; 0xbfbfbfbf in the EAX & EBP registers helps signal what failed
    ; for debugging purposes.
    ;
    mov     eax, 0xBFBFBFBF
    mov     ebp, eax
    jmp     $

searchedForBfvHeaderAndItWasFound:
    mov     ebp, eax

    debugShowPostCode POSTCODE_BFV_FOUND

    OneTimeCallRet Flat32SearchForBfvBase


;------------------------------------------------------------------------------
; @file
; Search for the SEC Core entry point
;
; Copyright (c) 2008 - 2011, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    32

%define EFI_FV_FILETYPE_SECURITY_CORE         0x03

;
; Modified:  EAX, EBX, ECX, EDX
; Preserved: EDI, EBP, ESP
;
; @param[in]   EBP  Address of Boot Firmware Volume (BFV)
; @param[out]  ESI  SEC Core Entry Point Address
;
Flat32SearchForSecEntryPoint:

    ;
    ; Initialize EBP and ESI to 0
    ;
    xor     ebx, ebx
    mov     esi, ebx

    ;
    ; Pass over the BFV header
    ;
    mov     eax, ebp
    mov     bx, [ebp + 0x30]
    add     eax, ebx
    jc      secEntryPointWasNotFound

    jmp     searchingForFfsFileHeaderLoop

moveForwardWhileSearchingForFfsFileHeaderLoop:
    ;
    ; Make forward progress in the search
    ;
    inc     eax
    jc      secEntryPointWasNotFound

searchingForFfsFileHeaderLoop:
    test    eax, eax
    jz      secEntryPointWasNotFound

    ;
    ; Ensure 8 byte alignment
    ;
    add     eax, 7
    jc      secEntryPointWasNotFound
    and     al, 0xf8

    ;
    ; Look to see if there is an FFS file at eax
    ;
    mov     bl, [eax + 0x17]
    test    bl, 0x20
    jz      moveForwardWhileSearchingForFfsFileHeaderLoop
    mov     ecx, [eax + 0x14]
    and     ecx, 0x00ffffff
    or      ecx, ecx
    jz      moveForwardWhileSearchingForFfsFileHeaderLoop
    add     ecx, eax
    jz      jumpSinceWeFoundTheLastFfsFile
    jc      moveForwardWhileSearchingForFfsFileHeaderLoop
jumpSinceWeFoundTheLastFfsFile:

    ;
    ; There seems to be a valid file at eax
    ;
    cmp     byte [eax + 0x12], EFI_FV_FILETYPE_SECURITY_CORE ; Check File Type
    jne     readyToTryFfsFileAtEcx

fileTypeIsSecCore:
    OneTimeCall GetEntryPointOfFfsFile
    test    eax, eax
    jnz     doneSeachingForSecEntryPoint

readyToTryFfsFileAtEcx:
    ;
    ; Try the next FFS file at ECX
    ;
    mov     eax, ecx
    jmp     searchingForFfsFileHeaderLoop

secEntryPointWasNotFound:
    xor     eax, eax

doneSeachingForSecEntryPoint:
    mov     esi, eax

    test    esi, esi
    jnz     secCoreEntryPointWasFound

secCoreEntryPointWasNotFound:
    ;
    ; Hang if the SEC entry point was not found
    ;
    debugShowPostCode POSTCODE_SEC_NOT_FOUND
    jz      $

secCoreEntryPointWasFound:
    debugShowPostCode POSTCODE_SEC_FOUND

    OneTimeCallRet Flat32SearchForSecEntryPoint

%define EFI_SECTION_PE32                  0x10
%define EFI_SECTION_TE                    0x12

;
; Input:
;   EAX - Start of FFS file
;   ECX - End of FFS file
;
; Output:
;   EAX - Entry point of PE32 (or 0 if not found)
;
; Modified:
;   EBX
;
GetEntryPointOfFfsFile:
    test    eax, eax
    jz      getEntryPointOfFfsFileErrorReturn
    add     eax, 0x18       ; EAX = Start of section

getEntryPointOfFfsFileLoopForSections:
    cmp     eax, ecx
    jae     getEntryPointOfFfsFileErrorReturn

    cmp     byte [eax + 3], EFI_SECTION_PE32
    je      getEntryPointOfFfsFileFoundPe32Section

    cmp     byte [eax + 3], EFI_SECTION_TE
    je      getEntryPointOfFfsFileFoundTeSection

    ;
    ; The section type was not PE32 or TE, so move to next section
    ;
    mov     ebx, dword [eax]
    and     ebx, 0x00ffffff
    add     eax, ebx
    jc      getEntryPointOfFfsFileErrorReturn

    ;
    ; Ensure that FFS section is 32-bit aligned
    ;
    add     eax, 3
    jc      getEntryPointOfFfsFileErrorReturn
    and     al, 0xfc
    jmp     getEntryPointOfFfsFileLoopForSections

getEntryPointOfFfsFileFoundPe32Section:
    add     eax, 4       ; EAX = Start of PE32 image

    cmp     word [eax], 'MZ'
    jne     getEntryPointOfFfsFileErrorReturn
    movzx   ebx, word [eax + 0x3c]
    add     ebx, eax

    ; if (Hdr.Pe32->Signature == EFI_IMAGE_NT_SIGNATURE)
    cmp     dword [ebx], `PE\x00\x00`
    jne     getEntryPointOfFfsFileErrorReturn

    ; *EntryPoint = (VOID *)((UINTN)Pe32Data +
    ;   (UINTN)(Hdr.Pe32->OptionalHeader.AddressOfEntryPoint & 0x0ffffffff));
    add     eax, [ebx + 0x4 + 0x14 + 0x10]
    jmp     getEntryPointOfFfsFileReturn

getEntryPointOfFfsFileFoundTeSection:
    add     eax, 4       ; EAX = Start of TE image
    mov     ebx, eax

    ; if (Hdr.Te->Signature == EFI_TE_IMAGE_HEADER_SIGNATURE)
    cmp     word [ebx], 'VZ'
    jne     getEntryPointOfFfsFileErrorReturn
    ; *EntryPoint = (VOID *)((UINTN)Pe32Data +
    ;   (UINTN)(Hdr.Te->AddressOfEntryPoint & 0x0ffffffff) +
    ;   sizeof(EFI_TE_IMAGE_HEADER) - Hdr.Te->StrippedSize);
    add     eax, [ebx + 0x8]
    add     eax, 0x28
    movzx   ebx, word [ebx + 0x6]
    sub     eax, ebx
    jmp     getEntryPointOfFfsFileReturn

getEntryPointOfFfsFileErrorReturn:
    mov     eax, 0

getEntryPointOfFfsFileReturn:
    OneTimeCallRet GetEntryPointOfFfsFile



%ifdef ARCH_X64
  #include <AutoGen.h>

  %if (FixedPcdGet32 (PcdOvmfSecPageTablesSize) != 0x6000)
    %error "This implementation inherently depends on PcdOvmfSecPageTablesSize"
  %endif

  %if (FixedPcdGet32 (PcdOvmfSecGhcbPageTableSize) != 0x1000)
    %error "This implementation inherently depends on PcdOvmfSecGhcbPageTableSize"
  %endif

  %if (FixedPcdGet32 (PcdOvmfSecGhcbSize) != 0x2000)
    %error "This implementation inherently depends on PcdOvmfSecGhcbSize"
  %endif

  %if ((FixedPcdGet32 (PcdOvmfSecGhcbBase) >> 21) != \
       ((FixedPcdGet32 (PcdOvmfSecGhcbBase) + FixedPcdGet32 (PcdOvmfSecGhcbSize) - 1) >> 21))
    %error "This implementation inherently depends on PcdOvmfSecGhcbBase not straddling a 2MB boundary"
  %endif

  %define PT_ADDR(Offset) (FixedPcdGet32 (PcdOvmfSecPageTablesBase) + (Offset))
;------------------------------------------------------------------------------
; @file
; Transition from 32 bit flat protected mode into 64 bit flat protected mode
;
; Copyright (c) 2008 - 2018, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    32

;
; Modified:  EAX
;
Transition32FlatTo64Flat:

    OneTimeCall SetCr3ForPageTables64

    mov     eax, cr4
    bts     eax, 5                      ; enable PAE
    mov     cr4, eax

    mov     ecx, 0xc0000080
    rdmsr
    bts     eax, 8                      ; set LME
    wrmsr

    mov     eax, cr0
    bts     eax, 31                     ; set PG
    mov     cr0, eax                    ; enable paging

    jmp     LINEAR_CODE64_SEL:ADDR_OF(jumpTo64BitAndLandHere)
BITS    64
jumpTo64BitAndLandHere:

    debugShowPostCode POSTCODE_64BIT_MODE

    OneTimeCallRet Transition32FlatTo64Flat



  %define GHCB_PT_ADDR (FixedPcdGet32 (PcdOvmfSecGhcbPageTableBase))
  %define GHCB_BASE (FixedPcdGet32 (PcdOvmfSecGhcbBase))
  %define GHCB_SIZE (FixedPcdGet32 (PcdOvmfSecGhcbSize))
  %define SEV_ES_WORK_AREA (FixedPcdGet32 (PcdSevEsWorkAreaBase))
  %define SEV_ES_VC_TOP_OF_STACK (FixedPcdGet32 (PcdOvmfSecPeiTempRamBase) + FixedPcdGet32 (PcdOvmfSecPeiTempRamSize))
;------------------------------------------------------------------------------
; @file
; Sets the CR3 register for 64-bit paging
;
; Copyright (c) 2008 - 2013, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    32

%define PAGE_PRESENT            0x01
%define PAGE_READ_WRITE         0x02
%define PAGE_USER_SUPERVISOR    0x04
%define PAGE_WRITE_THROUGH      0x08
%define PAGE_CACHE_DISABLE     0x010
%define PAGE_ACCESSED          0x020
%define PAGE_DIRTY             0x040
%define PAGE_PAT               0x080
%define PAGE_GLOBAL           0x0100
%define PAGE_2M_MBO            0x080
%define PAGE_2M_PAT          0x01000

%define PAGE_4K_PDE_ATTR (PAGE_ACCESSED + \
                          PAGE_DIRTY + \
                          PAGE_READ_WRITE + \
                          PAGE_PRESENT)

%define PAGE_2M_PDE_ATTR (PAGE_2M_MBO + \
                          PAGE_ACCESSED + \
                          PAGE_DIRTY + \
                          PAGE_READ_WRITE + \
                          PAGE_PRESENT)

%define PAGE_PDP_ATTR (PAGE_ACCESSED + \
                       PAGE_READ_WRITE + \
                       PAGE_PRESENT)

;
; SEV-ES #VC exception handler support
;
; #VC handler local variable locations
;
%define VC_CPUID_RESULT_EAX         0
%define VC_CPUID_RESULT_EBX         4
%define VC_CPUID_RESULT_ECX         8
%define VC_CPUID_RESULT_EDX        12
%define VC_GHCB_MSR_EDX            16
%define VC_GHCB_MSR_EAX            20
%define VC_CPUID_REQUEST_REGISTER  24
%define VC_CPUID_FUNCTION          28

; #VC handler total local variable size
;
%define VC_VARIABLE_SIZE           32

; #VC handler GHCB CPUID request/response protocol values
;
%define GHCB_CPUID_REQUEST          4
%define GHCB_CPUID_RESPONSE         5
%define GHCB_CPUID_REGISTER_SHIFT  30
%define CPUID_INSN_LEN              2


; Check if Secure Encrypted Virtualization (SEV) feature is enabled
;
; Modified:  EAX, EBX, ECX, EDX, ESP
;
; If SEV is enabled then EAX will be at least 32.
; If SEV is disabled then EAX will be zero.
;
CheckSevFeature:
    ; Set the first byte of the workarea to zero to communicate to the SEC
    ; phase that SEV-ES is not enabled. If SEV-ES is enabled, the CPUID
    ; instruction will trigger a #VC exception where the first byte of the
    ; workarea will be set to one.
    mov     byte[SEV_ES_WORK_AREA], 0

    ;
    ; Set up exception handlers to check for SEV-ES
    ;   Load temporary RAM stack based on PCDs (see SevEsIdtVmmComm for
    ;   stack usage)
    ;   Establish exception handlers
    ;
    mov       esp, SEV_ES_VC_TOP_OF_STACK
    mov       eax, ADDR_OF(Idtr)
    lidt      [cs:eax]

    ; Check if we have a valid (0x8000_001F) CPUID leaf
    ;   CPUID raises a #VC exception if running as an SEV-ES guest
    mov       eax, 0x80000000
    cpuid

    ; This check should fail on Intel or Non SEV AMD CPUs. In future if
    ; Intel CPUs supports this CPUID leaf then we are guranteed to have exact
    ; same bit definition.
    cmp       eax, 0x8000001f
    jl        NoSev

    ; Check for memory encryption feature:
    ; CPUID  Fn8000_001F[EAX] - Bit 1
    ;   CPUID raises a #VC exception if running as an SEV-ES guest
    mov       eax,  0x8000001f
    cpuid
    bt        eax, 1
    jnc       NoSev

    ; Check if memory encryption is enabled
    ;  MSR_0xC0010131 - Bit 0 (SEV enabled)
    mov       ecx, 0xc0010131
    rdmsr
    bt        eax, 0
    jnc       NoSev

    ; Get pte bit position to enable memory encryption
    ; CPUID Fn8000_001F[EBX] - Bits 5:0
    ;
    mov       eax, ebx
    and       eax, 0x3f
    jmp       SevExit

NoSev:
    xor       eax, eax

SevExit:
    ;
    ; Clear exception handlers and stack
    ;
    push      eax
    mov       eax, ADDR_OF(IdtrClear)
    lidt      [cs:eax]
    pop       eax
    mov       esp, 0

    OneTimeCallRet CheckSevFeature

; Check if Secure Encrypted Virtualization - Encrypted State (SEV-ES) feature
; is enabled.
;
; Modified:  EAX, EBX, ECX
;
; If SEV-ES is enabled then EAX will be non-zero.
; If SEV-ES is disabled then EAX will be zero.
;
CheckSevEsFeature:
    xor       eax, eax

    ; SEV-ES can't be enabled if SEV isn't, so first check the encryption
    ; mask.
    test      edx, edx
    jz        NoSevEs

    ; Save current value of encryption mask
    mov       ebx, edx

    ; Check if SEV-ES is enabled
    ;  MSR_0xC0010131 - Bit 1 (SEV-ES enabled)
    mov       ecx, 0xc0010131
    rdmsr
    and       eax, 2

    ; Restore encryption mask
    mov       edx, ebx

NoSevEs:
    OneTimeCallRet CheckSevEsFeature

;
; Modified:  EAX, EBX, ECX, EDX
;
SetCr3ForPageTables64:

    OneTimeCall   CheckSevFeature
    xor     edx, edx
    test    eax, eax
    jz      SevNotActive

    ; If SEV is enabled, C-bit is always above 31
    sub     eax, 32
    bts     edx, eax

SevNotActive:

    ;
    ; For OVMF, build some initial page tables at
    ; PcdOvmfSecPageTablesBase - (PcdOvmfSecPageTablesBase + 0x6000).
    ;
    ; This range should match with PcdOvmfSecPageTablesSize which is
    ; declared in the FDF files.
    ;
    ; At the end of PEI, the pages tables will be rebuilt into a
    ; more permanent location by DxeIpl.
    ;

    mov     ecx, 6 * 0x1000 / 4
    xor     eax, eax
clearPageTablesMemoryLoop:
    mov     dword[ecx * 4 + PT_ADDR (0) - 4], eax
    loop    clearPageTablesMemoryLoop

    ;
    ; Top level Page Directory Pointers (1 * 512GB entry)
    ;
    mov     dword[PT_ADDR (0)], PT_ADDR (0x1000) + PAGE_PDP_ATTR
    mov     dword[PT_ADDR (4)], edx

    ;
    ; Next level Page Directory Pointers (4 * 1GB entries => 4GB)
    ;
    mov     dword[PT_ADDR (0x1000)], PT_ADDR (0x2000) + PAGE_PDP_ATTR
    mov     dword[PT_ADDR (0x1004)], edx
    mov     dword[PT_ADDR (0x1008)], PT_ADDR (0x3000) + PAGE_PDP_ATTR
    mov     dword[PT_ADDR (0x100C)], edx
    mov     dword[PT_ADDR (0x1010)], PT_ADDR (0x4000) + PAGE_PDP_ATTR
    mov     dword[PT_ADDR (0x1014)], edx
    mov     dword[PT_ADDR (0x1018)], PT_ADDR (0x5000) + PAGE_PDP_ATTR
    mov     dword[PT_ADDR (0x101C)], edx

    ;
    ; Page Table Entries (2048 * 2MB entries => 4GB)
    ;
    mov     ecx, 0x800
pageTableEntriesLoop:
    mov     eax, ecx
    dec     eax
    shl     eax, 21
    add     eax, PAGE_2M_PDE_ATTR
    mov     [ecx * 8 + PT_ADDR (0x2000 - 8)], eax
    mov     [(ecx * 8 + PT_ADDR (0x2000 - 8)) + 4], edx
    loop    pageTableEntriesLoop

    OneTimeCall   CheckSevEsFeature
    test    eax, eax
    jz      SetCr3

    ;
    ; The initial GHCB will live at GHCB_BASE and needs to be un-encrypted.
    ; This requires the 2MB page for this range be broken down into 512 4KB
    ; pages.  All will be marked encrypted, except for the GHCB.
    ;
    mov     ecx, (GHCB_BASE >> 21)
    mov     eax, GHCB_PT_ADDR + PAGE_PDP_ATTR
    mov     [ecx * 8 + PT_ADDR (0x2000)], eax

    ;
    ; Page Table Entries (512 * 4KB entries => 2MB)
    ;
    mov     ecx, 512
pageTableEntries4kLoop:
    mov     eax, ecx
    dec     eax
    shl     eax, 12
    add     eax, GHCB_BASE & 0xFFE0_0000
    add     eax, PAGE_4K_PDE_ATTR
    mov     [ecx * 8 + GHCB_PT_ADDR - 8], eax
    mov     [(ecx * 8 + GHCB_PT_ADDR - 8) + 4], edx
    loop    pageTableEntries4kLoop

    ;
    ; Clear the encryption bit from the GHCB entry
    ;
    mov     ecx, (GHCB_BASE & 0x1F_FFFF) >> 12
    mov     [ecx * 8 + GHCB_PT_ADDR + 4], strict dword 0

    mov     ecx, GHCB_SIZE / 4
    xor     eax, eax
clearGhcbMemoryLoop:
    mov     dword[ecx * 4 + GHCB_BASE - 4], eax
    loop    clearGhcbMemoryLoop

SetCr3:
    ;
    ; Set CR3 now that the paging structures are available
    ;
    mov     eax, PT_ADDR (0)
    mov     cr3, eax

    OneTimeCallRet SetCr3ForPageTables64

;
; Start of #VC exception handling routines
;

SevEsIdtNotCpuid:
    ;
    ; Use VMGEXIT to request termination.
    ;   1 - #VC was not for CPUID
    ;
    mov     eax, 1
    jmp     SevEsIdtTerminate

SevEsIdtNoCpuidResponse:
    ;
    ; Use VMGEXIT to request termination.
    ;   2 - GHCB_CPUID_RESPONSE not received
    ;
    mov     eax, 2

SevEsIdtTerminate:
    ;
    ; Use VMGEXIT to request termination. At this point the reason code is
    ; located in EAX, so shift it left 16 bits to the proper location.
    ;
    ; EAX[11:0]  => 0x100 - request termination
    ; EAX[15:12] => 0x1   - OVMF
    ; EAX[23:16] => 0xXX  - REASON CODE
    ;
    shl     eax, 16
    or      eax, 0x1100
    xor     edx, edx
    mov     ecx, 0xc0010130
    wrmsr
    ;
    ; Issue VMGEXIT - NASM doesn't support the vmmcall instruction in 32-bit
    ; mode, so work around this by temporarily switching to 64-bit mode.
    ;
BITS    64
    rep     vmmcall
BITS    32

    ;
    ; We shouldn't come back from the VMGEXIT, but if we do, just loop.
    ;
SevEsIdtHlt:
    hlt
    jmp     SevEsIdtHlt
    iret

    ;
    ; Total stack usage for the #VC handler is 44 bytes:
    ;   - 12 bytes for the exception IRET (after popping error code)
    ;   - 32 bytes for the local variables.
    ;
SevEsIdtVmmComm:
    ;
    ; If we're here, then we are an SEV-ES guest and this
    ; was triggered by a CPUID instruction
    ;
    ; Set the first byte of the workarea to one to communicate to the SEC
    ; phase that SEV-ES is enabled.
    mov     byte[SEV_ES_WORK_AREA], 1

    pop     ecx                     ; Error code
    cmp     ecx, 0x72               ; Be sure it was CPUID
    jne     SevEsIdtNotCpuid

    ; Set up local variable room on the stack
    ;   CPUID function         : + 28
    ;   CPUID request register : + 24
    ;   GHCB MSR (EAX)         : + 20
    ;   GHCB MSR (EDX)         : + 16
    ;   CPUID result (EDX)     : + 12
    ;   CPUID result (ECX)     : + 8
    ;   CPUID result (EBX)     : + 4
    ;   CPUID result (EAX)     : + 0
    sub     esp, VC_VARIABLE_SIZE

    ; Save the CPUID function being requested
    mov     [esp + VC_CPUID_FUNCTION], eax

    ; The GHCB CPUID protocol uses the following mapping to request
    ; a specific register:
    ;   0 => EAX, 1 => EBX, 2 => ECX, 3 => EDX
    ;
    ; Set EAX as the first register to request. This will also be used as a
    ; loop variable to request all register values (EAX to EDX).
    xor     eax, eax
    mov     [esp + VC_CPUID_REQUEST_REGISTER], eax

    ; Save current GHCB MSR value
    mov     ecx, 0xc0010130
    rdmsr
    mov     [esp + VC_GHCB_MSR_EAX], eax
    mov     [esp + VC_GHCB_MSR_EDX], edx

NextReg:
    ;
    ; Setup GHCB MSR
    ;   GHCB_MSR[63:32] = CPUID function
    ;   GHCB_MSR[31:30] = CPUID register
    ;   GHCB_MSR[11:0]  = CPUID request protocol
    ;
    mov     eax, [esp + VC_CPUID_REQUEST_REGISTER]
    cmp     eax, 4
    jge     VmmDone

    shl     eax, GHCB_CPUID_REGISTER_SHIFT
    or      eax, GHCB_CPUID_REQUEST
    mov     edx, [esp + VC_CPUID_FUNCTION]
    mov     ecx, 0xc0010130
    wrmsr

    ;
    ; Issue VMGEXIT - NASM doesn't support the vmmcall instruction in 32-bit
    ; mode, so work around this by temporarily switching to 64-bit mode.
    ;
BITS    64
    rep     vmmcall
BITS    32

    ;
    ; Read GHCB MSR
    ;   GHCB_MSR[63:32] = CPUID register value
    ;   GHCB_MSR[31:30] = CPUID register
    ;   GHCB_MSR[11:0]  = CPUID response protocol
    ;
    mov     ecx, 0xc0010130
    rdmsr
    mov     ecx, eax
    and     ecx, 0xfff
    cmp     ecx, GHCB_CPUID_RESPONSE
    jne     SevEsIdtNoCpuidResponse

    ; Save returned value
    shr     eax, GHCB_CPUID_REGISTER_SHIFT
    mov     [esp + eax * 4], edx

    ; Next register
    inc     word [esp + VC_CPUID_REQUEST_REGISTER]

    jmp     NextReg

VmmDone:
    ;
    ; At this point we have all CPUID register values. Restore the GHCB MSR,
    ; set the return register values and return.
    ;
    mov     eax, [esp + VC_GHCB_MSR_EAX]
    mov     edx, [esp + VC_GHCB_MSR_EDX]
    mov     ecx, 0xc0010130
    wrmsr

    mov     eax, [esp + VC_CPUID_RESULT_EAX]
    mov     ebx, [esp + VC_CPUID_RESULT_EBX]
    mov     ecx, [esp + VC_CPUID_RESULT_ECX]
    mov     edx, [esp + VC_CPUID_RESULT_EDX]

    add     esp, VC_VARIABLE_SIZE

    ; Update the EIP value to skip over the now handled CPUID instruction
    ; (the CPUID instruction has a length of 2)
    add     word [esp], CPUID_INSN_LEN
    iret

ALIGN   2

Idtr:
    dw      IDT_END - IDT_BASE - 1  ; Limit
    dd      ADDR_OF(IDT_BASE)       ; Base

IdtrClear:
    dw      0                       ; Limit
    dd      0                       ; Base

ALIGN   16

;
; The Interrupt Descriptor Table (IDT)
;   This will be used to determine if SEV-ES is enabled.  Upon execution
;   of the CPUID instruction, a VMM Communication Exception will occur.
;   This will tell us if SEV-ES is enabled.  We can use the current value
;   of the GHCB MSR to determine the SEV attributes.
;
IDT_BASE:
;
; Vectors 0 - 28 (No handlers)
;
%rep 29
    dw      0                                    ; Offset low bits 15..0
    dw      0x10                                 ; Selector
    db      0                                    ; Reserved
    db      0x8E                                 ; Gate Type (IA32_IDT_GATE_TYPE_INTERRUPT_32)
    dw      0                                    ; Offset high bits 31..16
%endrep
;
; Vector 29 (VMM Communication Exception)
;
    dw      (ADDR_OF(SevEsIdtVmmComm) & 0xffff)  ; Offset low bits 15..0
    dw      0x10                                 ; Selector
    db      0                                    ; Reserved
    db      0x8E                                 ; Gate Type (IA32_IDT_GATE_TYPE_INTERRUPT_32)
    dw      (ADDR_OF(SevEsIdtVmmComm) >> 16)     ; Offset high bits 31..16
;
; Vectors 30 - 31 (No handlers)
;
%rep 2
    dw      0                                    ; Offset low bits 15..0
    dw      0x10                                 ; Selector
    db      0                                    ; Reserved
    db      0x8E                                 ; Gate Type (IA32_IDT_GATE_TYPE_INTERRUPT_32)
    dw      0                                    ; Offset high bits 31..16
%endrep
IDT_END:

%endif

;------------------------------------------------------------------------------
; @file
; Transition from 16 bit real mode into 32 bit flat protected mode
;
; Copyright (c) 2008 - 2010, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

%define SEC_DEFAULT_CR0  0x40000023
%define SEC_DEFAULT_CR4  0x640

BITS    16

;
; Modified:  EAX, EBX
;
; @param[out]     DS       Selector allowing flat access to all addresses
; @param[out]     ES       Selector allowing flat access to all addresses
; @param[out]     FS       Selector allowing flat access to all addresses
; @param[out]     GS       Selector allowing flat access to all addresses
; @param[out]     SS       Selector allowing flat access to all addresses
;
TransitionFromReal16To32BitFlat:

    debugShowPostCode POSTCODE_16BIT_MODE

    cli

    mov     bx, 0xf000
    mov     ds, bx

    mov     bx, ADDR16_OF(gdtr)

o32 lgdt    [cs:bx]

    mov     eax, SEC_DEFAULT_CR0
    mov     cr0, eax

    jmp     LINEAR_CODE_SEL:dword ADDR_OF(jumpTo32BitAndLandHere)
BITS    32
jumpTo32BitAndLandHere:

    mov     eax, SEC_DEFAULT_CR4
    mov     cr4, eax

    debugShowPostCode POSTCODE_32BIT_MODE

    mov     ax, LINEAR_SEL
    mov     ds, ax
    mov     es, ax
    mov     fs, ax
    mov     gs, ax
    mov     ss, ax

    OneTimeCallRet TransitionFromReal16To32BitFlat

ALIGN   2

gdtr:
    dw      GDT_END - GDT_BASE - 1   ; GDT limit
    dd      ADDR_OF(GDT_BASE)

ALIGN   16

;
; Macros for GDT entries
;

%define  PRESENT_FLAG(p) (p << 7)
%define  DPL(dpl) (dpl << 5)
%define  SYSTEM_FLAG(s) (s << 4)
%define  DESC_TYPE(t) (t)

; Type: data, expand-up, writable, accessed
%define  DATA32_TYPE 3

; Type: execute, readable, expand-up, accessed
%define  CODE32_TYPE 0xb

; Type: execute, readable, expand-up, accessed
%define  CODE64_TYPE 0xb

%define  GRANULARITY_FLAG(g) (g << 7)
%define  DEFAULT_SIZE32(d) (d << 6)
%define  CODE64_FLAG(l) (l << 5)
%define  UPPER_LIMIT(l) (l)

;
; The Global Descriptor Table (GDT)
;

GDT_BASE:
; null descriptor
NULL_SEL            equ $-GDT_BASE
    DW      0            ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      0            ; sys flag, dpl, type
    DB      0            ; limit 19:16, flags
    DB      0            ; base 31:24

; linear data segment descriptor
LINEAR_SEL          equ $-GDT_BASE
    DW      0xffff       ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      PRESENT_FLAG(1)|DPL(0)|SYSTEM_FLAG(1)|DESC_TYPE(DATA32_TYPE)
    DB      GRANULARITY_FLAG(1)|DEFAULT_SIZE32(1)|CODE64_FLAG(0)|UPPER_LIMIT(0xf)
    DB      0            ; base 31:24

; linear code segment descriptor
LINEAR_CODE_SEL     equ $-GDT_BASE
    DW      0xffff       ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      PRESENT_FLAG(1)|DPL(0)|SYSTEM_FLAG(1)|DESC_TYPE(CODE32_TYPE)
    DB      GRANULARITY_FLAG(1)|DEFAULT_SIZE32(1)|CODE64_FLAG(0)|UPPER_LIMIT(0xf)
    DB      0            ; base 31:24

%ifdef ARCH_X64
; linear code (64-bit) segment descriptor
LINEAR_CODE64_SEL   equ $-GDT_BASE
    DW      0xffff       ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      PRESENT_FLAG(1)|DPL(0)|SYSTEM_FLAG(1)|DESC_TYPE(CODE64_TYPE)
    DB      GRANULARITY_FLAG(1)|DEFAULT_SIZE32(0)|CODE64_FLAG(1)|UPPER_LIMIT(0xf)
    DB      0            ; base 31:24
%endif

; linear code segment descriptor
LINEAR_CODE16_SEL     equ $-GDT_BASE
    DW      0xffff       ; limit 15:0
    DW      0            ; base 15:0
    DB      0            ; base 23:16
    DB      PRESENT_FLAG(1)|DPL(0)|SYSTEM_FLAG(1)|DESC_TYPE(CODE32_TYPE)
    DB      GRANULARITY_FLAG(1)|DEFAULT_SIZE32(0)|CODE64_FLAG(0)|UPPER_LIMIT(0xf)
    DB      0            ; base 31:24

GDT_END:


;------------------------------------------------------------------------------
; @file
; 16-bit initialization code
;
; Copyright (c) 2008 - 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------


BITS    16

;
; @param[out] DI    'BP' to indicate boot-strap processor
;
EarlyBspInitReal16:
    mov     di, 'BP'
    jmp     short Main16

;
; @param[out] DI    'AP' to indicate application processor
;
EarlyApInitReal16:
    mov     di, 'AP'
    jmp     short Main16

;
; Modified:  EAX
;
; @param[in]  EAX   Initial value of the EAX register (BIST: Built-in Self Test)
; @param[out] ESP   Initial value of the EAX register (BIST: Built-in Self Test)
;
EarlyInit16:
    ;
    ; ESP -  Initial value of the EAX register (BIST: Built-in Self Test)
    ;
    mov     esp, eax

    debugInitialize

    OneTimeCallRet EarlyInit16



;------------------------------------------------------------------------------
; @file
; Main routine of the pre-SEC code up through the jump into SEC
;
; Copyright (c) 2008 - 2009, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------


BITS    16

;
; Modified:  EBX, ECX, EDX, EBP
;
; @param[in,out]  RAX/EAX  Initial value of the EAX register
;                          (BIST: Built-in Self Test)
; @param[in,out]  DI       'BP': boot-strap processor, or
;                          'AP': application processor
; @param[out]     RBP/EBP  Address of Boot Firmware Volume (BFV)
; @param[out]     DS       Selector allowing flat access to all addresses
; @param[out]     ES       Selector allowing flat access to all addresses
; @param[out]     FS       Selector allowing flat access to all addresses
; @param[out]     GS       Selector allowing flat access to all addresses
; @param[out]     SS       Selector allowing flat access to all addresses
;
; @return         None  This routine jumps to SEC and does not return
;
Main16:
    OneTimeCall EarlyInit16

    ;
    ; Transition the processor from 16-bit real mode to 32-bit flat mode
    ;
    OneTimeCall TransitionFromReal16To32BitFlat

BITS    32

    ;
    ; Search for the Boot Firmware Volume (BFV)
    ;
    OneTimeCall Flat32SearchForBfvBase

    ;
    ; EBP - Start of BFV
    ;

    ;
    ; Search for the SEC entry point
    ;
    OneTimeCall Flat32SearchForSecEntryPoint

    ;
    ; ESI - SEC Core entry point
    ; EBP - Start of BFV
    ;

%ifdef ARCH_IA32

    ;
    ; Restore initial EAX value into the EAX register
    ;
    mov     eax, esp

    ;
    ; Jump to the 32-bit SEC entry point
    ;
    jmp     esi

%else

    ;
    ; Transition the processor from 32-bit flat mode to 64-bit flat mode
    ;
    OneTimeCall Transition32FlatTo64Flat

BITS    64

    ;
    ; Some values were calculated in 32-bit mode.  Make sure the upper
    ; 32-bits of 64-bit registers are zero for these values.
    ;
    mov     rax, 0x00000000ffffffff
    and     rsi, rax
    and     rbp, rax
    and     rsp, rax

    ;
    ; RSI - SEC Core entry point
    ; RBP - Start of BFV
    ;

    ;
    ; Restore initial EAX value into the RAX register
    ;
    mov     rax, rsp

    ;
    ; Jump to the 64-bit SEC entry point
    ;
    jmp     rsi

%endif




  %define SEV_ES_AP_RESET_IP  FixedPcdGet32 (PcdSevEsWorkAreaBase)
;------------------------------------------------------------------------------
; @file
; First code executed by processor after resetting.
; Derived from UefiCpuPkg/ResetVector/Vtf0/Ia16/ResetVectorVtf0.asm
;
; Copyright (c) 2008 - 2014, Intel Corporation. All rights reserved.<BR>
; SPDX-License-Identifier: BSD-2-Clause-Patent
;
;------------------------------------------------------------------------------

BITS    16

ALIGN   16

;
; Pad the image size to 4k when page tables are in VTF0
;
; If the VTF0 image has page tables built in, then we need to make
; sure the end of VTF0 is 4k above where the page tables end.
;
; This is required so the page tables will be 4k aligned when VTF0 is
; located just below 0x100000000 (4GB) in the firmware device.
;
%ifdef ALIGN_TOP_TO_4K_FOR_PAGING
    TIMES (0x1000 - ($ - EndOfPageTables) - 0x20) DB 0
%endif

;
; SEV-ES Processor Reset support
;
; sevEsResetBlock:
;   For the initial boot of an AP under SEV-ES, the "reset" RIP must be
;   programmed to the RAM area defined by SEV_ES_AP_RESET_IP. A known offset
;   and GUID will be used to locate this block in the firmware and extract
;   the build time RIP value. The GUID must always be 48 bytes from the
;   end of the firmware.
;
;   0xffffffca (-0x36) - IP value
;   0xffffffcc (-0x34) - CS segment base [31:16]
;   0xffffffce (-0x32) - Size of the SEV-ES reset block
;   0xffffffd0 (-0x30) - SEV-ES reset block GUID
;                        (00f771de-1a7e-4fcb-890e-68c77e2fb44e)
;
;   A hypervisor reads the CS segement base and IP value. The CS segment base
;   value represents the high order 16-bits of the CS segment base, so the
;   hypervisor must left shift the value of the CS segement base by 16 bits to
;   form the full CS segment base for the CS segment register. It would then
;   program the EIP register with the IP value as read.
;

TIMES (32 - (sevEsResetBlockEnd - sevEsResetBlockStart)) DB 0

sevEsResetBlockStart:
    DD      SEV_ES_AP_RESET_IP
    DW      sevEsResetBlockEnd - sevEsResetBlockStart
    DB      0xDE, 0x71, 0xF7, 0x00, 0x7E, 0x1A, 0xCB, 0x4F
    DB      0x89, 0x0E, 0x68, 0xC7, 0x7E, 0x2F, 0xB4, 0x4E
sevEsResetBlockEnd:

ALIGN   16

applicationProcessorEntryPoint:
;
; Application Processors entry point
;
; GenFv generates code aligned on a 4k boundary which will jump to this
; location.  (0xffffffe0)  This allows the Local APIC Startup IPI to be
; used to wake up the application processors.
;
    jmp     EarlyApInitReal16

ALIGN   8

    DD      0

;
; The VTF signature
;
; VTF-0 means that the VTF (Volume Top File) code does not require
; any fixups.
;
vtfSignature:
    DB      'V', 'T', 'F', 0

ALIGN   16

resetVector:
;
; Reset Vector
;
; This is where the processor will begin execution
;
    nop
    nop
    jmp     EarlyBspInitReal16

ALIGN   16

fourGigabytes:



