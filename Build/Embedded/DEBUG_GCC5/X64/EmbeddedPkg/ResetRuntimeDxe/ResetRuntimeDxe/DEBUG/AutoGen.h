/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_16036A73_E8EF_46D0_953C_9B8E96527D13
#define _AUTOGENH_16036A73_E8EF_46D0_953C_9B8E96527D13

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x16036A73, 0xE8EF, 0x46D0, {0x95, 0x3C, 0x9B, 0x8E, 0x96, 0x52, 0x7D, 0x13}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x8DBB580B, 0xCF89, 0x4D57, {0x95, 0xC6, 0xDF, 0xE9, 0x6C, 0x44, 0x68, 0x6E}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiResetArchProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeReset (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
