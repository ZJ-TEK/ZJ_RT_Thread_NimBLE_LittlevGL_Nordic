#ifndef RT_NRF_HAL_QSPI_FLASH__
#define RT_NRF_HAL_QSPI_FLASH__
#include "nrf_gpio.h"

#define BSP_QSPI_SCK_PIN   NRF_GPIO_PIN_MAP(0, 19)
#define BSP_QSPI_CSN_PIN   NRF_GPIO_PIN_MAP(0, 17)
#define BSP_QSPI_IO0_PIN   NRF_GPIO_PIN_MAP(0, 20)
#define BSP_QSPI_IO1_PIN   NRF_GPIO_PIN_MAP(0, 21)
#define BSP_QSPI_IO2_PIN   NRF_GPIO_PIN_MAP(0, 22)
#define BSP_QSPI_IO3_PIN   NRF_GPIO_PIN_MAP(0, 23)

/* ¸´Î»²Ù×÷ */
#define RESET_ENABLE_CMD                     0x66
#define RESET_MEMORY_CMD                     0x99
/* ¼Ä´æÆ÷²Ù×÷ */
#define WRITE_STATUS_REG_CMD                  0x01
#define READ_STATUS_REG1_CMD                  0x05
#define READ_STATUS_REG2_CMD                  0x35
/* Ð´²Ù×÷ */
#define WRITE_ENABLE_CMD                     0x06
#define WRITE_STATUS_ENABLE_CMD              0x50
#define WRITE_DISABLE_CMD                    0x04

#endif










