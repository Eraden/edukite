/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_welcome_screen(lv_ui *ui)
{
    //Write codes welcome_screen
    ui->welcome_screen = lv_obj_create(NULL);
    lv_obj_set_size(ui->welcome_screen, 1600, 1200);
    lv_obj_set_scrollbar_mode(ui->welcome_screen, LV_SCROLLBAR_MODE_OFF);

    //Write style for welcome_screen, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->welcome_screen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes welcome_screen_cont_1
    ui->welcome_screen_cont_1 = lv_obj_create(ui->welcome_screen);
    lv_obj_set_pos(ui->welcome_screen_cont_1, 0, 0);
    lv_obj_set_size(ui->welcome_screen_cont_1, 1600, 1200);
    lv_obj_set_scrollbar_mode(ui->welcome_screen_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for welcome_screen_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->welcome_screen_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->welcome_screen_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->welcome_screen_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->welcome_screen_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->welcome_screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->welcome_screen_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->welcome_screen_cont_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->welcome_screen_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->welcome_screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->welcome_screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->welcome_screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->welcome_screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->welcome_screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes welcome_screen_btn_1
    ui->welcome_screen_btn_1 = lv_button_create(ui->welcome_screen_cont_1);
    lv_obj_set_pos(ui->welcome_screen_btn_1, 502, 466);
    lv_obj_set_size(ui->welcome_screen_btn_1, 100, 50);
    ui->welcome_screen_btn_1_label = lv_label_create(ui->welcome_screen_btn_1);
    lv_label_set_text(ui->welcome_screen_btn_1_label, "Button");
    lv_label_set_long_mode(ui->welcome_screen_btn_1_label, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_align(ui->welcome_screen_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->welcome_screen_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->welcome_screen_btn_1_label, LV_PCT(100));

    //Write style for welcome_screen_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->welcome_screen_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->welcome_screen_btn_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->welcome_screen_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->welcome_screen_btn_1, lv_color_hex(0x5482a9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->welcome_screen_btn_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->welcome_screen_btn_1, 31, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->welcome_screen_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->welcome_screen_btn_1, lv_color_hex(0x12548b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->welcome_screen_btn_1, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->welcome_screen_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->welcome_screen_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of welcome_screen.


    //Update current screen layout.
    lv_obj_update_layout(ui->welcome_screen);

}
