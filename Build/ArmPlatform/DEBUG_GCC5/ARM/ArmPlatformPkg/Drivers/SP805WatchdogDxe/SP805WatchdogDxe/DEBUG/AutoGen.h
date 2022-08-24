/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_ebd705fb_fa92_46a7_b32b_7f566d944614
#define _AUTOGENH_ebd705fb_fa92_46a7_b32b_7f566d944614

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xebd705fb, 0xfa92, 0x46a7, {0xb3, 0x2b, 0x7f, 0x56, 0x6d, 0x94, 0x46, 0x14}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x9ce08891, 0xac9c, 0x476d, {0xab, 0x04, 0x0c, 0x04, 0xd3, 0xa9, 0x75, 0x44}}

// Guids
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gHardwareInterruptProtocolGuid;
extern EFI_GUID gEfiWatchdogTimerArchProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSP805WatchdogBase  18U
#define _PCD_SIZE_PcdSP805WatchdogBase 4
#define _PCD_GET_MODE_SIZE_PcdSP805WatchdogBase  _PCD_SIZE_PcdSP805WatchdogBase 
#define _PCD_VALUE_PcdSP805WatchdogBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSP805WatchdogBase;
#define _PCD_GET_MODE_32_PcdSP805WatchdogBase  _gPcd_FixedAtBuild_PcdSP805WatchdogBase
//#define _PCD_SET_MODE_32_PcdSP805WatchdogBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSP805WatchdogClockFrequencyInHz  19U
#define _PCD_SIZE_PcdSP805WatchdogClockFrequencyInHz 4
#define _PCD_GET_MODE_SIZE_PcdSP805WatchdogClockFrequencyInHz  _PCD_SIZE_PcdSP805WatchdogClockFrequencyInHz 
#define _PCD_VALUE_PcdSP805WatchdogClockFrequencyInHz  32000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSP805WatchdogClockFrequencyInHz;
#define _PCD_GET_MODE_32_PcdSP805WatchdogClockFrequencyInHz  _gPcd_FixedAtBuild_PcdSP805WatchdogClockFrequencyInHz
//#define _PCD_SET_MODE_32_PcdSP805WatchdogClockFrequencyInHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSP805WatchdogInterrupt  20U
#define _PCD_SIZE_PcdSP805WatchdogInterrupt 4
#define _PCD_GET_MODE_SIZE_PcdSP805WatchdogInterrupt  _PCD_SIZE_PcdSP805WatchdogInterrupt 
#define _PCD_VALUE_PcdSP805WatchdogInterrupt  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSP805WatchdogInterrupt;
#define _PCD_GET_MODE_32_PcdSP805WatchdogInterrupt  _gPcd_FixedAtBuild_PcdSP805WatchdogInterrupt
//#define _PCD_SET_MODE_32_PcdSP805WatchdogInterrupt  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SP805Initialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
