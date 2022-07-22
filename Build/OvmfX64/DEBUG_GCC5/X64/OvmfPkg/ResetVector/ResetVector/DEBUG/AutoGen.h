/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1BA0062E_C779_4582_8566_336AE8F78F09
#define _AUTOGENH_1BA0062E_C779_4582_8566_336AE8F78F09

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x1BA0062E, 0xC779, 0x4582, {0x85, 0x66, 0x33, 0x6A, 0xE8, 0xF7, 0x8F, 0x09}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSevEsWorkAreaBase  252U
#define _PCD_SIZE_PcdSevEsWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdSevEsWorkAreaBase  _PCD_SIZE_PcdSevEsWorkAreaBase 
#define _PCD_VALUE_PcdSevEsWorkAreaBase  0x0080B000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase;
#define _PCD_GET_MODE_32_PcdSevEsWorkAreaBase  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase
//#define _PCD_SET_MODE_32_PcdSevEsWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbBase  275U
#define _PCD_SIZE_PcdOvmfSecGhcbBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBase  _PCD_SIZE_PcdOvmfSecGhcbBase 
#define _PCD_VALUE_PcdOvmfSecGhcbBase  0x00809000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbSize  278U
#define _PCD_SIZE_PcdOvmfSecGhcbSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbSize  _PCD_SIZE_PcdOvmfSecGhcbSize 
#define _PCD_VALUE_PcdOvmfSecGhcbSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbPageTableBase  276U
#define _PCD_SIZE_PcdOvmfSecGhcbPageTableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbPageTableBase  _PCD_SIZE_PcdOvmfSecGhcbPageTableBase 
#define _PCD_VALUE_PcdOvmfSecGhcbPageTableBase  0x00808000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbPageTableBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbPageTableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbPageTableSize  277U
#define _PCD_SIZE_PcdOvmfSecGhcbPageTableSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbPageTableSize  _PCD_SIZE_PcdOvmfSecGhcbPageTableSize 
#define _PCD_VALUE_PcdOvmfSecGhcbPageTableSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbPageTableSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbPageTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPageTablesBase  279U
#define _PCD_SIZE_PcdOvmfSecPageTablesBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesBase  _PCD_SIZE_PcdOvmfSecPageTablesBase 
#define _PCD_VALUE_PcdOvmfSecPageTablesBase  0x00800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesBase  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPageTablesSize  280U
#define _PCD_SIZE_PcdOvmfSecPageTablesSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesSize  _PCD_SIZE_PcdOvmfSecPageTablesSize 
#define _PCD_VALUE_PcdOvmfSecPageTablesSize  0x00006000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesSize  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPeiTempRamBase  281U
#define _PCD_SIZE_PcdOvmfSecPeiTempRamBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamBase  _PCD_SIZE_PcdOvmfSecPeiTempRamBase 
#define _PCD_VALUE_PcdOvmfSecPeiTempRamBase  0x00810000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamBase  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPeiTempRamSize  282U
#define _PCD_SIZE_PcdOvmfSecPeiTempRamSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamSize  _PCD_SIZE_PcdOvmfSecPeiTempRamSize 
#define _PCD_VALUE_PcdOvmfSecPeiTempRamSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamSize  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
