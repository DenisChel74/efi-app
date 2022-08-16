//
// Created by hermione on 15.08.22.
//

#include "efi_monitor.h"

typedef struct {
    EFI_GRAPHICS_OUTPUT_PROTOCOL *Gop;
    UINTN Width;
    UINTN Height;
} MONITOR_PRIVATE;

STATIC MONITOR_PRIVATE *tPrivate = NULL;

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

void efi_gop_blt_flush(lv_disp_drv_t *disp_drv, const lv_area_t *area, lv_color_t *color_p) {
//    lv_coord_t w = area->x2 - area->x1 + 1;
//    lv_coord_t h = area->y2 - area->y1 + 1;
//
//    EFI_STATUS Status;
//    UINTN Index;
//    EFI_GRAPHICS_OUTPUT_PROTOCOL *GraphicsOutput;
//    EFI_HANDLE *HndlBuf;
//    UINTN HndlNum;
//
//    Status = gBS->LocateHandleBuffer(ByProtocol, &gEfiGraphicsOutputProtocolGuid, NULL, &HndlNum, &HndlBuf);
//    if (EFI_ERROR(Status) || HndlNum == 0) {
//        return;
//    }
//
//    for (Index = 0; Index < HndlNum; Index++) {
//
//        Status = gBS->HandleProtocol(
//                HndlBuf[Index],
//                &gEfiGraphicsOutputProtocolGuid,
//                (VOID **) &GraphicsOutput
//        );
//        if (EFI_ERROR(Status)) {
//            continue;
//        }
//
//
//        GraphicsOutput->Blt(
//                GraphicsOutput,
//                (EFI_GRAPHICS_OUTPUT_BLT_PIXEL *) color_p,
//                EfiBltBufferToVideo,
//                0,
//                0,
//                area->x1,
//                area->y1,
//                w,
//                h,
//                0
//        );
//    }
//
//    gBS->FreePool(HndlBuf);
//
//    /*IMPORTANT! It must be called to tell the system the flush is ready*/
//    lv_disp_flush_ready(disp_drv);
}