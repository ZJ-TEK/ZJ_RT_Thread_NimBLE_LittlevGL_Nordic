#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "nrf_gpio.h"
#include "nrfx_spim.h"
#include "bsp_lcd_ie3130b_dri.h"
#include <rtthread.h>
#include "nordic_common.h"
#include <rtdevice.h> 

#define LCD_BL_EN   NRF_GPIO_PIN_MAP(0,  4)

struct nrf52840_lcd
{
    struct rt_device device;
    struct rt_device_graphic_info info;
};

static struct nrf52840_lcd lcd;
ALIGN(64) static uint16_t frame_buffer[LCD_IE3130B_HEIGHT][LCD_IE3130B_WIDTH] SECTION("NonCacheable");

static rt_err_t nrf52840_lcd_init(rt_device_t device)
{
    RT_ASSERT(device != RT_NULL);

    rt_memset(frame_buffer, 0x00, sizeof(frame_buffer));

//    nrf_gpio_cfg_output(LCD_BL_EN);
//    nrf_gpio_pin_set(LCD_BL_EN);
    rt_pin_mode (LCD_BL_EN, PIN_MODE_OUTPUT);  /* LCD_BL */
    rt_pin_write(LCD_BL_EN, PIN_HIGH);

    /* LCD */

    /* LCD DEVICE */
    lcd.info.width          = LCD_IE3130B_WIDTH;
    lcd.info.height         = LCD_IE3130B_HEIGHT;
    lcd.info.pixel_format   = RTGRAPHIC_PIXEL_FORMAT_RGB565;
    lcd.info.bits_per_pixel = 16;
    lcd.info.framebuffer    = (void *)frame_buffer;

    return RT_EOK;
}

static rt_err_t nrf52840_lcd_control(rt_device_t device, int cmd, void *args)
{
    switch(cmd)
    {
    case RTGRAPHIC_CTRL_RECT_UPDATE:
    {
        lcd_ie3130b_put_gfx(0, 0, lcd.info.width, lcd.info.height, lcd.info.framebuffer);
    }
        break;

    case RTGRAPHIC_CTRL_POWERON:
        rt_pin_write(LCD_BL_EN, PIN_HIGH);
        break;

    case RTGRAPHIC_CTRL_POWEROFF:
        rt_pin_write(LCD_BL_EN, PIN_LOW);
        break;

    case RTGRAPHIC_CTRL_GET_INFO:
        rt_memcpy(args, &lcd.info, sizeof(lcd.info));
        break;

    case RTGRAPHIC_CTRL_SET_MODE:
        break;
    }

    return RT_EOK;
}

int rt_hw_lcd_init(void)
{
    rt_err_t ret;

    lcd.device.type    = RT_Device_Class_Graphic;
    lcd.device.init    = nrf52840_lcd_init;
    lcd.device.open    = RT_NULL;
    lcd.device.close   = RT_NULL;
    lcd.device.read    = RT_NULL;
    lcd.device.write   = RT_NULL;
    lcd.device.control = nrf52840_lcd_control;

    lcd.device.user_data = (void *)&lcd.info;

    ret = rt_device_register(&lcd.device, "zj_lcd", RT_DEVICE_FLAG_RDWR);

    return ret;
}

INIT_DEVICE_EXPORT(rt_hw_lcd_init);

