/**
 * Copyright (c) 2014 - 2018, Nordic Semiconductor ASA
 * 
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 * 
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 * 
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 * 
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 * 
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */
/** @file
 *
 * @defgroup ble_sdk_uart_over_ble_main main.c
 * @{
 * @ingroup  ble_sdk_app_nus_eval
 * @brief    UART over BLE application main file.
 *
 * This file contains the source code for a sample application that uses the Nordic UART service.
 * This application uses the @ref srvlib_conn_params module.
 */
#include <stdint.h>
#include <string.h>
#include <rtthread.h>
#include "board.h"
#include "app_init.h"
#include "app_event.h"

extern    uint32_t iddddddle_wakeupTime;

void test_event_task(void *agrm)
{
    rt_kprintf("iddddddle_wakeupTime = %d\r\n",iddddddle_wakeupTime);
    
    APP_EVENT_REMOVE_DELAY(test_event_task);
    APP_EVENT_PUSH_DELAY(test_event_task,NULL,1000);
}

//#include "bsp_lcd_ie3130b_dri.h"
//#include "bsp_qspi_dri.h"
//#define LCD_BL_EN   NRF_GPIO_PIN_MAP(0,  4)
//static uint8_t lcd_buffer[LCD_IE3130B_WIDTH * LCD_IE3130B_HEIGHT * 2];
//static uint8_t move_lcd_buffer[LCD_IE3130B_WIDTH * 2];
//int oled_go(void)
//{
//    uint32_t err_code;
//    nrf_gpio_cfg_output(LCD_BL_EN);
//    nrf_gpio_pin_set(LCD_BL_EN);

//#if 1
//    uint32_t src_addr = 0x0;       // QSPI graphics start address
//    uint32_t gfx_next = 0x20000;   // next graphics offset
//    uint32_t gfx_last = 0xB0000;  // last graphics address

//    while (1)
//    {
//        err_code = bsp_qspi_flash_read(lcd_buffer, sizeof(lcd_buffer), src_addr);
//        RT_ASSERT(err_code == NRFX_SUCCESS);
//        lcd_ie3130b_put_gfx(0, 0, LCD_IE3130B_WIDTH, LCD_IE3130B_HEIGHT, lcd_buffer);
//        rt_thread_mdelay(1500);

//        uint32_t x;
//        uint32_t y;
//        uint32_t n;
//        uint32_t stp;
//        uint32_t temp_pos;
//        uint32_t x_pos;

//        stp = LCD_IE3130B_WIDTH / 20;  // shift out the picture in 20 steps
//        if (!stp)
//            stp = 1;
//              
//        for (x_pos = 0; x_pos < LCD_IE3130B_WIDTH; x_pos += stp)
//        {
//            // move the picture to the left
//            n = 0;
//            for (y = 0; y < LCD_IE3130B_HEIGHT; y++)
//            {
//                for (x = 0; x + stp < LCD_IE3130B_WIDTH; x++)
//                {
//                    lcd_buffer[n    ] = lcd_buffer[n + stp * 2    ];
//                    lcd_buffer[n + 1] = lcd_buffer[n + stp * 2 + 1];
//                    n += 2;
//                }
//        
//                for ( ; x < LCD_IE3130B_WIDTH; x++)
//                {
//                    // black color
//                    lcd_buffer[n++] = 0x00;
//                    lcd_buffer[n++] = 0x00;
//                }
//           }
//            lcd_ie3130b_put_gfx(0, 0, LCD_IE3130B_WIDTH, LCD_IE3130B_HEIGHT, lcd_buffer);
//        }

//        // point to next graphics address
//        src_addr += gfx_next;
//        if (src_addr > gfx_last)
//            src_addr = 0;
//    }
//#endif		
//}

int ble_hr(void);
int main(void)
{
    APP_EVENT_PUSH_DELAY(test_event_task,NULL,1000);
    rt_kprintf("hello world \r\n");
    ble_hr();
    return RT_TRUE;
}


/**
 * @}
 */
