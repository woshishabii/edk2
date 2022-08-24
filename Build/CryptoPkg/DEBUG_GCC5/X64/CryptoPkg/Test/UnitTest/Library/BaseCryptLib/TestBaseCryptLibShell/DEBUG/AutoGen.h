/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_ed54ee8c_ef7a_41f2_83d5_0e0d4cd88c21
#define _AUTOGENH_ed54ee8c_ef7a_41f2_83d5_0e0d4cd88c21

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xed54ee8c, 0xef7a, 0x41f2, {0x83, 0xd5, 0x0e, 0x0d, 0x4c, 0xd8, 0x8c, 0x21}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xE1063286, 0x6C8C, 0x4c25, {0xAE, 0xF0, 0x67, 0xA9, 0xA5, 0xB6, 0xE6, 0xB6}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUnitTestFrameworkPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
