/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_86D70125_BAA3_4296_A62F_602BEBBB9081
#define _AUTOGENH_86D70125_BAA3_4296_A62F_602BEBBB9081

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x86D70125, 0xBAA3, 0x4296, {0xA6, 0x2F, 0x60, 0x2B, 0xEB, 0xBB, 0x90, 0x81}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x37d7e986, 0xf7e9, 0x45c2, {0x80, 0x67, 0xe3, 0x71, 0x42, 0x1a, 0x62, 0x6c}}

// Guids
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gArmVirtTokenSpaceGuid;
extern EFI_GUID gEdkiiFpdtExtendedFirmwarePerformanceGuid;
extern EFI_GUID gLzmaCustomDecompressGuid;

// PPIs
extern EFI_GUID gEfiDxeIplPpiGuid;
extern EFI_GUID gEfiPeiDecompressPpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gEfiPeiLoadFilePpiGuid;
extern EFI_GUID gEfiPeiS3Resume2PpiGuid;
extern EFI_GUID gEfiPeiRecoveryModulePpiGuid;
extern EFI_GUID gEfiVectorHandoffInfoPpiGuid;
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEdkiiPeiBootInCapsuleOnDiskModePpiGuid;
extern EFI_GUID gEdkiiPeiCapsuleOnDiskPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdDxeIplSupportUefiDecompress  88U
#define _PCD_SIZE_PcdDxeIplSupportUefiDecompress 1
#define _PCD_GET_MODE_SIZE_PcdDxeIplSupportUefiDecompress  _PCD_SIZE_PcdDxeIplSupportUefiDecompress 
#define _PCD_VALUE_PcdDxeIplSupportUefiDecompress  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDxeIplSupportUefiDecompress;
#define _PCD_GET_MODE_BOOL_PcdDxeIplSupportUefiDecompress  _gPcd_FixedAtBuild_PcdDxeIplSupportUefiDecompress
//#define _PCD_SET_MODE_BOOL_PcdDxeIplSupportUefiDecompress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSetNxForStack  151U
#define _PCD_SIZE_PcdSetNxForStack 1
#define _PCD_GET_MODE_SIZE_PcdSetNxForStack  _PCD_SIZE_PcdSetNxForStack 
#define _PCD_VALUE_PcdSetNxForStack  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSetNxForStack;
#define _PCD_GET_MODE_BOOL_PcdSetNxForStack  _gPcd_FixedAtBuild_PcdSetNxForStack
//#define _PCD_SET_MODE_BOOL_PcdSetNxForStack  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDxeNxMemoryProtectionPolicy  89U
#define _PCD_SIZE_PcdDxeNxMemoryProtectionPolicy 8
#define _PCD_GET_MODE_SIZE_PcdDxeNxMemoryProtectionPolicy  _PCD_SIZE_PcdDxeNxMemoryProtectionPolicy 
#define _PCD_VALUE_PcdDxeNxMemoryProtectionPolicy  0xC000000000007FD1ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdDxeNxMemoryProtectionPolicy;
#define _PCD_GET_MODE_64_PcdDxeNxMemoryProtectionPolicy  _gPcd_FixedAtBuild_PcdDxeNxMemoryProtectionPolicy
//#define _PCD_SET_MODE_64_PcdDxeNxMemoryProtectionPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdImageProtectionPolicy  115U
#define _PCD_SIZE_PcdImageProtectionPolicy 4
#define _PCD_GET_MODE_SIZE_PcdImageProtectionPolicy  _PCD_SIZE_PcdImageProtectionPolicy 
#define _PCD_VALUE_PcdImageProtectionPolicy  0x3U
extern const  UINT32  _gPcd_FixedAtBuild_PcdImageProtectionPolicy;
#define _PCD_GET_MODE_32_PcdImageProtectionPolicy  _gPcd_FixedAtBuild_PcdImageProtectionPolicy
//#define _PCD_SET_MODE_32_PcdImageProtectionPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeDxeIpl (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
