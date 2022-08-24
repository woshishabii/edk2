/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_2FD8B7AD_F8FA_4021_9FC0_0AA572147CDC
#define _AUTOGENH_2FD8B7AD_F8FA_4021_9FC0_0AA572147CDC

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x2FD8B7AD, 0xF8FA, 0x4021, {0x9F, 0xC0, 0x0A, 0xA5, 0x72, 0x14, 0x7C, 0xDC}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x37d7e986, 0xf7e9, 0x45c2, {0x80, 0x67, 0xe3, 0x71, 0x42, 0x1a, 0x62, 0x6c}}

// Guids
extern EFI_GUID gArmMpCoreInfoGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gArmVirtTokenSpaceGuid;

// PPIs
extern EFI_GUID gArmMpCoreInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPrePiCpuIoSize  238U
#define _PCD_SIZE_PcdPrePiCpuIoSize 1
#define _PCD_GET_MODE_SIZE_PcdPrePiCpuIoSize  _PCD_SIZE_PcdPrePiCpuIoSize 
#define _PCD_VALUE_PcdPrePiCpuIoSize  16U
extern const  UINT8  _gPcd_FixedAtBuild_PcdPrePiCpuIoSize;
#define _PCD_GET_MODE_8_PcdPrePiCpuIoSize  _gPcd_FixedAtBuild_PcdPrePiCpuIoSize
//#define _PCD_SET_MODE_8_PcdPrePiCpuIoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeCpuPeim (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
