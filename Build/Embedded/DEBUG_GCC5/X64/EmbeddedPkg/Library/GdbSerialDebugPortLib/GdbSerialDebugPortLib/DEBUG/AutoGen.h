/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_42ABB10A_660A_4BEC_AEFA_CC94AB4D993D
#define _AUTOGENH_42ABB10A_660A_4BEC_AEFA_CC94AB4D993D

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEmbeddedTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiDebugPortProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdGdbBaudRate  23U
extern const UINT64 _gPcd_FixedAtBuild_PcdGdbBaudRate;
#define _PCD_GET_MODE_64_PcdGdbBaudRate  _gPcd_FixedAtBuild_PcdGdbBaudRate
//#define _PCD_SET_MODE_64_PcdGdbBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdGdbBaudRate 115200
#define _PCD_SIZE_PcdGdbBaudRate 8
#define _PCD_GET_MODE_SIZE_PcdGdbBaudRate _PCD_SIZE_PcdGdbBaudRate
#define _PCD_TOKEN_PcdGdbDataBits  24U
extern const UINT8 _gPcd_FixedAtBuild_PcdGdbDataBits;
#define _PCD_GET_MODE_8_PcdGdbDataBits  _gPcd_FixedAtBuild_PcdGdbDataBits
//#define _PCD_SET_MODE_8_PcdGdbDataBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdGdbDataBits 8
#define _PCD_SIZE_PcdGdbDataBits 1
#define _PCD_GET_MODE_SIZE_PcdGdbDataBits _PCD_SIZE_PcdGdbDataBits
#define _PCD_TOKEN_PcdGdbParity  26U
extern const UINT8 _gPcd_FixedAtBuild_PcdGdbParity;
#define _PCD_GET_MODE_8_PcdGdbParity  _gPcd_FixedAtBuild_PcdGdbParity
//#define _PCD_SET_MODE_8_PcdGdbParity  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdGdbParity 1
#define _PCD_SIZE_PcdGdbParity 1
#define _PCD_GET_MODE_SIZE_PcdGdbParity _PCD_SIZE_PcdGdbParity
#define _PCD_TOKEN_PcdGdbStopBits  28U
extern const UINT8 _gPcd_FixedAtBuild_PcdGdbStopBits;
#define _PCD_GET_MODE_8_PcdGdbStopBits  _gPcd_FixedAtBuild_PcdGdbStopBits
//#define _PCD_SET_MODE_8_PcdGdbStopBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdGdbStopBits 1
#define _PCD_SIZE_PcdGdbStopBits 1
#define _PCD_GET_MODE_SIZE_PcdGdbStopBits _PCD_SIZE_PcdGdbStopBits
#define _PCD_TOKEN_PcdGdbMaxPacketRetryCount  25U
extern const UINT32 _gPcd_FixedAtBuild_PcdGdbMaxPacketRetryCount;
#define _PCD_GET_MODE_32_PcdGdbMaxPacketRetryCount  _gPcd_FixedAtBuild_PcdGdbMaxPacketRetryCount
//#define _PCD_SET_MODE_32_PcdGdbMaxPacketRetryCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdGdbMaxPacketRetryCount 10000000
#define _PCD_SIZE_PcdGdbMaxPacketRetryCount 4
#define _PCD_GET_MODE_SIZE_PcdGdbMaxPacketRetryCount _PCD_SIZE_PcdGdbMaxPacketRetryCount

EFI_STATUS
EFIAPI
GdbSerialLibDebugPortConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
