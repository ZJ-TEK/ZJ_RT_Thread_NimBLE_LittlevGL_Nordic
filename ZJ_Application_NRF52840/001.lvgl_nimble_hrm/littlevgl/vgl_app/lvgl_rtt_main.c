#include "lvgl_rtt_drv.h" 
#include "lvgl.h" 

#include <rtthread.h> 
#include <rtdevice.h>  

#include "lvgl_rtt_theme.h"

static void lvgl_demo_run(void *p)
{
    lv_theme_t *th = lv_theme_material_init(210, LV_FONT_DEFAULT);
    lv_test_theme(th); 

    while(1)
    {
        rt_thread_delay(RT_TICK_PER_SECOND/100);
        lv_task_handler(); 
    }
} 

int rt_lvgl_demo_init(void)
{
    rt_err_t ret = RT_EOK;
    rt_thread_t thread = RT_NULL; 

    /* init littlevGL */ 
    ret = lvgl_rtt_init("zj_lcd"); 
    if(ret != RT_EOK)
    {
        return ret; 
    }

    /* littleGL demo gui thread */ 
    thread = rt_thread_create("lvgl_rtt", lvgl_demo_run, RT_NULL, 10*1024, 5, 10); 
    if(thread == RT_NULL)
    {
        return RT_ERROR;
    }
    rt_thread_startup(thread);

    return RT_EOK; 
}
INIT_APP_EXPORT(rt_lvgl_demo_init); 
