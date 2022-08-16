//
// Created by hermione on 15.08.22.
//

#ifndef EFIFRONTEND_EFI_MONITOR_H
#define EFIFRONTEND_EFI_MONITOR_H
#include "cmake-build-debug/_deps/lvgl-src/src/lvgl.h"
#include <efi.h>
#include <efilib.h>
void efi_gop_blt_flush(lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p);
#endif //EFIFRONTEND_EFI_MONITOR_H
