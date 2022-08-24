/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_0D1CE46B_72D9_4BA7_95DA_23511865E661
#define _AUTOGENH_0D1CE46B_72D9_4BA7_95DA_23511865E661

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x0D1CE46B, 0x72D9, 0x4BA7, {0x95, 0xDA, 0x23, 0x51, 0x18, 0x65, 0xE6, 0x61}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xE1063286, 0x6C8C, 0x4c25, {0xAE, 0xF0, 0x67, 0xA9, 0xA5, 0xB6, 0xE6, 0xB6}}

// Guids
extern EFI_GUID gEfiCryptoPkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;

// PPIs
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEdkiiCryptoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdCryptoServiceFamilyEnable  1U
#define _PCD_VALUE_PcdCryptoServiceFamilyEnable  (VOID *)_gPcd_FixedAtBuild_PcdCryptoServiceFamilyEnable
extern const UINT8 _gPcd_FixedAtBuild_PcdCryptoServiceFamilyEnable[88];
#define _PCD_GET_MODE_PTR_PcdCryptoServiceFamilyEnable  (VOID *)_gPcd_FixedAtBuild_PcdCryptoServiceFamilyEnable
#define _PCD_SIZE_PcdCryptoServiceFamilyEnable 88
#define _PCD_GET_MODE_SIZE_PcdCryptoServiceFamilyEnable  _PCD_SIZE_PcdCryptoServiceFamilyEnable 
//#define _PCD_SET_MODE_PTR_PcdCryptoServiceFamilyEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
CryptoPeiEntry (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
