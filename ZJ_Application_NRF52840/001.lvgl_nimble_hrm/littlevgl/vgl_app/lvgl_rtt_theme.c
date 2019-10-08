/**
 * @file lv_test_theme.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lvgl_rtt_theme.h"

#if 0
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void create_tab1(lv_obj_t * parent);
static void create_tab2(lv_obj_t * parent);
static void create_tab3(lv_obj_t * parent);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/**
 * Create a test screen with a lot objects and apply the given theme on them
 * @param th pointer to a theme
 */
void lv_test_theme(lv_theme_t * th)
{
    lv_theme_set_current(th);
    th = lv_theme_get_current();    /*If `LV_THEME_LIVE_UPDATE  1` `th` is not used directly so get the real theme after set*/
    lv_obj_t * scr = lv_cont_create(NULL, NULL);
    lv_disp_load_scr(scr);

    lv_obj_t * tv = lv_tabview_create(scr, NULL);
    lv_obj_set_size(tv, lv_disp_get_hor_res(NULL), lv_disp_get_ver_res(NULL));
    lv_obj_t * tab1 = lv_tabview_add_tab(tv, "Tab 1");
    lv_obj_t * tab2 = lv_tabview_add_tab(tv, "Tab 2");
    lv_obj_t * tab3 = lv_tabview_add_tab(tv, "Tab 3");

    create_tab1(tab1);
    create_tab2(tab2);
    create_tab3(tab3);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void create_tab1(lv_obj_t * parent)
{
    lv_page_set_scrl_layout(parent, LV_LAYOUT_PRETTY);

    lv_theme_t * th = lv_theme_get_current();

    static lv_style_t h_style;
    lv_style_copy(&h_style, &lv_style_transp);
    h_style.body.padding.inner = LV_DPI / 10;
    h_style.body.padding.left = LV_DPI / 4;
    h_style.body.padding.right = LV_DPI / 4;
    h_style.body.padding.top = LV_DPI / 10;
    h_style.body.padding.bottom = LV_DPI / 10;

    lv_obj_t * h = lv_cont_create(parent, NULL);
    lv_obj_set_style(h, &h_style);
    lv_obj_set_click(h, false);
    lv_cont_set_fit(h, LV_FIT_TIGHT);
    lv_cont_set_layout(h, LV_LAYOUT_COL_M);

    lv_obj_t * btn = lv_btn_create(h, NULL);
    lv_btn_set_fit(btn, LV_FIT_TIGHT);
    lv_btn_set_toggle(btn, true);
    lv_obj_t * btn_label = lv_label_create(btn, NULL);
    lv_label_set_text(btn_label, "Button");

    btn = lv_btn_create(h, btn);
    lv_btn_toggle(btn);
    btn_label = lv_label_create(btn, NULL);
    lv_label_set_text(btn_label, "Toggled");

    btn = lv_btn_create(h, btn);
    lv_btn_set_state(btn, LV_BTN_STATE_INA);
    btn_label = lv_label_create(btn, NULL);
    lv_label_set_text(btn_label, "Inactive");

    lv_obj_t * label = lv_label_create(h, NULL);
    lv_label_set_text(label, "Primary");
    lv_obj_set_style(label, th->style.label.prim);

    label = lv_label_create(h, NULL);
    lv_label_set_text(label, "Secondary");
    lv_obj_set_style(label, th->style.label.sec);

    label = lv_label_create(h, NULL);
    lv_label_set_text(label, "Hint");
    lv_obj_set_style(label, th->style.label.hint);

    static const char * btnm_str[] = {"1", "2", "3", LV_SYMBOL_OK, LV_SYMBOL_CLOSE, ""};
    lv_obj_t * btnm = lv_btnm_create(h, NULL);
    lv_obj_set_size(btnm, lv_disp_get_hor_res(NULL) / 4, 2 * LV_DPI / 3);
    lv_btnm_set_map(btnm, btnm_str);
    lv_btnm_set_btn_ctrl_all(btnm, LV_BTNM_CTRL_TGL_ENABLE);
    lv_btnm_set_one_toggle(btnm, true);

    lv_obj_t * table = lv_table_create(h, NULL);
    lv_table_set_col_cnt(table, 3);
    lv_table_set_row_cnt(table, 4);
    lv_table_set_col_width(table, 0, LV_DPI / 3);
    lv_table_set_col_width(table, 1, LV_DPI / 2);
    lv_table_set_col_width(table, 2, LV_DPI / 2);
    lv_table_set_cell_merge_right(table, 0, 0, true);
    lv_table_set_cell_merge_right(table, 0, 1, true);

    lv_table_set_cell_value(table, 0, 0, "Table");
    lv_table_set_cell_align(table, 0, 0, LV_LABEL_ALIGN_CENTER);

    lv_table_set_cell_value(table, 1, 0, "1");
    lv_table_set_cell_value(table, 1, 1, "13");
    lv_table_set_cell_align(table, 1, 1, LV_LABEL_ALIGN_RIGHT);
    lv_table_set_cell_value(table, 1, 2, "ms");

    lv_table_set_cell_value(table, 2, 0, "2");
    lv_table_set_cell_value(table, 2, 1, "46");
    lv_table_set_cell_align(table, 2, 1, LV_LABEL_ALIGN_RIGHT);
    lv_table_set_cell_value(table, 2, 2, "ms");

    lv_table_set_cell_value(table, 3, 0, "3");
    lv_table_set_cell_value(table, 3, 1, "61");
    lv_table_set_cell_align(table, 3, 1, LV_LABEL_ALIGN_RIGHT);
    lv_table_set_cell_value(table, 3, 2, "ms");

    h = lv_cont_create(parent, h);

    lv_obj_t * sw_h = lv_cont_create(h, NULL);
    lv_cont_set_style(sw_h, LV_CONT_STYLE_MAIN, &lv_style_transp);
    lv_cont_set_fit2(sw_h, LV_FIT_NONE, LV_FIT_TIGHT);
    lv_obj_set_width(sw_h, LV_HOR_RES / 4);
    lv_cont_set_layout(sw_h, LV_LAYOUT_PRETTY);

    lv_obj_t * sw = lv_sw_create(sw_h, NULL);
    lv_sw_set_anim_time(sw, 250);

    sw = lv_sw_create(sw_h, sw);
    lv_sw_on(sw, LV_ANIM_OFF);


    lv_obj_t * bar = lv_bar_create(h, NULL);
    lv_bar_set_value(bar, 70, false);

    lv_obj_t * slider = lv_slider_create(h, NULL);
    lv_bar_set_value(slider, 70, false);

    lv_obj_t * line = lv_line_create(h, NULL);
    static lv_point_t line_p[2];
    line_p[0].x = 0;
    line_p[0].y = 0;
    line_p[1].x = lv_disp_get_hor_res(NULL) / 5;
    line_p[1].y = 0;

    lv_line_set_points(line, line_p, 2);
    lv_line_set_style(line, LV_LINE_STYLE_MAIN, th->style.line.decor);

    lv_obj_t * cb = lv_cb_create(h, NULL);

    cb = lv_cb_create(h, cb);
    lv_btn_set_state(cb, LV_BTN_STATE_TGL_REL);

    lv_obj_t * ddlist = lv_ddlist_create(h, NULL);
    lv_ddlist_set_fix_width(ddlist, lv_obj_get_width(ddlist) + LV_DPI / 2);   /*Make space for the arrow*/
    lv_ddlist_set_draw_arrow(ddlist, true);

    h = lv_cont_create(parent, h);

    lv_obj_t * list = lv_list_create(h, NULL);
    lv_obj_set_size(list, lv_disp_get_hor_res(NULL) / 4, lv_disp_get_ver_res(NULL) / 2);
    lv_obj_t * list_btn;
    list_btn = lv_list_add_btn(list, LV_SYMBOL_GPS,  "GPS");
    lv_btn_set_toggle(list_btn, true);

    lv_list_add_btn(list, LV_SYMBOL_WIFI, "WiFi");
    lv_list_add_btn(list, LV_SYMBOL_GPS, "GPS");
    lv_list_add_btn(list, LV_SYMBOL_AUDIO, "Audio");
    lv_list_add_btn(list, LV_SYMBOL_VIDEO, "Video");
    lv_list_add_btn(list, LV_SYMBOL_CALL, "Call");
    lv_list_add_btn(list, LV_SYMBOL_BELL, "Bell");
    lv_list_add_btn(list, LV_SYMBOL_FILE, "File");
    lv_list_add_btn(list, LV_SYMBOL_EDIT, "Edit");
    lv_list_add_btn(list, LV_SYMBOL_CUT,  "Cut");
    lv_list_add_btn(list, LV_SYMBOL_COPY, "Copy");

    lv_obj_t * roller = lv_roller_create(h, NULL);
    lv_roller_set_options(roller, "Monday\nTuesday\nWednesday\nThursday\nFriday\nSaturday\nSunday", true);
    lv_roller_set_selected(roller, 1, false);
    lv_roller_set_visible_row_count(roller, 3);


}

static void create_tab2(lv_obj_t * parent)
{
    lv_coord_t w = lv_page_get_scrl_width(parent);

    lv_obj_t * chart = lv_chart_create(parent, NULL);
    lv_chart_set_type(chart, LV_CHART_TYPE_AREA);
    lv_obj_set_size(chart, w / 3, lv_disp_get_ver_res(NULL) / 3);
    lv_obj_set_pos(chart, LV_DPI / 10, LV_DPI / 10);
    lv_chart_series_t * s1 = lv_chart_add_series(chart, LV_COLOR_RED);
    lv_chart_set_next(chart, s1, 30);
    lv_chart_set_next(chart, s1, 20);
    lv_chart_set_next(chart, s1, 10);
    lv_chart_set_next(chart, s1, 12);
    lv_chart_set_next(chart, s1, 20);
    lv_chart_set_next(chart, s1, 27);
    lv_chart_set_next(chart, s1, 35);
    lv_chart_set_next(chart, s1, 55);
    lv_chart_set_next(chart, s1, 70);
    lv_chart_set_next(chart, s1, 75);


    lv_obj_t * gauge = lv_gauge_create(parent, NULL);
    lv_gauge_set_value(gauge, 0, 40);
    lv_obj_set_size(gauge, w / 4, w / 4);
    lv_obj_align(gauge, chart, LV_ALIGN_OUT_BOTTOM_LEFT, 0, LV_DPI / 4);


    lv_obj_t * arc = lv_arc_create(parent, NULL);
    lv_obj_align(arc, gauge, LV_ALIGN_OUT_BOTTOM_MID, 0, LV_DPI / 8);

    lv_obj_t * ta = lv_ta_create(parent, NULL);
    lv_obj_set_size(ta, w / 3, lv_disp_get_ver_res(NULL) / 4);
    lv_obj_align(ta, NULL, LV_ALIGN_IN_TOP_RIGHT, -LV_DPI / 10, LV_DPI / 10);
    lv_ta_set_cursor_type(ta, LV_CURSOR_BLOCK);

    lv_obj_t * kb = lv_kb_create(parent, NULL);
    lv_obj_set_size(kb, 2 * w / 3, lv_disp_get_ver_res(NULL) / 3);
    lv_obj_align(kb, ta, LV_ALIGN_OUT_BOTTOM_RIGHT, 0, LV_DPI);
    lv_kb_set_ta(kb, ta);

#if LV_USE_ANIMATION
    lv_obj_t * loader = lv_preload_create(parent, NULL);
    lv_obj_align(loader, NULL, LV_ALIGN_CENTER, 0, - LV_DPI);
#endif
}


static void create_tab3(lv_obj_t * parent)
{
    /*Create a Window*/
    lv_obj_t * win = lv_win_create(parent, NULL);
    lv_obj_t * win_btn = lv_win_add_btn(win, LV_SYMBOL_CLOSE);
    lv_obj_set_event_cb(win_btn, lv_win_close_event_cb);
    lv_win_add_btn(win, LV_SYMBOL_DOWN);
    lv_obj_set_size(win, lv_disp_get_hor_res(NULL) / 2, lv_disp_get_ver_res(NULL) / 2);
    lv_obj_set_pos(win, LV_DPI / 20, LV_DPI / 20);
    lv_obj_set_top(win, true);


    /*Create a Label in the Window*/
    lv_obj_t * label = lv_label_create(win, NULL);
    lv_label_set_text(label, "Label in the window");

    /*Create a  Line meter in the Window*/
    lv_obj_t * lmeter = lv_lmeter_create(win, NULL);
    lv_obj_align(lmeter, label, LV_ALIGN_OUT_BOTTOM_LEFT, 0, LV_DPI / 2);
    lv_lmeter_set_value(lmeter, 70);

    /*Create a 2 LEDs in the Window*/
    lv_obj_t * led1 = lv_led_create(win, NULL);
    lv_obj_align(led1, lmeter, LV_ALIGN_OUT_RIGHT_MID, LV_DPI / 2, 0);
    lv_led_on(led1);

    lv_obj_t * led2 = lv_led_create(win, NULL);
    lv_obj_align(led2, led1, LV_ALIGN_OUT_RIGHT_MID, LV_DPI / 2, 0);
    lv_led_off(led2);

    /*Create a Page*/
    lv_obj_t * page = lv_page_create(parent, NULL);
    lv_obj_set_size(page, lv_disp_get_hor_res(NULL) / 3, lv_disp_get_ver_res(NULL) / 2);
    lv_obj_set_top(page, true);
    lv_obj_align(page, win, LV_ALIGN_IN_TOP_RIGHT,  LV_DPI, LV_DPI);

    label = lv_label_create(page, NULL);
    lv_label_set_text(label, "Lorem ipsum dolor sit amet, repudiare voluptatibus pri cu.\n"
                      "Ei mundi pertinax posidonium eum, cum tempor maiorum at,\n"
                      "mea fuisset assentior ad. Usu cu suas civibus iudicabit.\n"
                      "Eum eu congue tempor facilisi. Tale hinc unum te vim.\n"
                      "Te cum populo animal eruditi, labitur inciderint at nec.\n\n"
                      "Eius corpora et quo. Everti voluptaria instructior est id,\n"
                      "vel in falli primis. Mea ei porro essent admodum,\n"
                      "his ei malis quodsi, te quis aeterno his.\n"
                      "Qui tritani recusabo reprehendunt ne,\n"
                      "per duis explicari at. Simul mediocritatem mei et.");

    /*Create a Calendar*/
    lv_obj_t * cal = lv_calendar_create(parent, NULL);
    lv_obj_set_size(cal, 5 * LV_DPI / 2, 5 * LV_DPI / 2);
    lv_obj_align(cal, page, LV_ALIGN_OUT_RIGHT_TOP, -LV_DPI / 2, LV_DPI / 3);
    lv_obj_set_top(cal, true);

    static lv_calendar_date_t highlighted_days[2];
    highlighted_days[0].day = 5;
    highlighted_days[0].month = 5;
    highlighted_days[0].year = 2018;

    highlighted_days[1].day = 8;
    highlighted_days[1].month = 5;
    highlighted_days[1].year = 2018;

    lv_calendar_set_highlighted_dates(cal, highlighted_days, 2);
    lv_calendar_set_today_date(cal, &highlighted_days[0]);
    lv_calendar_set_showed_date(cal, &highlighted_days[0]);

    /*Create a Message box*/
    static const char * mbox_btn_map[] = {" ", "Got it!", " ", ""};
    lv_obj_t * mbox = lv_mbox_create(parent, NULL);
    lv_mbox_set_text(mbox, "Click on the window or the page to bring it to the foreground");
    lv_mbox_add_btns(mbox, mbox_btn_map);
    lv_btnm_set_btn_ctrl(lv_mbox_get_btnm(mbox), 0, LV_BTNM_CTRL_HIDDEN);
    lv_btnm_set_btn_width(lv_mbox_get_btnm(mbox), 1, 7);
    lv_btnm_set_btn_ctrl(lv_mbox_get_btnm(mbox), 2, LV_BTNM_CTRL_HIDDEN);
    lv_obj_set_top(mbox, true);


}

#else

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void header_create(void);
static void sb_create(void);
static void content_create(void);
static void theme_select_event_handler(lv_obj_t * roller, lv_event_t event);
static void hue_select_event_cb(lv_obj_t * roller, lv_event_t event);
static void init_all_themes(uint16_t hue);
static void bar_set_value(lv_obj_t * bar, int16_t value);

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t * header;
static lv_obj_t * sb;
static lv_obj_t * content;
static lv_theme_t * th_act;

static const char * th_options =
{

#if LV_USE_THEME_NIGHT
        "Night"
#endif

#if LV_USE_THEME_MATERIAL
        "\nMaterial"
#endif

#if LV_USE_THEME_ALIEN
        "\nAlien"
#endif

#if LV_USE_THEME_ZEN
        "\nZen"
#endif

#if LV_USE_THEME_NEMO
        "\nNemo"
#endif

#if LV_USE_THEME_MONO
        "\nMono"
#endif

#if LV_USE_THEME_DEFAULT
        "\nDefault"
#endif
        ""
};

static lv_theme_t * themes[8];

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/**
 * Test run time theme change
 */
void lv_test_theme(lv_theme_t * th)
{
    /* By doing this, we hide the first (empty) option. */
    if(th_options[0] == '\n')
	    th_options++;

    init_all_themes(0);
    th_act = themes[0];
    if(th_act == NULL) {
    	LV_LOG_WARN("lv_test_theme_2: no theme is enabled. Check lv_conf.h");
    	return;
    }


    lv_theme_set_current(th_act);

    lv_obj_t * scr = lv_obj_create(NULL, NULL);
    lv_disp_load_scr(scr);

    header_create();
    sb_create();
    content_create();


}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void header_create(void)
{
    header = lv_cont_create(lv_disp_get_scr_act(NULL), NULL);
    lv_obj_set_width(header, lv_disp_get_hor_res(NULL));

    lv_obj_t * sym = lv_label_create(header, NULL);
    lv_label_set_text(sym, LV_SYMBOL_GPS LV_SYMBOL_WIFI LV_SYMBOL_BLUETOOTH LV_SYMBOL_VOLUME_MAX);
    lv_obj_align(sym, NULL, LV_ALIGN_IN_RIGHT_MID, -LV_DPI/10, 0);

    lv_obj_t * clock = lv_label_create(header, NULL);
    lv_label_set_text(clock, "14:21");
    lv_obj_align(clock, NULL, LV_ALIGN_IN_LEFT_MID, LV_DPI/10, 0);

    lv_cont_set_fit2(header, LV_FIT_NONE, LV_FIT_TIGHT);   /*Let the height set automatically*/
    lv_obj_set_pos(header, 0, 0);

}

static void sb_create(void)
{
    lv_coord_t hres = lv_disp_get_hor_res(NULL);
    lv_coord_t vres = lv_disp_get_ver_res(NULL);

    sb = lv_page_create(lv_disp_get_scr_act(NULL), NULL);
    lv_page_set_scrl_layout(sb, LV_LAYOUT_COL_M);
    lv_page_set_style(sb, LV_PAGE_STYLE_BG, &lv_style_transp_tight);
    lv_page_set_style(sb, LV_PAGE_STYLE_SCRL, &lv_style_transp);

    lv_obj_t * th_label = lv_label_create(sb, NULL);
    lv_label_set_text(th_label, "Theme");

    lv_obj_t * th_roller = lv_roller_create(sb, NULL);
    lv_roller_set_options(th_roller, th_options, true);
    lv_obj_set_event_cb(th_roller, theme_select_event_handler);

    lv_obj_t * hue_label = lv_label_create(sb, NULL);
    lv_label_set_text(hue_label, "\nColor");

    lv_obj_t * hue_roller = lv_roller_create(sb, NULL);
    lv_roller_set_options(hue_roller, "0\n30\n60\n90\n120\n150\n180\n210\n240\n270\n300\n330", true);
    lv_obj_set_event_cb(hue_roller, hue_select_event_cb);

    if(hres > vres) {
        lv_obj_set_height(sb, vres - lv_obj_get_height(header));
        lv_cont_set_fit2(sb, LV_FIT_TIGHT, LV_FIT_NONE);
        lv_obj_align(sb, header, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 0);
        lv_page_set_sb_mode(sb, LV_SB_MODE_DRAG);
    } else {
        lv_obj_set_size(sb, hres, vres / 2 - lv_obj_get_height(header));
        lv_obj_align(sb, header, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 0);
        lv_page_set_sb_mode(sb, LV_SB_MODE_AUTO);
    }
}

static void content_create(void)
{
    lv_coord_t hres = lv_disp_get_hor_res(NULL);
    lv_coord_t vres = lv_disp_get_ver_res(NULL);

    content = lv_page_create(lv_disp_get_scr_act(NULL), NULL);

    if(hres > vres) {
        lv_obj_set_size(content, hres - lv_obj_get_width(sb), vres - lv_obj_get_height(header));
        lv_obj_set_pos(content,  lv_obj_get_width(sb), lv_obj_get_height(header));
    } else {
        lv_obj_set_size(content, hres , vres / 2);
        lv_obj_set_pos(content,  0, vres / 2);
    }

    lv_page_set_scrl_layout(content, LV_LAYOUT_PRETTY);
    lv_page_set_scrl_fit2(content, LV_FIT_FLOOD, LV_FIT_TIGHT);

    lv_coord_t max_w = lv_page_get_fit_width(content);


    /*Button*/
    lv_obj_t * btn = lv_btn_create(content, NULL);
    lv_btn_set_ink_in_time(btn, 200);
    lv_btn_set_ink_wait_time(btn, 100);
    lv_btn_set_ink_out_time(btn, 500);
    lv_obj_t * label = lv_label_create(btn, NULL);
    lv_label_set_text(label, "Button");

    /*Switch*/
    lv_obj_t * sw = lv_sw_create(content, NULL);
    lv_sw_set_anim_time(sw, 250);

    /*Check box*/
    lv_cb_create(content, NULL);

    /*Bar*/
    lv_obj_t * bar = lv_bar_create(content, NULL);
    lv_obj_set_width(bar, LV_MATH_MIN(max_w, 3 * LV_DPI / 2));
//#if LV_USE_ANIMATION
//    lv_anim_t a;
//    a.var = bar;
//    a.start = 0;
//    a.end = 100;
//    a.exec_cb = (lv_anim_exec_xcb_t)bar_set_value;
//    a.path_cb = lv_anim_path_linear;
//    a.ready_cb = NULL;
//    a.act_time = 0;
//    a.time = 1000;
//    a.playback = 1;
//    a.playback_pause = 100;
//    a.repeat = 1;
//    a.repeat_pause = 100;
//    lv_anim_create(&a);
//#endif

    /*Slider*/
    lv_obj_t * slider = lv_slider_create(content, NULL);
    lv_obj_set_width(slider, LV_MATH_MIN(max_w, 3 * LV_DPI / 2));
    lv_slider_set_value(slider, 30, false);

    /*Roller*/
    static const char * days = "Monday\nTuesday\nWednesday\nThursday\nFriday\nSaturday\nSunday";
    lv_obj_t * roller = lv_roller_create(content, NULL);
    lv_roller_set_options(roller, days, false);

    /*Drop down list*/
    static const char * nums = "One\nTwo\nThree\nFour";
    lv_obj_t * ddlist = lv_ddlist_create(content, NULL);
    lv_ddlist_set_options(ddlist, nums);

    /*Line meter*/
    lv_obj_t * lmeter = lv_lmeter_create(content, NULL);
    lv_obj_set_click(lmeter, false);
//#if LV_USE_ANIMATION
//    a.var = lmeter;
//    a.start = 0;
//    a.end = 100;
//    a.exec_cb = (lv_anim_exec_xcb_t)lv_lmeter_set_value;
//    a.path_cb = lv_anim_path_linear;
//    a.ready_cb = NULL;
//    a.act_time = 0;
//    a.time = 1000;
//    a.playback = 1;
//    a.playback_pause = 100;
//    a.repeat = 1;
//    a.repeat_pause = 100;
//    lv_anim_create(&a);
//#endif

    /*Gauge*/
    lv_obj_t * gauge = lv_gauge_create(content, NULL);
    lv_gauge_set_value(gauge, 0, 47);
    lv_obj_set_size(gauge, LV_MATH_MIN(max_w, LV_DPI * 3 / 2), LV_MATH_MIN(max_w, LV_DPI * 3 / 2));
    lv_obj_set_click(gauge, false);

    /*Text area*/
    lv_obj_t * ta = lv_ta_create(content, NULL);
    lv_obj_set_width(ta, LV_MATH_MIN(max_w, LV_DPI * 3 / 2));
    lv_ta_set_one_line(ta, true);
    lv_ta_set_text(ta, "Type...");

    /*Keyboard*/
    lv_obj_t * kb = lv_kb_create(content, NULL);
    lv_obj_set_width(kb, max_w - LV_DPI / 4);
    lv_kb_set_ta(kb, ta);

    lv_obj_t * mbox = lv_mbox_create(lv_disp_get_scr_act(NULL), NULL);
    lv_obj_set_drag(mbox, true);
    lv_mbox_set_text(mbox, "Choose a theme and a color on the left!");

    static const char * mbox_btns[] = {"Ok", ""};
    lv_mbox_add_btns(mbox, mbox_btns);

    lv_obj_align(mbox, NULL, LV_ALIGN_CENTER, 0, 0);

}

static void theme_select_event_handler(lv_obj_t * roller, lv_event_t event)
{
    if(event == LV_EVENT_VALUE_CHANGED) {
        lv_coord_t hres = lv_disp_get_hor_res(NULL);
        lv_coord_t vres = lv_disp_get_ver_res(NULL);

        uint16_t opt = lv_roller_get_selected(roller);
        th_act = themes[opt];
        lv_theme_set_current(th_act);

        lv_obj_align(header, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);
        lv_obj_align(sb, header, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 0);

    if(hres > vres) {
        lv_obj_set_size(content, hres - lv_obj_get_width(sb), vres - lv_obj_get_height(header));
        lv_obj_set_pos(content,  lv_obj_get_width(sb), lv_obj_get_height(header));
    } else {
        lv_obj_set_size(content, hres , vres / 2);
        lv_obj_set_pos(content,  0, vres / 2);
    }

        lv_page_focus(sb, roller, LV_ANIM_ON);
    }
}


static void hue_select_event_cb(lv_obj_t * roller, lv_event_t event)
{

    if(event == LV_EVENT_VALUE_CHANGED) {
        uint16_t hue = lv_roller_get_selected(roller) * 30;

        init_all_themes(hue);

        lv_theme_set_current(th_act);

        lv_page_focus(sb, roller, LV_ANIM_ON);
    }
}


static void init_all_themes(uint16_t hue)
{
    /* NOTE: This must be adjusted if more themes are added. */
    int i = 0;
#if LV_USE_THEME_NIGHT
    themes[i++] = lv_theme_night_init(hue, NULL);
#endif

#if LV_USE_THEME_MATERIAL
    themes[i++] = lv_theme_material_init(hue, NULL);
#endif

#if LV_USE_THEME_ALIEN
    themes[i++] = lv_theme_alien_init(hue, NULL);
#endif

#if LV_USE_THEME_ZEN
    themes[i++] = lv_theme_zen_init(hue, NULL);
#endif

#if LV_USE_THEME_NEMO
    themes[i++] = lv_theme_nemo_init(hue, NULL);
#endif

#if LV_USE_THEME_MONO
    themes[i++] = lv_theme_mono_init(hue, NULL);
#endif

#if LV_USE_THEME_DEFAULT
    themes[i++] = lv_theme_default_init(hue, NULL);
#endif
}

static void bar_set_value(lv_obj_t * bar, int16_t value)
{
    lv_bar_set_value(bar, value, LV_ANIM_OFF);
}

#endif
