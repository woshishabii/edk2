/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1BB737EF_427A_4144_8B3B_B76EF38515E6
#define _AUTOGENH_1BB737EF_427A_4144_8B3B_B76EF38515E6

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x1BB737EF, 0x427A, 0x4144, {0x8B, 0x3B, 0xB7, 0x6E, 0xF3, 0x85, 0x15, 0xE6}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;

// PPIs
extern EFI_GUID gEdkiiPeiSdMmcHostControllerPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSdMmcPciHostControllerMmioBase  127U
#define _PCD_SIZE_PcdSdMmcPciHostControllerMmioBase 4
#define _PCD_GET_MODE_SIZE_PcdSdMmcPciHostControllerMmioBase  _PCD_SIZE_PcdSdMmcPciHostControllerMmioBase 
#define _PCD_VALUE_PcdSdMmcPciHostControllerMmioBase  0xd0000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSdMmcPciHostControllerMmioBase;
#define _PCD_GET_MODE_32_PcdSdMmcPciHostControllerMmioBase  _gPcd_FixedAtBuild_PcdSdMmcPciHostControllerMmioBase
//#define _PCD_SET_MODE_32_PcdSdMmcPciHostControllerMmioBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeSdMmcHcPeim (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
