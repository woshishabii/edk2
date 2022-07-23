#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
EFIAPI
UefiMain(
    EFI_HANDLE ImageHandle, 
    EFI_SYSTEM_TABLE *SystemTable
    )
{
    EFI_STATUS Status = EFI_SUCCESS;
    UINTN NoHandlers = 0;
    EFI_HANDLE *Buffer = NULL;
    Status = gBS->LocateHandleBuffer(
        ByProtocol,
        &gEfiGraphicsOutputProtocolGuid,
        NULL,
        &NoHandlers,
        &Buffer
    );

    Print(L"Status = %d.\n", Status);
    if(EFI_ERROR(Status))
    {
        Print(L"Failed to LocateHandleBuffer,\n");
        return Status;
    }
    Print(L"Hello, Protocol!\n");
    return Status;
}