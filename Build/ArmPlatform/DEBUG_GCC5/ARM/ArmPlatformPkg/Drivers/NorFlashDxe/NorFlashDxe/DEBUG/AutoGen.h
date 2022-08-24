/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_93E34C7E_B50E_11DF_9223_2443DFD72085
#define _AUTOGENH_93E34C7E_B50E_11DF_9223_2443DFD72085

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x93E34C7E, 0xB50E, 0x11DF, {0x92, 0x23, 0x24, 0x43, 0xDF, 0xD7, 0x20, 0x85}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x9ce08891, 0xac9c, 0x476d, {0xab, 0x04, 0x0c, 0x04, 0xd3, 0xa9, 0x75, 0x44}}

// Guids
extern EFI_GUID gEfiSystemNvDataFvGuid;
extern EFI_GUID gEfiVariableGuid;
extern EFI_GUID gEfiAuthenticatedVariableGuid;
extern EFI_GUID gEfiEventVirtualAddressChangeGuid;
extern EFI_GUID gEdkiiNvVarStoreFormattedGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
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
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeBlockProtocolGuid;
extern EFI_GUID gEfiDiskIoProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
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

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  42U
#define _PCD_SIZE_PcdFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase  _PCD_SIZE_PcdFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdFlashNvStorageVariableBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  43U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  40U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase  _PCD_SIZE_PcdFlashNvStorageFtwWorkingBase 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  41U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize  _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  38U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase  _PCD_SIZE_PcdFlashNvStorageFtwSpareBase 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  39U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdNorFlashCheckBlockLocked  13U
#define _PCD_SIZE_PcdNorFlashCheckBlockLocked 1
#define _PCD_GET_MODE_SIZE_PcdNorFlashCheckBlockLocked  _PCD_SIZE_PcdNorFlashCheckBlockLocked 
#define _PCD_VALUE_PcdNorFlashCheckBlockLocked  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdNorFlashCheckBlockLocked;
#define _PCD_GET_MODE_BOOL_PcdNorFlashCheckBlockLocked  _gPcd_FixedAtBuild_PcdNorFlashCheckBlockLocked
//#define _PCD_SET_MODE_BOOL_PcdNorFlashCheckBlockLocked  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
NorFlashInitialise (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
