/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_23A089B3_EED5_4ac5_B2AB_43E3298C2343
#define _AUTOGENH_23A089B3_EED5_4ac5_B2AB_43E3298C2343

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x23A089B3, 0xEED5, 0x4ac5, {0xB2, 0xAB, 0x43, 0xE3, 0x29, 0x8C, 0x23, 0x43}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}}

// Guids
extern EFI_GUID gEfiAuthenticatedVariableGuid;
extern EFI_GUID gEfiVariableGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiMemoryOverwriteControlDataGuid;
extern EFI_GUID gEfiMemoryOverwriteRequestControlLockGuid;
extern EFI_GUID gSmmVariableWriteGuid;
extern EFI_GUID gEfiSystemNvDataFvGuid;
extern EFI_GUID gEdkiiFaultTolerantWriteGuid;
extern EFI_GUID gEdkiiVarErrorFlagGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
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
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiHardwareErrorVariableGuid;
extern EFI_GUID gEfiMemoryAttributesTableGuid;
extern EFI_GUID gVarCheckPolicyLibMmiHandlerGuid;
extern EFI_GUID gEfiImageSecurityDatabaseGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;

// Protocols
extern EFI_GUID gEfiSmmFirmwareVolumeBlockProtocolGuid;
extern EFI_GUID gEfiSmmFaultTolerantWriteProtocolGuid;
extern EFI_GUID gEfiSmmVariableProtocolGuid;
extern EFI_GUID gEfiMmEndOfDxeProtocolGuid;
extern EFI_GUID gEdkiiSmmVarCheckProtocolGuid;
extern EFI_GUID gEfiTcgProtocolGuid;
extern EFI_GUID gEfiTcg2ProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
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
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiMmBaseProtocolGuid;
extern EFI_GUID gEfiSmmReadyToLockProtocolGuid;
extern EFI_GUID gEfiSmmEndOfDxeProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeBlock2ProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdVariableCollectStatistics  173U
#define _PCD_SIZE_PcdVariableCollectStatistics 1
#define _PCD_GET_MODE_SIZE_PcdVariableCollectStatistics  _PCD_SIZE_PcdVariableCollectStatistics 
#define _PCD_VALUE_PcdVariableCollectStatistics  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVariableCollectStatistics;
#define _PCD_GET_MODE_BOOL_PcdVariableCollectStatistics  _gPcd_FixedAtBuild_PcdVariableCollectStatistics
//#define _PCD_SET_MODE_BOOL_PcdVariableCollectStatistics  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiVariableDefaultLangDeprecate  208U
#define _PCD_SIZE_PcdUefiVariableDefaultLangDeprecate 1
#define _PCD_GET_MODE_SIZE_PcdUefiVariableDefaultLangDeprecate  _PCD_SIZE_PcdUefiVariableDefaultLangDeprecate 
#define _PCD_VALUE_PcdUefiVariableDefaultLangDeprecate  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUefiVariableDefaultLangDeprecate;
#define _PCD_GET_MODE_BOOL_PcdUefiVariableDefaultLangDeprecate  _gPcd_FixedAtBuild_PcdUefiVariableDefaultLangDeprecate
//#define _PCD_SET_MODE_BOOL_PcdUefiVariableDefaultLangDeprecate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  65U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  63U
#define _PCD_SIZE_PcdFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase  _PCD_SIZE_PcdFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdFlashNvStorageVariableBase  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase64  64U
#define _PCD_SIZE_PcdFlashNvStorageVariableBase64 8
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase64  _PCD_SIZE_PcdFlashNvStorageVariableBase64 
#define _PCD_VALUE_PcdFlashNvStorageVariableBase64  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase64;
#define _PCD_GET_MODE_64_PcdFlashNvStorageVariableBase64  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase64
//#define _PCD_SET_MODE_64_PcdFlashNvStorageVariableBase64  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxVariableSize  97U
#define _PCD_SIZE_PcdMaxVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdMaxVariableSize  _PCD_SIZE_PcdMaxVariableSize 
#define _PCD_VALUE_PcdMaxVariableSize  0x400U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxVariableSize;
#define _PCD_GET_MODE_32_PcdMaxVariableSize  _gPcd_FixedAtBuild_PcdMaxVariableSize
//#define _PCD_SET_MODE_32_PcdMaxVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxAuthVariableSize  85U
#define _PCD_SIZE_PcdMaxAuthVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdMaxAuthVariableSize  _PCD_SIZE_PcdMaxAuthVariableSize 
#define _PCD_VALUE_PcdMaxAuthVariableSize  0x00U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxAuthVariableSize;
#define _PCD_GET_MODE_32_PcdMaxAuthVariableSize  _gPcd_FixedAtBuild_PcdMaxAuthVariableSize
//#define _PCD_SET_MODE_32_PcdMaxAuthVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxVolatileVariableSize  98U
#define _PCD_SIZE_PcdMaxVolatileVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdMaxVolatileVariableSize  _PCD_SIZE_PcdMaxVolatileVariableSize 
#define _PCD_VALUE_PcdMaxVolatileVariableSize  0x00U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxVolatileVariableSize;
#define _PCD_GET_MODE_32_PcdMaxVolatileVariableSize  _gPcd_FixedAtBuild_PcdMaxVolatileVariableSize
//#define _PCD_SET_MODE_32_PcdMaxVolatileVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxHardwareErrorVariableSize  88U
#define _PCD_SIZE_PcdMaxHardwareErrorVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdMaxHardwareErrorVariableSize  _PCD_SIZE_PcdMaxHardwareErrorVariableSize 
#define _PCD_VALUE_PcdMaxHardwareErrorVariableSize  0x8000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxHardwareErrorVariableSize;
#define _PCD_GET_MODE_32_PcdMaxHardwareErrorVariableSize  _gPcd_FixedAtBuild_PcdMaxHardwareErrorVariableSize
//#define _PCD_SET_MODE_32_PcdMaxHardwareErrorVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVariableStoreSize  174U
#define _PCD_SIZE_PcdVariableStoreSize 4
#define _PCD_GET_MODE_SIZE_PcdVariableStoreSize  _PCD_SIZE_PcdVariableStoreSize 
#define _PCD_VALUE_PcdVariableStoreSize  0x10000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVariableStoreSize;
#define _PCD_GET_MODE_32_PcdVariableStoreSize  _gPcd_FixedAtBuild_PcdVariableStoreSize
//#define _PCD_SET_MODE_32_PcdVariableStoreSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHwErrStorageSize  76U
#define _PCD_SIZE_PcdHwErrStorageSize 4
#define _PCD_GET_MODE_SIZE_PcdHwErrStorageSize  _PCD_SIZE_PcdHwErrStorageSize 
#define _PCD_VALUE_PcdHwErrStorageSize  0x0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdHwErrStorageSize;
#define _PCD_GET_MODE_32_PcdHwErrStorageSize  _gPcd_FixedAtBuild_PcdHwErrStorageSize
//#define _PCD_SET_MODE_32_PcdHwErrStorageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxUserNvVariableSpaceSize  96U
#define _PCD_SIZE_PcdMaxUserNvVariableSpaceSize 4
#define _PCD_GET_MODE_SIZE_PcdMaxUserNvVariableSpaceSize  _PCD_SIZE_PcdMaxUserNvVariableSpaceSize 
#define _PCD_VALUE_PcdMaxUserNvVariableSpaceSize  0x00U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxUserNvVariableSpaceSize;
#define _PCD_GET_MODE_32_PcdMaxUserNvVariableSpaceSize  _gPcd_FixedAtBuild_PcdMaxUserNvVariableSpaceSize
//#define _PCD_SET_MODE_32_PcdMaxUserNvVariableSpaceSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBoottimeReservedNvVariableSpaceSize  13U
#define _PCD_SIZE_PcdBoottimeReservedNvVariableSpaceSize 4
#define _PCD_GET_MODE_SIZE_PcdBoottimeReservedNvVariableSpaceSize  _PCD_SIZE_PcdBoottimeReservedNvVariableSpaceSize 
#define _PCD_VALUE_PcdBoottimeReservedNvVariableSpaceSize  0x00U
extern const  UINT32  _gPcd_FixedAtBuild_PcdBoottimeReservedNvVariableSpaceSize;
#define _PCD_GET_MODE_32_PcdBoottimeReservedNvVariableSpaceSize  _gPcd_FixedAtBuild_PcdBoottimeReservedNvVariableSpaceSize
//#define _PCD_SET_MODE_32_PcdBoottimeReservedNvVariableSpaceSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdReclaimVariableSpaceAtEndOfDxe  122U
#define _PCD_SIZE_PcdReclaimVariableSpaceAtEndOfDxe 1
#define _PCD_GET_MODE_SIZE_PcdReclaimVariableSpaceAtEndOfDxe  _PCD_SIZE_PcdReclaimVariableSpaceAtEndOfDxe 
#define _PCD_VALUE_PcdReclaimVariableSpaceAtEndOfDxe  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdReclaimVariableSpaceAtEndOfDxe;
#define _PCD_GET_MODE_BOOL_PcdReclaimVariableSpaceAtEndOfDxe  _gPcd_FixedAtBuild_PcdReclaimVariableSpaceAtEndOfDxe
//#define _PCD_SET_MODE_BOOL_PcdReclaimVariableSpaceAtEndOfDxe  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuVariableNvModeEnable  47U
#define _PCD_SIZE_PcdEmuVariableNvModeEnable 1
#define _PCD_GET_MODE_SIZE_PcdEmuVariableNvModeEnable  _PCD_SIZE_PcdEmuVariableNvModeEnable 
#define _PCD_VALUE_PcdEmuVariableNvModeEnable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdEmuVariableNvModeEnable;
#define _PCD_GET_MODE_BOOL_PcdEmuVariableNvModeEnable  _gPcd_FixedAtBuild_PcdEmuVariableNvModeEnable
//#define _PCD_SET_MODE_BOOL_PcdEmuVariableNvModeEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuVariableNvStoreReserved  48U
#define _PCD_SIZE_PcdEmuVariableNvStoreReserved 8
#define _PCD_GET_MODE_SIZE_PcdEmuVariableNvStoreReserved  _PCD_SIZE_PcdEmuVariableNvStoreReserved 
#define _PCD_VALUE_PcdEmuVariableNvStoreReserved  0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdEmuVariableNvStoreReserved;
#define _PCD_GET_MODE_64_PcdEmuVariableNvStoreReserved  _gPcd_FixedAtBuild_PcdEmuVariableNvStoreReserved
//#define _PCD_SET_MODE_64_PcdEmuVariableNvStoreReserved  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
VariableServiceInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
