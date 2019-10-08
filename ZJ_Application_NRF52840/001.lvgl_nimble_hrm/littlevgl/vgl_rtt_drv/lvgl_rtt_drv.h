#ifndef __LVGL_RTT_DRV_H__
#define __LVGL_RTT_DRV_H__

#include <rtthread.h> 

enum lvgl_rtt_input_state
{
    LVGL_RTT_INPUT_NONE = 0x00,
    LVGL_RTT_INPUT_UP   = 0x01, 
    LVGL_RTT_INPUT_DOWN = 0x02, 
    LVGL_RTT_INPUT_MOVE = 0x03
}; 

rt_err_t lvgl_rtt_init(const char *name); 
void lvgl_rtt_send_input_event(rt_int16_t x, rt_int16_t y, rt_uint8_t state); 

#endif
