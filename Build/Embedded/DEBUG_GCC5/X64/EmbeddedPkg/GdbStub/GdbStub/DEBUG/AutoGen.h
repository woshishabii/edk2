/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1F2CCB4F_D817_404E_98E7_80E4851FB33E
#define _AUTOGENH_1F2CCB4F_D817_404E_98E7_80E4851FB33E

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x1F2CCB4F, 0xD817, 0x404E, {0x98, 0xE7, 0x80, 0xE4, 0x85, 0x1F, 0xB3, 0x3E}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x8DBB580B, 0xCF89, 0x4D57, {0x95, 0xC6, 0xDF, 0xE9, 0x6C, 0x44, 0x68, 0x6E}}

// Guids
extern EFI_GUID gEfiDebugImageInfoTableGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;

// Protocols
extern EFI_GUID gEfiDebugSupportProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiSerialIoProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdGdbMaxPacketRetryCount  25U
#define _PCD_SIZE_PcdGdbMaxPacketRetryCount 4
#define _PCD_GET_MODE_SIZE_PcdGdbMaxPacketRetryCount  _PCD_SIZE_PcdGdbMaxPacketRetryCount 
#define _PCD_VALUE_PcdGdbMaxPacketRetryCount  10000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGdbMaxPacketRetryCount;
#define _PCD_GET_MODE_32_PcdGdbMaxPacketRetryCount  _gPcd_FixedAtBuild_PcdGdbMaxPacketRetryCount
//#define _PCD_SET_MODE_32_PcdGdbMaxPacketRetryCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGdbSerial  27U
#define _PCD_SIZE_PcdGdbSerial 1
#define _PCD_GET_MODE_SIZE_PcdGdbSerial  _PCD_SIZE_PcdGdbSerial 
#define _PCD_VALUE_PcdGdbSerial  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdGdbSerial;
#define _PCD_GET_MODE_BOOL_PcdGdbSerial  _gPcd_FixedAtBuild_PcdGdbSerial
//#define _PCD_SET_MODE_BOOL_PcdGdbSerial  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
GdbStubEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
