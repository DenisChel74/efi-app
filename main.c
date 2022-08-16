#include <efi.h>
#include <efilib.h>
#include "lvgl.h"

#define W_RESOLUTION 320
#define H_RESOLUTION 240

static lv_disp_draw_buf_t disp_buf;
static lv_color_t buf1[W_RESOLUTION * H_RESOLUTION / 10] = {0};

EFI_STATUS
EFIAPI
efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
    InitializeLib(ImageHandle, SystemTable);
    lv_init();
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    lv_disp_draw_buf_init(&disp_buf, buf1, NULL, W_RESOLUTION * H_RESOLUTION); /*Initialize the display buffer.*/
    lv_disp_drv_register(&disp_drv);
    Print(L"DEBUG: INITIALIZE APPLICATION");
    while (TRUE) {
        lv_tick_inc(5);
        lv_task_handler();
        gBS->Stall(1000 * 5);
    }
    return EFI_SUCCESS;
}
