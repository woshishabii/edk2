/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_34C8C28F_B61C_45a2_8F2E_89E46BECC63B
#define _AUTOGENH_34C8C28F_B61C_45a2_8F2E_89E46BECC63B

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x34C8C28F, 0xB61C, 0x45a2, {0x8F, 0x2E, 0x89, 0xE4, 0x6B, 0xEC, 0xC6, 0x3B}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x37d7e986, 0xf7e9, 0x45c2, {0x80, 0x67, 0xe3, 0x71, 0x42, 0x1a, 0x62, 0x6c}}

// Guids
extern EFI_GUID gEfiAuthenticatedVariableGuid;
extern EFI_GUID gEfiVariableGuid;
extern EFI_GUID gEfiVariableIndexTableGuid;
extern EFI_GUID gEfiSystemNvDataFvGuid;
extern EFI_GUID gEdkiiFaultTolerantWriteGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gArmVirtTokenSpaceGuid;

// PPIs
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  104U
#define _PCD_SIZE_PcdFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase  _PCD_SIZE_PcdFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdFlashNvStorageVariableBase  0x04000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase64  105U
#define _PCD_SIZE_PcdFlashNvStorageVariableBase64 8
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase64  _PCD_SIZE_PcdFlashNvStorageVariableBase64 
#define _PCD_VALUE_PcdFlashNvStorageVariableBase64  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase64;
#define _PCD_GET_MODE_64_PcdFlashNvStorageVariableBase64  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableBase64
//#define _PCD_SET_MODE_64_PcdFlashNvStorageVariableBase64  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  106U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x00040000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuVariableNvModeEnable  91U
#define _PCD_SIZE_PcdEmuVariableNvModeEnable 1
#define _PCD_GET_MODE_SIZE_PcdEmuVariableNvModeEnable  _PCD_SIZE_PcdEmuVariableNvModeEnable 
#define _PCD_VALUE_PcdEmuVariableNvModeEnable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdEmuVariableNvModeEnable;
#define _PCD_GET_MODE_BOOL_PcdEmuVariableNvModeEnable  _gPcd_FixedAtBuild_PcdEmuVariableNvModeEnable
//#define _PCD_SET_MODE_BOOL_PcdEmuVariableNvModeEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeVariableServices (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
