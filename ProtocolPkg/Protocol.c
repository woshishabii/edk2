#include <Uefi.h>
#include <Library/UefiLib.h>

EFI_STATUS
EFIAPI
UefiMain(
    EFI_HANDLE ImageHandle, 
    EFI_SYSTEM_TABLE *SystemTable
    )
{
    Print(L"Hello, World!\n");
    return 0;
}