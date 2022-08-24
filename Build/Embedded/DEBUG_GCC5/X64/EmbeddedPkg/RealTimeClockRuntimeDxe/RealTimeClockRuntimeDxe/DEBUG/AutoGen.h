/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B336F62D_4135_4A55_AE4E_4971BBF0885D
#define _AUTOGENH_B336F62D_4135_4A55_AE4E_4971BBF0885D

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xB336F62D, 0x4135, 0x4A55, {0xAE, 0x4E, 0x49, 0x71, 0xBB, 0xF0, 0x88, 0x5D}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x8DBB580B, 0xCF89, 0x4D57, {0x95, 0xC6, 0xDF, 0xE9, 0x6C, 0x44, 0x68, 0x6E}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiRealTimeClockArchProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeRealTimeClock (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
