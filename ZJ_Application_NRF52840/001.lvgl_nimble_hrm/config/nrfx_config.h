#ifndef NRFX_CONFIG_H__
#define NRFX_CONFIG_H__

// <<< Use Configuration Wizard in Context Menu >>>\n
//==========================================================

// <h> nRF_Drivers 

//==========================================================
// <e> CLOCK_ENABLED - nrf_drv_clock - CLOCK peripheral driver - legacy layer
//==========================================================
#ifndef CLOCK_ENABLED
#define CLOCK_ENABLED 1
#endif
// <o> CLOCK_CONFIG_LF_SRC  - LF Clock Source
 
// <0=> RC 
// <1=> XTAL 
// <2=> Synth 

#ifndef CLOCK_CONFIG_LF_SRC
#define CLOCK_CONFIG_LF_SRC 1
#endif

// <o> CLOCK_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef CLOCK_CONFIG_IRQ_PRIORITY
#define CLOCK_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <e> COMP_ENABLED - nrf_drv_comp - COMP peripheral driver - legacy layer
//==========================================================
#ifndef COMP_ENABLED
#define COMP_ENABLED 0
#endif
// <o> COMP_CONFIG_REF  - Reference voltage
 
// <0=> Internal 1.2V 
// <1=> Internal 1.8V 
// <2=> Internal 2.4V 
// <4=> VDD 
// <7=> ARef 

#ifndef COMP_CONFIG_REF
#define COMP_CONFIG_REF 1
#endif

// <o> COMP_CONFIG_MAIN_MODE  - Main mode
 
// <0=> Single ended 
// <1=> Differential 

#ifndef COMP_CONFIG_MAIN_MODE
#define COMP_CONFIG_MAIN_MODE 0
#endif

// <o> COMP_CONFIG_SPEED_MODE  - Speed mode
 
// <0=> Low power 
// <1=> Normal 
// <2=> High speed 

#ifndef COMP_CONFIG_SPEED_MODE
#define COMP_CONFIG_SPEED_MODE 2
#endif

// <o> COMP_CONFIG_HYST  - Hystheresis
 
// <0=> No 
// <1=> 50mV 

#ifndef COMP_CONFIG_HYST
#define COMP_CONFIG_HYST 0
#endif

// <o> COMP_CONFIG_ISOURCE  - Current Source
 
// <0=> Off 
// <1=> 2.5 uA 
// <2=> 5 uA 
// <3=> 10 uA 

#ifndef COMP_CONFIG_ISOURCE
#define COMP_CONFIG_ISOURCE 0
#endif

// <o> COMP_CONFIG_INPUT  - Analog input
 
// <0=> 0 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef COMP_CONFIG_INPUT
#define COMP_CONFIG_INPUT 0
#endif

// <o> COMP_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef COMP_CONFIG_IRQ_PRIORITY
#define COMP_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <q> EGU_ENABLED  - nrf_drv_swi - SWI(EGU) peripheral driver - legacy layer
 

#ifndef EGU_ENABLED
#define EGU_ENABLED 0
#endif

// <e> GPIOTE_ENABLED - nrf_drv_gpiote - GPIOTE peripheral driver - legacy layer
//==========================================================
#ifndef GPIOTE_ENABLED
#define GPIOTE_ENABLED 0
#endif
// <o> GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS - Number of lower power input pins 
#ifndef GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS
#define GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS 4
#endif

// <o> GPIOTE_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef GPIOTE_CONFIG_IRQ_PRIORITY
#define GPIOTE_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <e> I2S_ENABLED - nrf_drv_i2s - I2S peripheral driver - legacy layer
//==========================================================
#ifndef I2S_ENABLED
#define I2S_ENABLED 0
#endif
// <o> I2S_CONFIG_SCK_PIN - SCK pin  <0-31> 


#ifndef I2S_CONFIG_SCK_PIN
#define I2S_CONFIG_SCK_PIN 31
#endif

// <o> I2S_CONFIG_LRCK_PIN - LRCK pin  <1-31> 


#ifndef I2S_CONFIG_LRCK_PIN
#define I2S_CONFIG_LRCK_PIN 30
#endif

// <o> I2S_CONFIG_MCK_PIN - MCK pin 
#ifndef I2S_CONFIG_MCK_PIN
#define I2S_CONFIG_MCK_PIN 255
#endif

// <o> I2S_CONFIG_SDOUT_PIN - SDOUT pin  <0-31> 


#ifndef I2S_CONFIG_SDOUT_PIN
#define I2S_CONFIG_SDOUT_PIN 29
#endif

// <o> I2S_CONFIG_SDIN_PIN - SDIN pin  <0-31> 


#ifndef I2S_CONFIG_SDIN_PIN
#define I2S_CONFIG_SDIN_PIN 28
#endif

// <o> I2S_CONFIG_MASTER  - Mode
 
// <0=> Master 
// <1=> Slave 

#ifndef I2S_CONFIG_MASTER
#define I2S_CONFIG_MASTER 0
#endif

// <o> I2S_CONFIG_FORMAT  - Format
 
// <0=> I2S 
// <1=> Aligned 

#ifndef I2S_CONFIG_FORMAT
#define I2S_CONFIG_FORMAT 0
#endif

// <o> I2S_CONFIG_ALIGN  - Alignment
 
// <0=> Left 
// <1=> Right 

#ifndef I2S_CONFIG_ALIGN
#define I2S_CONFIG_ALIGN 0
#endif

// <o> I2S_CONFIG_SWIDTH  - Sample width (bits)
 
// <0=> 8 
// <1=> 16 
// <2=> 24 

#ifndef I2S_CONFIG_SWIDTH
#define I2S_CONFIG_SWIDTH 1
#endif

// <o> I2S_CONFIG_CHANNELS  - Channels
 
// <0=> Stereo 
// <1=> Left 
// <2=> Right 

#ifndef I2S_CONFIG_CHANNELS
#define I2S_CONFIG_CHANNELS 1
#endif

// <o> I2S_CONFIG_MCK_SETUP  - MCK behavior
 
// <0=> Disabled 
// <2147483648=> 32MHz/2 
// <1342177280=> 32MHz/3 
// <1073741824=> 32MHz/4 
// <805306368=> 32MHz/5 
// <671088640=> 32MHz/6 
// <536870912=> 32MHz/8 
// <402653184=> 32MHz/10 
// <369098752=> 32MHz/11 
// <285212672=> 32MHz/15 
// <268435456=> 32MHz/16 
// <201326592=> 32MHz/21 
// <184549376=> 32MHz/23 
// <142606336=> 32MHz/30 
// <138412032=> 32MHz/31 
// <134217728=> 32MHz/32 
// <100663296=> 32MHz/42 
// <68157440=> 32MHz/63 
// <34340864=> 32MHz/125 

#ifndef I2S_CONFIG_MCK_SETUP
#define I2S_CONFIG_MCK_SETUP 536870912
#endif

// <o> I2S_CONFIG_RATIO  - MCK/LRCK ratio
 
// <0=> 32x 
// <1=> 48x 
// <2=> 64x 
// <3=> 96x 
// <4=> 128x 
// <5=> 192x 
// <6=> 256x 
// <7=> 384x 
// <8=> 512x 

#ifndef I2S_CONFIG_RATIO
#define I2S_CONFIG_RATIO 2000
#endif

// <o> I2S_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef I2S_CONFIG_IRQ_PRIORITY
#define I2S_CONFIG_IRQ_PRIORITY 7
#endif

// <e> I2S_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef I2S_CONFIG_LOG_ENABLED
#define I2S_CONFIG_LOG_ENABLED 0
#endif
// <o> I2S_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef I2S_CONFIG_LOG_LEVEL
#define I2S_CONFIG_LOG_LEVEL 3
#endif

// <o> I2S_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef I2S_CONFIG_INFO_COLOR
#define I2S_CONFIG_INFO_COLOR 0
#endif

// <o> I2S_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef I2S_CONFIG_DEBUG_COLOR
#define I2S_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> LPCOMP_ENABLED - nrf_drv_lpcomp - LPCOMP peripheral driver - legacy layer
//==========================================================
#ifndef LPCOMP_ENABLED
#define LPCOMP_ENABLED 0
#endif
// <o> LPCOMP_CONFIG_REFERENCE  - Reference voltage
 
// <0=> Supply 1/8 
// <1=> Supply 2/8 
// <2=> Supply 3/8 
// <3=> Supply 4/8 
// <4=> Supply 5/8 
// <5=> Supply 6/8 
// <6=> Supply 7/8 
// <8=> Supply 1/16 (nRF52) 
// <9=> Supply 3/16 (nRF52) 
// <10=> Supply 5/16 (nRF52) 
// <11=> Supply 7/16 (nRF52) 
// <12=> Supply 9/16 (nRF52) 
// <13=> Supply 11/16 (nRF52) 
// <14=> Supply 13/16 (nRF52) 
// <15=> Supply 15/16 (nRF52) 
// <7=> External Ref 0 
// <65543=> External Ref 1 

#ifndef LPCOMP_CONFIG_REFERENCE
#define LPCOMP_CONFIG_REFERENCE 3
#endif

// <o> LPCOMP_CONFIG_DETECTION  - Detection
 
// <0=> Crossing 
// <1=> Up 
// <2=> Down 

#ifndef LPCOMP_CONFIG_DETECTION
#define LPCOMP_CONFIG_DETECTION 2
#endif

// <o> LPCOMP_CONFIG_INPUT  - Analog input
 
// <0=> 0 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef LPCOMP_CONFIG_INPUT
#define LPCOMP_CONFIG_INPUT 0
#endif

// <q> LPCOMP_CONFIG_HYST  - Hysteresis
 

#ifndef LPCOMP_CONFIG_HYST
#define LPCOMP_CONFIG_HYST 0
#endif

// <o> LPCOMP_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef LPCOMP_CONFIG_IRQ_PRIORITY
#define LPCOMP_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <e> NRFX_CLOCK_ENABLED - nrfx_clock - CLOCK peripheral driver
//==========================================================
#ifndef NRFX_CLOCK_ENABLED
#define NRFX_CLOCK_ENABLED 1
#endif
// <o> NRFX_CLOCK_CONFIG_LF_SRC  - LF Clock Source
 
// <0=> RC 
// <1=> XTAL 
// <2=> Synth 

#ifndef NRFX_CLOCK_CONFIG_LF_SRC
#define NRFX_CLOCK_CONFIG_LF_SRC 1
#endif

// <o> NRFX_CLOCK_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_CLOCK_CONFIG_IRQ_PRIORITY
#define NRFX_CLOCK_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_CLOCK_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_CLOCK_CONFIG_LOG_ENABLED
#define NRFX_CLOCK_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_CLOCK_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_CLOCK_CONFIG_LOG_LEVEL
#define NRFX_CLOCK_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_CLOCK_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_CLOCK_CONFIG_INFO_COLOR
#define NRFX_CLOCK_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_CLOCK_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_CLOCK_CONFIG_DEBUG_COLOR
#define NRFX_CLOCK_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_COMP_ENABLED - nrfx_comp - COMP peripheral driver
//==========================================================
#ifndef NRFX_COMP_ENABLED
#define NRFX_COMP_ENABLED 0
#endif
// <o> NRFX_COMP_CONFIG_REF  - Reference voltage
 
// <0=> Internal 1.2V 
// <1=> Internal 1.8V 
// <2=> Internal 2.4V 
// <4=> VDD 
// <7=> ARef 

#ifndef NRFX_COMP_CONFIG_REF
#define NRFX_COMP_CONFIG_REF 1
#endif

// <o> NRFX_COMP_CONFIG_MAIN_MODE  - Main mode
 
// <0=> Single ended 
// <1=> Differential 

#ifndef NRFX_COMP_CONFIG_MAIN_MODE
#define NRFX_COMP_CONFIG_MAIN_MODE 0
#endif

// <o> NRFX_COMP_CONFIG_SPEED_MODE  - Speed mode
 
// <0=> Low power 
// <1=> Normal 
// <2=> High speed 

#ifndef NRFX_COMP_CONFIG_SPEED_MODE
#define NRFX_COMP_CONFIG_SPEED_MODE 2
#endif

// <o> NRFX_COMP_CONFIG_HYST  - Hystheresis
 
// <0=> No 
// <1=> 50mV 

#ifndef NRFX_COMP_CONFIG_HYST
#define NRFX_COMP_CONFIG_HYST 0
#endif

// <o> NRFX_COMP_CONFIG_ISOURCE  - Current Source
 
// <0=> Off 
// <1=> 2.5 uA 
// <2=> 5 uA 
// <3=> 10 uA 

#ifndef NRFX_COMP_CONFIG_ISOURCE
#define NRFX_COMP_CONFIG_ISOURCE 0
#endif

// <o> NRFX_COMP_CONFIG_INPUT  - Analog input
 
// <0=> 0 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_COMP_CONFIG_INPUT
#define NRFX_COMP_CONFIG_INPUT 0
#endif

// <o> NRFX_COMP_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_COMP_CONFIG_IRQ_PRIORITY
#define NRFX_COMP_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_COMP_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_COMP_CONFIG_LOG_ENABLED
#define NRFX_COMP_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_COMP_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_COMP_CONFIG_LOG_LEVEL
#define NRFX_COMP_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_COMP_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_COMP_CONFIG_INFO_COLOR
#define NRFX_COMP_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_COMP_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_COMP_CONFIG_DEBUG_COLOR
#define NRFX_COMP_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_GPIOTE_ENABLED - nrfx_gpiote - GPIOTE peripheral driver
//==========================================================
#ifndef NRFX_GPIOTE_ENABLED
#define NRFX_GPIOTE_ENABLED 0
#endif
// <o> NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS - Number of lower power input pins 
#ifndef NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS
#define NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS 1
#endif

// <o> NRFX_GPIOTE_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_GPIOTE_CONFIG_IRQ_PRIORITY
#define NRFX_GPIOTE_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_GPIOTE_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_GPIOTE_CONFIG_LOG_ENABLED
#define NRFX_GPIOTE_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_GPIOTE_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_GPIOTE_CONFIG_LOG_LEVEL
#define NRFX_GPIOTE_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_GPIOTE_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_GPIOTE_CONFIG_INFO_COLOR
#define NRFX_GPIOTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_GPIOTE_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_GPIOTE_CONFIG_DEBUG_COLOR
#define NRFX_GPIOTE_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_I2S_ENABLED - nrfx_i2s - I2S peripheral driver
//==========================================================
#ifndef NRFX_I2S_ENABLED
#define NRFX_I2S_ENABLED 0
#endif
// <o> NRFX_I2S_CONFIG_SCK_PIN - SCK pin  <0-31> 


#ifndef NRFX_I2S_CONFIG_SCK_PIN
#define NRFX_I2S_CONFIG_SCK_PIN 31
#endif

// <o> NRFX_I2S_CONFIG_LRCK_PIN - LRCK pin  <1-31> 


#ifndef NRFX_I2S_CONFIG_LRCK_PIN
#define NRFX_I2S_CONFIG_LRCK_PIN 30
#endif

// <o> NRFX_I2S_CONFIG_MCK_PIN - MCK pin 
#ifndef NRFX_I2S_CONFIG_MCK_PIN
#define NRFX_I2S_CONFIG_MCK_PIN 255
#endif

// <o> NRFX_I2S_CONFIG_SDOUT_PIN - SDOUT pin  <0-31> 


#ifndef NRFX_I2S_CONFIG_SDOUT_PIN
#define NRFX_I2S_CONFIG_SDOUT_PIN 29
#endif

// <o> NRFX_I2S_CONFIG_SDIN_PIN - SDIN pin  <0-31> 


#ifndef NRFX_I2S_CONFIG_SDIN_PIN
#define NRFX_I2S_CONFIG_SDIN_PIN 28
#endif

// <o> NRFX_I2S_CONFIG_MASTER  - Mode
 
// <0=> Master 
// <1=> Slave 

#ifndef NRFX_I2S_CONFIG_MASTER
#define NRFX_I2S_CONFIG_MASTER 0
#endif

// <o> NRFX_I2S_CONFIG_FORMAT  - Format
 
// <0=> I2S 
// <1=> Aligned 

#ifndef NRFX_I2S_CONFIG_FORMAT
#define NRFX_I2S_CONFIG_FORMAT 0
#endif

// <o> NRFX_I2S_CONFIG_ALIGN  - Alignment
 
// <0=> Left 
// <1=> Right 

#ifndef NRFX_I2S_CONFIG_ALIGN
#define NRFX_I2S_CONFIG_ALIGN 0
#endif

// <o> NRFX_I2S_CONFIG_SWIDTH  - Sample width (bits)
 
// <0=> 8 
// <1=> 16 
// <2=> 24 

#ifndef NRFX_I2S_CONFIG_SWIDTH
#define NRFX_I2S_CONFIG_SWIDTH 1
#endif

// <o> NRFX_I2S_CONFIG_CHANNELS  - Channels
 
// <0=> Stereo 
// <1=> Left 
// <2=> Right 

#ifndef NRFX_I2S_CONFIG_CHANNELS
#define NRFX_I2S_CONFIG_CHANNELS 1
#endif

// <o> NRFX_I2S_CONFIG_MCK_SETUP  - MCK behavior
 
// <0=> Disabled 
// <2147483648=> 32MHz/2 
// <1342177280=> 32MHz/3 
// <1073741824=> 32MHz/4 
// <805306368=> 32MHz/5 
// <671088640=> 32MHz/6 
// <536870912=> 32MHz/8 
// <402653184=> 32MHz/10 
// <369098752=> 32MHz/11 
// <285212672=> 32MHz/15 
// <268435456=> 32MHz/16 
// <201326592=> 32MHz/21 
// <184549376=> 32MHz/23 
// <142606336=> 32MHz/30 
// <138412032=> 32MHz/31 
// <134217728=> 32MHz/32 
// <100663296=> 32MHz/42 
// <68157440=> 32MHz/63 
// <34340864=> 32MHz/125 

#ifndef NRFX_I2S_CONFIG_MCK_SETUP
#define NRFX_I2S_CONFIG_MCK_SETUP 536870912
#endif

// <o> NRFX_I2S_CONFIG_RATIO  - MCK/LRCK ratio
 
// <0=> 32x 
// <1=> 48x 
// <2=> 64x 
// <3=> 96x 
// <4=> 128x 
// <5=> 192x 
// <6=> 256x 
// <7=> 384x 
// <8=> 512x 

#ifndef NRFX_I2S_CONFIG_RATIO
#define NRFX_I2S_CONFIG_RATIO 2000
#endif

// <o> NRFX_I2S_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_I2S_CONFIG_IRQ_PRIORITY
#define NRFX_I2S_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_I2S_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_I2S_CONFIG_LOG_ENABLED
#define NRFX_I2S_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_I2S_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_I2S_CONFIG_LOG_LEVEL
#define NRFX_I2S_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_I2S_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_I2S_CONFIG_INFO_COLOR
#define NRFX_I2S_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_I2S_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_I2S_CONFIG_DEBUG_COLOR
#define NRFX_I2S_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_LPCOMP_ENABLED - nrfx_lpcomp - LPCOMP peripheral driver
//==========================================================
#ifndef NRFX_LPCOMP_ENABLED
#define NRFX_LPCOMP_ENABLED 0
#endif
// <o> NRFX_LPCOMP_CONFIG_REFERENCE  - Reference voltage
 
// <0=> Supply 1/8 
// <1=> Supply 2/8 
// <2=> Supply 3/8 
// <3=> Supply 4/8 
// <4=> Supply 5/8 
// <5=> Supply 6/8 
// <6=> Supply 7/8 
// <8=> Supply 1/16 (nRF52) 
// <9=> Supply 3/16 (nRF52) 
// <10=> Supply 5/16 (nRF52) 
// <11=> Supply 7/16 (nRF52) 
// <12=> Supply 9/16 (nRF52) 
// <13=> Supply 11/16 (nRF52) 
// <14=> Supply 13/16 (nRF52) 
// <15=> Supply 15/16 (nRF52) 
// <7=> External Ref 0 
// <65543=> External Ref 1 

#ifndef NRFX_LPCOMP_CONFIG_REFERENCE
#define NRFX_LPCOMP_CONFIG_REFERENCE 3
#endif

// <o> NRFX_LPCOMP_CONFIG_DETECTION  - Detection
 
// <0=> Crossing 
// <1=> Up 
// <2=> Down 

#ifndef NRFX_LPCOMP_CONFIG_DETECTION
#define NRFX_LPCOMP_CONFIG_DETECTION 2
#endif

// <o> NRFX_LPCOMP_CONFIG_INPUT  - Analog input
 
// <0=> 0 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_LPCOMP_CONFIG_INPUT
#define NRFX_LPCOMP_CONFIG_INPUT 0
#endif

// <q> NRFX_LPCOMP_CONFIG_HYST  - Hysteresis
 

#ifndef NRFX_LPCOMP_CONFIG_HYST
#define NRFX_LPCOMP_CONFIG_HYST 0
#endif

// <o> NRFX_LPCOMP_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_LPCOMP_CONFIG_IRQ_PRIORITY
#define NRFX_LPCOMP_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_LPCOMP_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_LPCOMP_CONFIG_LOG_ENABLED
#define NRFX_LPCOMP_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_LPCOMP_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_LPCOMP_CONFIG_LOG_LEVEL
#define NRFX_LPCOMP_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_LPCOMP_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_LPCOMP_CONFIG_INFO_COLOR
#define NRFX_LPCOMP_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_LPCOMP_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_LPCOMP_CONFIG_DEBUG_COLOR
#define NRFX_LPCOMP_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_PDM_ENABLED - nrfx_pdm - PDM peripheral driver
//==========================================================
#ifndef NRFX_PDM_ENABLED
#define NRFX_PDM_ENABLED 0
#endif
// <o> NRFX_PDM_CONFIG_MODE  - Mode
 
// <0=> Stereo 
// <1=> Mono 

#ifndef NRFX_PDM_CONFIG_MODE
#define NRFX_PDM_CONFIG_MODE 1
#endif

// <o> NRFX_PDM_CONFIG_EDGE  - Edge
 
// <0=> Left falling 
// <1=> Left rising 

#ifndef NRFX_PDM_CONFIG_EDGE
#define NRFX_PDM_CONFIG_EDGE 0
#endif

// <o> NRFX_PDM_CONFIG_CLOCK_FREQ  - Clock frequency
 
// <134217728=> 1000k 
// <138412032=> 1032k (default) 
// <142606336=> 1067k 

#ifndef NRFX_PDM_CONFIG_CLOCK_FREQ
#define NRFX_PDM_CONFIG_CLOCK_FREQ 138412032
#endif

// <o> NRFX_PDM_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_PDM_CONFIG_IRQ_PRIORITY
#define NRFX_PDM_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_PDM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_PDM_CONFIG_LOG_ENABLED
#define NRFX_PDM_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_PDM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_PDM_CONFIG_LOG_LEVEL
#define NRFX_PDM_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_PDM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PDM_CONFIG_INFO_COLOR
#define NRFX_PDM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PDM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PDM_CONFIG_DEBUG_COLOR
#define NRFX_PDM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_POWER_ENABLED - nrfx_power - POWER peripheral driver
//==========================================================
#ifndef NRFX_POWER_ENABLED
#define NRFX_POWER_ENABLED 0
#endif
// <o> NRFX_POWER_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_POWER_CONFIG_IRQ_PRIORITY
#define NRFX_POWER_CONFIG_IRQ_PRIORITY 7
#endif

// <q> NRFX_POWER_CONFIG_DEFAULT_DCDCEN  - The default configuration of main DCDC regulator
 

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.

#ifndef NRFX_POWER_CONFIG_DEFAULT_DCDCEN
#define NRFX_POWER_CONFIG_DEFAULT_DCDCEN 0
#endif

// <q> NRFX_POWER_CONFIG_DEFAULT_DCDCENHV  - The default configuration of High Voltage DCDC regulator
 

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.

#ifndef NRFX_POWER_CONFIG_DEFAULT_DCDCENHV
#define NRFX_POWER_CONFIG_DEFAULT_DCDCENHV 0
#endif

// </e>

// <e> NRFX_PPI_ENABLED - nrfx_ppi - PPI peripheral allocator
//==========================================================
#ifndef NRFX_PPI_ENABLED
#define NRFX_PPI_ENABLED 0
#endif
// <e> NRFX_PPI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_PPI_CONFIG_LOG_ENABLED
#define NRFX_PPI_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_PPI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_PPI_CONFIG_LOG_LEVEL
#define NRFX_PPI_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_PPI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PPI_CONFIG_INFO_COLOR
#define NRFX_PPI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PPI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PPI_CONFIG_DEBUG_COLOR
#define NRFX_PPI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_PRS_ENABLED - nrfx_prs - Peripheral Resource Sharing module
//==========================================================
#ifndef NRFX_PRS_ENABLED
#define NRFX_PRS_ENABLED 0
#endif
// <q> NRFX_PRS_BOX_0_ENABLED  - Enables box 0 in the module.
 

#ifndef NRFX_PRS_BOX_0_ENABLED
#define NRFX_PRS_BOX_0_ENABLED 0
#endif

// <q> NRFX_PRS_BOX_1_ENABLED  - Enables box 1 in the module.
 

#ifndef NRFX_PRS_BOX_1_ENABLED
#define NRFX_PRS_BOX_1_ENABLED 0
#endif

// <q> NRFX_PRS_BOX_2_ENABLED  - Enables box 2 in the module.
 

#ifndef NRFX_PRS_BOX_2_ENABLED
#define NRFX_PRS_BOX_2_ENABLED 0
#endif

// <q> NRFX_PRS_BOX_3_ENABLED  - Enables box 3 in the module.
 

#ifndef NRFX_PRS_BOX_3_ENABLED
#define NRFX_PRS_BOX_3_ENABLED 0
#endif

// <q> NRFX_PRS_BOX_4_ENABLED  - Enables box 4 in the module.
 

#ifndef NRFX_PRS_BOX_4_ENABLED
#define NRFX_PRS_BOX_4_ENABLED 1
#endif

// <e> NRFX_PRS_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_PRS_CONFIG_LOG_ENABLED
#define NRFX_PRS_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_PRS_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_PRS_CONFIG_LOG_LEVEL
#define NRFX_PRS_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_PRS_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PRS_CONFIG_INFO_COLOR
#define NRFX_PRS_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PRS_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PRS_CONFIG_DEBUG_COLOR
#define NRFX_PRS_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_PWM_ENABLED - nrfx_pwm - PWM peripheral driver
//==========================================================
#ifndef NRFX_PWM_ENABLED
#define NRFX_PWM_ENABLED 0
#endif
// <q> NRFX_PWM0_ENABLED  - Enable PWM0 instance
 

#ifndef NRFX_PWM0_ENABLED
#define NRFX_PWM0_ENABLED 0
#endif

// <q> NRFX_PWM1_ENABLED  - Enable PWM1 instance
 

#ifndef NRFX_PWM1_ENABLED
#define NRFX_PWM1_ENABLED 0
#endif

// <q> NRFX_PWM2_ENABLED  - Enable PWM2 instance
 

#ifndef NRFX_PWM2_ENABLED
#define NRFX_PWM2_ENABLED 0
#endif

// <q> NRFX_PWM3_ENABLED  - Enable PWM3 instance
 

#ifndef NRFX_PWM3_ENABLED
#define NRFX_PWM3_ENABLED 0
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT0_PIN - Out0 pin  <0-31> 


#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT0_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT0_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT1_PIN - Out1 pin  <0-31> 


#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT1_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT1_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT2_PIN - Out2 pin  <0-31> 


#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT2_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT2_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT3_PIN - Out3 pin  <0-31> 


#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT3_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT3_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_BASE_CLOCK  - Base clock
 
// <0=> 16 MHz 
// <1=> 8 MHz 
// <2=> 4 MHz 
// <3=> 2 MHz 
// <4=> 1 MHz 
// <5=> 500 kHz 
// <6=> 250 kHz 
// <7=> 125 kHz 

#ifndef NRFX_PWM_DEFAULT_CONFIG_BASE_CLOCK
#define NRFX_PWM_DEFAULT_CONFIG_BASE_CLOCK 4
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_COUNT_MODE  - Count mode
 
// <0=> Up 
// <1=> Up and Down 

#ifndef NRFX_PWM_DEFAULT_CONFIG_COUNT_MODE
#define NRFX_PWM_DEFAULT_CONFIG_COUNT_MODE 0
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_TOP_VALUE - Top value 
#ifndef NRFX_PWM_DEFAULT_CONFIG_TOP_VALUE
#define NRFX_PWM_DEFAULT_CONFIG_TOP_VALUE 1000
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_LOAD_MODE  - Load mode
 
// <0=> Common 
// <1=> Grouped 
// <2=> Individual 
// <3=> Waveform 

#ifndef NRFX_PWM_DEFAULT_CONFIG_LOAD_MODE
#define NRFX_PWM_DEFAULT_CONFIG_LOAD_MODE 0
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_STEP_MODE  - Step mode
 
// <0=> Auto 
// <1=> Triggered 

#ifndef NRFX_PWM_DEFAULT_CONFIG_STEP_MODE
#define NRFX_PWM_DEFAULT_CONFIG_STEP_MODE 0
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_PWM_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_PWM_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_PWM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_PWM_CONFIG_LOG_ENABLED
#define NRFX_PWM_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_PWM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_PWM_CONFIG_LOG_LEVEL
#define NRFX_PWM_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_PWM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PWM_CONFIG_INFO_COLOR
#define NRFX_PWM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PWM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PWM_CONFIG_DEBUG_COLOR
#define NRFX_PWM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_QDEC_ENABLED - nrfx_qdec - QDEC peripheral driver
//==========================================================
#ifndef NRFX_QDEC_ENABLED
#define NRFX_QDEC_ENABLED 0
#endif
// <o> NRFX_QDEC_CONFIG_REPORTPER  - Report period
 
// <0=> 10 Samples 
// <1=> 40 Samples 
// <2=> 80 Samples 
// <3=> 120 Samples 
// <4=> 160 Samples 
// <5=> 200 Samples 
// <6=> 240 Samples 
// <7=> 280 Samples 

#ifndef NRFX_QDEC_CONFIG_REPORTPER
#define NRFX_QDEC_CONFIG_REPORTPER 0
#endif

// <o> NRFX_QDEC_CONFIG_SAMPLEPER  - Sample period
 
// <0=> 128 us 
// <1=> 256 us 
// <2=> 512 us 
// <3=> 1024 us 
// <4=> 2048 us 
// <5=> 4096 us 
// <6=> 8192 us 
// <7=> 16384 us 

#ifndef NRFX_QDEC_CONFIG_SAMPLEPER
#define NRFX_QDEC_CONFIG_SAMPLEPER 7
#endif

// <o> NRFX_QDEC_CONFIG_PIO_A - A pin  <0-31> 


#ifndef NRFX_QDEC_CONFIG_PIO_A
#define NRFX_QDEC_CONFIG_PIO_A 31
#endif

// <o> NRFX_QDEC_CONFIG_PIO_B - B pin  <0-31> 


#ifndef NRFX_QDEC_CONFIG_PIO_B
#define NRFX_QDEC_CONFIG_PIO_B 31
#endif

// <o> NRFX_QDEC_CONFIG_PIO_LED - LED pin  <0-31> 


#ifndef NRFX_QDEC_CONFIG_PIO_LED
#define NRFX_QDEC_CONFIG_PIO_LED 31
#endif

// <o> NRFX_QDEC_CONFIG_LEDPRE - LED pre 
#ifndef NRFX_QDEC_CONFIG_LEDPRE
#define NRFX_QDEC_CONFIG_LEDPRE 511
#endif

// <o> NRFX_QDEC_CONFIG_LEDPOL  - LED polarity
 
// <0=> Active low 
// <1=> Active high 

#ifndef NRFX_QDEC_CONFIG_LEDPOL
#define NRFX_QDEC_CONFIG_LEDPOL 1
#endif

// <q> NRFX_QDEC_CONFIG_DBFEN  - Debouncing enable
 

#ifndef NRFX_QDEC_CONFIG_DBFEN
#define NRFX_QDEC_CONFIG_DBFEN 0
#endif

// <q> NRFX_QDEC_CONFIG_SAMPLE_INTEN  - Sample ready interrupt enable
 

#ifndef NRFX_QDEC_CONFIG_SAMPLE_INTEN
#define NRFX_QDEC_CONFIG_SAMPLE_INTEN 0
#endif

// <o> NRFX_QDEC_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_QDEC_CONFIG_IRQ_PRIORITY
#define NRFX_QDEC_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_QDEC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_QDEC_CONFIG_LOG_ENABLED
#define NRFX_QDEC_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_QDEC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_QDEC_CONFIG_LOG_LEVEL
#define NRFX_QDEC_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_QDEC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_QDEC_CONFIG_INFO_COLOR
#define NRFX_QDEC_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_QDEC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_QDEC_CONFIG_DEBUG_COLOR
#define NRFX_QDEC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_QSPI_ENABLED - nrfx_qspi - QSPI peripheral driver
//==========================================================
#ifndef NRFX_QSPI_ENABLED
#define NRFX_QSPI_ENABLED 1
#endif
// <o> NRFX_QSPI_CONFIG_SCK_DELAY - tSHSL, tWHSL and tSHWL in number of 16 MHz periods (62.5 ns).  <0-255> 


#ifndef NRFX_QSPI_CONFIG_SCK_DELAY
#define NRFX_QSPI_CONFIG_SCK_DELAY 1
#endif

// <o> NRFX_QSPI_CONFIG_XIP_OFFSET - Address offset in the external memory for Execute in Place operation. 
#ifndef NRFX_QSPI_CONFIG_XIP_OFFSET
#define NRFX_QSPI_CONFIG_XIP_OFFSET 0
#endif

// <o> NRFX_QSPI_CONFIG_READOC  - Number of data lines and opcode used for reading.
 
// <0=> FastRead 
// <1=> Read2O 
// <2=> Read2IO 
// <3=> Read4O 
// <4=> Read4IO 

#ifndef NRFX_QSPI_CONFIG_READOC
#define NRFX_QSPI_CONFIG_READOC 4
#endif

// <o> NRFX_QSPI_CONFIG_WRITEOC  - Number of data lines and opcode used for writing.
 
// <0=> PP 
// <1=> PP2O 
// <2=> PP4O 
// <3=> PP4IO 

#ifndef NRFX_QSPI_CONFIG_WRITEOC
#define NRFX_QSPI_CONFIG_WRITEOC 2
#endif

// <o> NRFX_QSPI_CONFIG_ADDRMODE  - Addressing mode.
 
// <0=> 24bit 
// <1=> 32bit 

#ifndef NRFX_QSPI_CONFIG_ADDRMODE
#define NRFX_QSPI_CONFIG_ADDRMODE 0
#endif

// <o> NRFX_QSPI_CONFIG_MODE  - SPI mode.
 
// <0=> Mode 0 
// <1=> Mode 1 

#ifndef NRFX_QSPI_CONFIG_MODE
#define NRFX_QSPI_CONFIG_MODE 0
#endif

// <o> NRFX_QSPI_CONFIG_FREQUENCY  - Frequency divider.
 
// <0=> 32MHz/1 
// <1=> 32MHz/2 
// <2=> 32MHz/3 
// <3=> 32MHz/4 
// <4=> 32MHz/5 
// <5=> 32MHz/6 
// <6=> 32MHz/7 
// <7=> 32MHz/8 
// <8=> 32MHz/9 
// <9=> 32MHz/10 
// <10=> 32MHz/11 
// <11=> 32MHz/12 
// <12=> 32MHz/13 
// <13=> 32MHz/14 
// <14=> 32MHz/15 
// <15=> 32MHz/16 

#ifndef NRFX_QSPI_CONFIG_FREQUENCY
#define NRFX_QSPI_CONFIG_FREQUENCY 15
#endif

// <s> NRFX_QSPI_PIN_SCK - SCK pin value.
#ifndef NRFX_QSPI_PIN_SCK
#define NRFX_QSPI_PIN_SCK NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <s> NRFX_QSPI_PIN_CSN - CSN pin value.
#ifndef NRFX_QSPI_PIN_CSN
#define NRFX_QSPI_PIN_CSN NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <s> NRFX_QSPI_PIN_IO0 - IO0 pin value.
#ifndef NRFX_QSPI_PIN_IO0
#define NRFX_QSPI_PIN_IO0 NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <s> NRFX_QSPI_PIN_IO1 - IO1 pin value.
#ifndef NRFX_QSPI_PIN_IO1
#define NRFX_QSPI_PIN_IO1 NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <s> NRFX_QSPI_PIN_IO2 - IO2 pin value.
#ifndef NRFX_QSPI_PIN_IO2
#define NRFX_QSPI_PIN_IO2 NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <s> NRFX_QSPI_PIN_IO3 - IO3 pin value.
#ifndef NRFX_QSPI_PIN_IO3
#define NRFX_QSPI_PIN_IO3 NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <o> NRFX_QSPI_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_QSPI_CONFIG_IRQ_PRIORITY
#define NRFX_QSPI_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <e> NRFX_RNG_ENABLED - nrfx_rng - RNG peripheral driver
//==========================================================
#ifndef NRFX_RNG_ENABLED
#define NRFX_RNG_ENABLED 0
#endif
// <q> NRFX_RNG_CONFIG_ERROR_CORRECTION  - Error correction
 

#ifndef NRFX_RNG_CONFIG_ERROR_CORRECTION
#define NRFX_RNG_CONFIG_ERROR_CORRECTION 1
#endif

// <o> NRFX_RNG_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_RNG_CONFIG_IRQ_PRIORITY
#define NRFX_RNG_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_RNG_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_RNG_CONFIG_LOG_ENABLED
#define NRFX_RNG_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_RNG_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_RNG_CONFIG_LOG_LEVEL
#define NRFX_RNG_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_RNG_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_RNG_CONFIG_INFO_COLOR
#define NRFX_RNG_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_RNG_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_RNG_CONFIG_DEBUG_COLOR
#define NRFX_RNG_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_RTC_ENABLED - nrfx_rtc - RTC peripheral driver
//==========================================================
#ifndef NRFX_RTC_ENABLED
#define NRFX_RTC_ENABLED 0
#endif
// <q> NRFX_RTC0_ENABLED  - Enable RTC0 instance
 

#ifndef NRFX_RTC0_ENABLED
#define NRFX_RTC0_ENABLED 0
#endif

// <q> NRFX_RTC1_ENABLED  - Enable RTC1 instance
 

#ifndef NRFX_RTC1_ENABLED
#define NRFX_RTC1_ENABLED 0
#endif

// <q> NRFX_RTC2_ENABLED  - Enable RTC2 instance
 

#ifndef NRFX_RTC2_ENABLED
#define NRFX_RTC2_ENABLED 0
#endif

// <o> NRFX_RTC_MAXIMUM_LATENCY_US - Maximum possible time[us] in highest priority interrupt 
#ifndef NRFX_RTC_MAXIMUM_LATENCY_US
#define NRFX_RTC_MAXIMUM_LATENCY_US 2000
#endif

// <o> NRFX_RTC_DEFAULT_CONFIG_FREQUENCY - Frequency  <16-32768> 


#ifndef NRFX_RTC_DEFAULT_CONFIG_FREQUENCY
#define NRFX_RTC_DEFAULT_CONFIG_FREQUENCY 32768
#endif

// <q> NRFX_RTC_DEFAULT_CONFIG_RELIABLE  - Ensures safe compare event triggering
 

#ifndef NRFX_RTC_DEFAULT_CONFIG_RELIABLE
#define NRFX_RTC_DEFAULT_CONFIG_RELIABLE 0
#endif

// <o> NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_RTC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_RTC_CONFIG_LOG_ENABLED
#define NRFX_RTC_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_RTC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_RTC_CONFIG_LOG_LEVEL
#define NRFX_RTC_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_RTC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_RTC_CONFIG_INFO_COLOR
#define NRFX_RTC_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_RTC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_RTC_CONFIG_DEBUG_COLOR
#define NRFX_RTC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_SAADC_ENABLED - nrfx_saadc - SAADC peripheral driver
//==========================================================
#ifndef NRFX_SAADC_ENABLED
#define NRFX_SAADC_ENABLED 0
#endif
// <o> NRFX_SAADC_CONFIG_RESOLUTION  - Resolution
 
// <0=> 8 bit 
// <1=> 10 bit 
// <2=> 12 bit 
// <3=> 14 bit 

#ifndef NRFX_SAADC_CONFIG_RESOLUTION
#define NRFX_SAADC_CONFIG_RESOLUTION 1
#endif

// <o> NRFX_SAADC_CONFIG_OVERSAMPLE  - Sample period
 
// <0=> Disabled 
// <1=> 2x 
// <2=> 4x 
// <3=> 8x 
// <4=> 16x 
// <5=> 32x 
// <6=> 64x 
// <7=> 128x 
// <8=> 256x 

#ifndef NRFX_SAADC_CONFIG_OVERSAMPLE
#define NRFX_SAADC_CONFIG_OVERSAMPLE 0
#endif

// <q> NRFX_SAADC_CONFIG_LP_MODE  - Enabling low power mode
 

#ifndef NRFX_SAADC_CONFIG_LP_MODE
#define NRFX_SAADC_CONFIG_LP_MODE 0
#endif

// <o> NRFX_SAADC_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_SAADC_CONFIG_IRQ_PRIORITY
#define NRFX_SAADC_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_SAADC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_SAADC_CONFIG_LOG_ENABLED
#define NRFX_SAADC_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_SAADC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_SAADC_CONFIG_LOG_LEVEL
#define NRFX_SAADC_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_SAADC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SAADC_CONFIG_INFO_COLOR
#define NRFX_SAADC_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SAADC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SAADC_CONFIG_DEBUG_COLOR
#define NRFX_SAADC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_SPIM_ENABLED - nrfx_spim - SPIM peripheral driver
//==========================================================
#ifndef NRFX_SPIM_ENABLED
#define NRFX_SPIM_ENABLED 1
#endif
// <q> NRFX_SPIM0_ENABLED  - Enable SPIM0 instance
 

#ifndef NRFX_SPIM0_ENABLED
#define NRFX_SPIM0_ENABLED 0
#endif

// <q> NRFX_SPIM1_ENABLED  - Enable SPIM1 instance
 

#ifndef NRFX_SPIM1_ENABLED
#define NRFX_SPIM1_ENABLED 0
#endif

// <q> NRFX_SPIM2_ENABLED  - Enable SPIM2 instance
 

#ifndef NRFX_SPIM2_ENABLED
#define NRFX_SPIM2_ENABLED 0
#endif

// <q> NRFX_SPIM3_ENABLED  - Enable SPIM3 instance
 

#ifndef NRFX_SPIM3_ENABLED
#define NRFX_SPIM3_ENABLED 1
#endif

// <q> NRFX_SPIM_EXTENDED_ENABLED  - Enable extended SPIM features
 

#ifndef NRFX_SPIM_EXTENDED_ENABLED
#define NRFX_SPIM_EXTENDED_ENABLED 1
#endif

// <o> NRFX_SPIM_MISO_PULL_CFG  - MISO pin pull configuration.
 
// <0=> NRF_GPIO_PIN_NOPULL 
// <1=> NRF_GPIO_PIN_PULLDOWN 
// <3=> NRF_GPIO_PIN_PULLUP 

#ifndef NRFX_SPIM_MISO_PULL_CFG
#define NRFX_SPIM_MISO_PULL_CFG 1
#endif

// <o> NRFX_SPIM_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_SPIM_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_SPIM_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_SPIM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_SPIM_CONFIG_LOG_ENABLED
#define NRFX_SPIM_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_SPIM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_SPIM_CONFIG_LOG_LEVEL
#define NRFX_SPIM_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_SPIM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPIM_CONFIG_INFO_COLOR
#define NRFX_SPIM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SPIM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPIM_CONFIG_DEBUG_COLOR
#define NRFX_SPIM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_SPIS_ENABLED - nrfx_spis - SPIS peripheral driver
//==========================================================
#ifndef NRFX_SPIS_ENABLED
#define NRFX_SPIS_ENABLED 0
#endif
// <q> NRFX_SPIS0_ENABLED  - Enable SPIS0 instance
 

#ifndef NRFX_SPIS0_ENABLED
#define NRFX_SPIS0_ENABLED 0
#endif

// <q> NRFX_SPIS1_ENABLED  - Enable SPIS1 instance
 

#ifndef NRFX_SPIS1_ENABLED
#define NRFX_SPIS1_ENABLED 0
#endif

// <q> NRFX_SPIS2_ENABLED  - Enable SPIS2 instance
 

#ifndef NRFX_SPIS2_ENABLED
#define NRFX_SPIS2_ENABLED 0
#endif

// <o> NRFX_SPIS_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_SPIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_SPIS_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_SPIS_DEFAULT_DEF - SPIS default DEF character  <0-255> 


#ifndef NRFX_SPIS_DEFAULT_DEF
#define NRFX_SPIS_DEFAULT_DEF 255
#endif

// <o> NRFX_SPIS_DEFAULT_ORC - SPIS default ORC character  <0-255> 


#ifndef NRFX_SPIS_DEFAULT_ORC
#define NRFX_SPIS_DEFAULT_ORC 255
#endif

// <e> NRFX_SPIS_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_SPIS_CONFIG_LOG_ENABLED
#define NRFX_SPIS_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_SPIS_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_SPIS_CONFIG_LOG_LEVEL
#define NRFX_SPIS_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_SPIS_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPIS_CONFIG_INFO_COLOR
#define NRFX_SPIS_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SPIS_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPIS_CONFIG_DEBUG_COLOR
#define NRFX_SPIS_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_SPI_ENABLED - nrfx_spi - SPI peripheral driver
//==========================================================
#ifndef NRFX_SPI_ENABLED
#define NRFX_SPI_ENABLED 0
#endif
// <q> NRFX_SPI0_ENABLED  - Enable SPI0 instance
 

#ifndef NRFX_SPI0_ENABLED
#define NRFX_SPI0_ENABLED 0
#endif

// <q> NRFX_SPI1_ENABLED  - Enable SPI1 instance
 

#ifndef NRFX_SPI1_ENABLED
#define NRFX_SPI1_ENABLED 0
#endif

// <q> NRFX_SPI2_ENABLED  - Enable SPI2 instance
 

#ifndef NRFX_SPI2_ENABLED
#define NRFX_SPI2_ENABLED 0
#endif

// <o> NRFX_SPI_MISO_PULL_CFG  - MISO pin pull configuration.
 
// <0=> NRF_GPIO_PIN_NOPULL 
// <1=> NRF_GPIO_PIN_PULLDOWN 
// <3=> NRF_GPIO_PIN_PULLUP 

#ifndef NRFX_SPI_MISO_PULL_CFG
#define NRFX_SPI_MISO_PULL_CFG 1
#endif

// <o> NRFX_SPI_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_SPI_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_SPI_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_SPI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_SPI_CONFIG_LOG_ENABLED
#define NRFX_SPI_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_SPI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_SPI_CONFIG_LOG_LEVEL
#define NRFX_SPI_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_SPI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPI_CONFIG_INFO_COLOR
#define NRFX_SPI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SPI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPI_CONFIG_DEBUG_COLOR
#define NRFX_SPI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_SWI_ENABLED - nrfx_swi - SWI/EGU peripheral allocator
//==========================================================
#ifndef NRFX_SWI_ENABLED
#define NRFX_SWI_ENABLED 0
#endif
// <q> NRFX_EGU_ENABLED  - Enable EGU support
 

#ifndef NRFX_EGU_ENABLED
#define NRFX_EGU_ENABLED 0
#endif

// <q> NRFX_SWI0_DISABLED  - Exclude SWI0 from being utilized by the driver
 

#ifndef NRFX_SWI0_DISABLED
#define NRFX_SWI0_DISABLED 0
#endif

// <q> NRFX_SWI1_DISABLED  - Exclude SWI1 from being utilized by the driver
 

#ifndef NRFX_SWI1_DISABLED
#define NRFX_SWI1_DISABLED 0
#endif

// <q> NRFX_SWI2_DISABLED  - Exclude SWI2 from being utilized by the driver
 

#ifndef NRFX_SWI2_DISABLED
#define NRFX_SWI2_DISABLED 0
#endif

// <q> NRFX_SWI3_DISABLED  - Exclude SWI3 from being utilized by the driver
 

#ifndef NRFX_SWI3_DISABLED
#define NRFX_SWI3_DISABLED 0
#endif

// <q> NRFX_SWI4_DISABLED  - Exclude SWI4 from being utilized by the driver
 

#ifndef NRFX_SWI4_DISABLED
#define NRFX_SWI4_DISABLED 0
#endif

// <q> NRFX_SWI5_DISABLED  - Exclude SWI5 from being utilized by the driver
 

#ifndef NRFX_SWI5_DISABLED
#define NRFX_SWI5_DISABLED 0
#endif

// <e> NRFX_SWI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_SWI_CONFIG_LOG_ENABLED
#define NRFX_SWI_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_SWI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_SWI_CONFIG_LOG_LEVEL
#define NRFX_SWI_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_SWI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SWI_CONFIG_INFO_COLOR
#define NRFX_SWI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SWI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SWI_CONFIG_DEBUG_COLOR
#define NRFX_SWI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_TIMER_ENABLED - nrfx_timer - TIMER periperal driver
//==========================================================
#ifndef NRFX_TIMER_ENABLED
#define NRFX_TIMER_ENABLED 0
#endif
// <q> NRFX_TIMER0_ENABLED  - Enable TIMER0 instance
 

#ifndef NRFX_TIMER0_ENABLED
#define NRFX_TIMER0_ENABLED 0
#endif

// <q> NRFX_TIMER1_ENABLED  - Enable TIMER1 instance
 

#ifndef NRFX_TIMER1_ENABLED
#define NRFX_TIMER1_ENABLED 0
#endif

// <q> NRFX_TIMER2_ENABLED  - Enable TIMER2 instance
 

#ifndef NRFX_TIMER2_ENABLED
#define NRFX_TIMER2_ENABLED 0
#endif

// <q> NRFX_TIMER3_ENABLED  - Enable TIMER3 instance
 

#ifndef NRFX_TIMER3_ENABLED
#define NRFX_TIMER3_ENABLED 0
#endif

// <q> NRFX_TIMER4_ENABLED  - Enable TIMER4 instance
 

#ifndef NRFX_TIMER4_ENABLED
#define NRFX_TIMER4_ENABLED 0
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_FREQUENCY  - Timer frequency if in Timer mode
 
// <0=> 16 MHz 
// <1=> 8 MHz 
// <2=> 4 MHz 
// <3=> 2 MHz 
// <4=> 1 MHz 
// <5=> 500 kHz 
// <6=> 250 kHz 
// <7=> 125 kHz 
// <8=> 62.5 kHz 
// <9=> 31.25 kHz 

#ifndef NRFX_TIMER_DEFAULT_CONFIG_FREQUENCY
#define NRFX_TIMER_DEFAULT_CONFIG_FREQUENCY 0
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_MODE  - Timer mode or operation
 
// <0=> Timer 
// <1=> Counter 

#ifndef NRFX_TIMER_DEFAULT_CONFIG_MODE
#define NRFX_TIMER_DEFAULT_CONFIG_MODE 0
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_BIT_WIDTH  - Timer counter bit width
 
// <0=> 16 bit 
// <1=> 8 bit 
// <2=> 24 bit 
// <3=> 32 bit 

#ifndef NRFX_TIMER_DEFAULT_CONFIG_BIT_WIDTH
#define NRFX_TIMER_DEFAULT_CONFIG_BIT_WIDTH 0
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_TIMER_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TIMER_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_TIMER_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_TIMER_CONFIG_LOG_ENABLED
#define NRFX_TIMER_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_TIMER_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_TIMER_CONFIG_LOG_LEVEL
#define NRFX_TIMER_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_TIMER_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TIMER_CONFIG_INFO_COLOR
#define NRFX_TIMER_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TIMER_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TIMER_CONFIG_DEBUG_COLOR
#define NRFX_TIMER_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_TWIM_ENABLED - nrfx_twim - TWIM peripheral driver
//==========================================================
#ifndef NRFX_TWIM_ENABLED
#define NRFX_TWIM_ENABLED 0
#endif
// <q> NRFX_TWIM0_ENABLED  - Enable TWIM0 instance
 

#ifndef NRFX_TWIM0_ENABLED
#define NRFX_TWIM0_ENABLED 0
#endif

// <q> NRFX_TWIM1_ENABLED  - Enable TWIM1 instance
 

#ifndef NRFX_TWIM1_ENABLED
#define NRFX_TWIM1_ENABLED 0
#endif

// <o> NRFX_TWIM_DEFAULT_CONFIG_FREQUENCY  - Frequency
 
// <26738688=> 100k 
// <67108864=> 250k 
// <104857600=> 400k 

#ifndef NRFX_TWIM_DEFAULT_CONFIG_FREQUENCY
#define NRFX_TWIM_DEFAULT_CONFIG_FREQUENCY 26738688
#endif

// <q> NRFX_TWIM_DEFAULT_CONFIG_HOLD_BUS_UNINIT  - Enables bus holding after uninit
 

#ifndef NRFX_TWIM_DEFAULT_CONFIG_HOLD_BUS_UNINIT
#define NRFX_TWIM_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
#endif

// <o> NRFX_TWIM_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_TWIM_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TWIM_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_TWIM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_TWIM_CONFIG_LOG_ENABLED
#define NRFX_TWIM_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_TWIM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_TWIM_CONFIG_LOG_LEVEL
#define NRFX_TWIM_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_TWIM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWIM_CONFIG_INFO_COLOR
#define NRFX_TWIM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TWIM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWIM_CONFIG_DEBUG_COLOR
#define NRFX_TWIM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_TWIS_ENABLED - nrfx_twis - TWIS peripheral driver
//==========================================================
#ifndef NRFX_TWIS_ENABLED
#define NRFX_TWIS_ENABLED 0
#endif
// <q> NRFX_TWIS0_ENABLED  - Enable TWIS0 instance
 

#ifndef NRFX_TWIS0_ENABLED
#define NRFX_TWIS0_ENABLED 0
#endif

// <q> NRFX_TWIS1_ENABLED  - Enable TWIS1 instance
 

#ifndef NRFX_TWIS1_ENABLED
#define NRFX_TWIS1_ENABLED 0
#endif

// <q> NRFX_TWIS_ASSUME_INIT_AFTER_RESET_ONLY  - Assume that any instance would be initialized only once
 

// <i> Optimization flag. Registers used by TWIS are shared by other peripherals. Normally, during initialization driver tries to clear all registers to known state before doing the initialization itself. This gives initialization safe procedure, no matter when it would be called. If you activate TWIS only once and do never uninitialize it - set this flag to 1 what gives more optimal code.

#ifndef NRFX_TWIS_ASSUME_INIT_AFTER_RESET_ONLY
#define NRFX_TWIS_ASSUME_INIT_AFTER_RESET_ONLY 0
#endif

// <q> NRFX_TWIS_NO_SYNC_MODE  - Remove support for synchronous mode
 

// <i> Synchronous mode would be used in specific situations. And it uses some additional code and data memory to safely process state machine by polling it in status functions. If this functionality is not required it may be disabled to free some resources.

#ifndef NRFX_TWIS_NO_SYNC_MODE
#define NRFX_TWIS_NO_SYNC_MODE 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_ADDR0 - Address0 
#ifndef NRFX_TWIS_DEFAULT_CONFIG_ADDR0
#define NRFX_TWIS_DEFAULT_CONFIG_ADDR0 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_ADDR1 - Address1 
#ifndef NRFX_TWIS_DEFAULT_CONFIG_ADDR1
#define NRFX_TWIS_DEFAULT_CONFIG_ADDR1 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_SCL_PULL  - SCL pin pull configuration
 
// <0=> Disabled 
// <1=> Pull down 
// <3=> Pull up 

#ifndef NRFX_TWIS_DEFAULT_CONFIG_SCL_PULL
#define NRFX_TWIS_DEFAULT_CONFIG_SCL_PULL 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_SDA_PULL  - SDA pin pull configuration
 
// <0=> Disabled 
// <1=> Pull down 
// <3=> Pull up 

#ifndef NRFX_TWIS_DEFAULT_CONFIG_SDA_PULL
#define NRFX_TWIS_DEFAULT_CONFIG_SDA_PULL 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_TWIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TWIS_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_TWIS_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_TWIS_CONFIG_LOG_ENABLED
#define NRFX_TWIS_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_TWIS_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_TWIS_CONFIG_LOG_LEVEL
#define NRFX_TWIS_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_TWIS_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWIS_CONFIG_INFO_COLOR
#define NRFX_TWIS_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TWIS_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWIS_CONFIG_DEBUG_COLOR
#define NRFX_TWIS_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_TWI_ENABLED - nrfx_twi - TWI peripheral driver
//==========================================================
#ifndef NRFX_TWI_ENABLED
#define NRFX_TWI_ENABLED 0
#endif
// <q> NRFX_TWI0_ENABLED  - Enable TWI0 instance
 

#ifndef NRFX_TWI0_ENABLED
#define NRFX_TWI0_ENABLED 0
#endif

// <q> NRFX_TWI1_ENABLED  - Enable TWI1 instance
 

#ifndef NRFX_TWI1_ENABLED
#define NRFX_TWI1_ENABLED 0
#endif

// <o> NRFX_TWI_DEFAULT_CONFIG_FREQUENCY  - Frequency
 
// <26738688=> 100k 
// <67108864=> 250k 
// <104857600=> 400k 

#ifndef NRFX_TWI_DEFAULT_CONFIG_FREQUENCY
#define NRFX_TWI_DEFAULT_CONFIG_FREQUENCY 26738688
#endif

// <q> NRFX_TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT  - Enables bus holding after uninit
 

#ifndef NRFX_TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT
#define NRFX_TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
#endif

// <o> NRFX_TWI_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_TWI_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TWI_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_TWI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_TWI_CONFIG_LOG_ENABLED
#define NRFX_TWI_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_TWI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_TWI_CONFIG_LOG_LEVEL
#define NRFX_TWI_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_TWI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWI_CONFIG_INFO_COLOR
#define NRFX_TWI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TWI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWI_CONFIG_DEBUG_COLOR
#define NRFX_TWI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_UARTE_ENABLED - nrfx_uarte - UARTE peripheral driver
//==========================================================
#ifndef NRFX_UARTE_ENABLED
#define NRFX_UARTE_ENABLED 0
#endif
// <o> NRFX_UARTE0_ENABLED - Enable UARTE0 instance 
#ifndef NRFX_UARTE0_ENABLED
#define NRFX_UARTE0_ENABLED 0
#endif

// <o> NRFX_UARTE1_ENABLED - Enable UARTE1 instance 
#ifndef NRFX_UARTE1_ENABLED
#define NRFX_UARTE1_ENABLED 0
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_HWFC  - Hardware Flow Control
 
// <0=> Disabled 
// <1=> Enabled 

#ifndef NRFX_UARTE_DEFAULT_CONFIG_HWFC
#define NRFX_UARTE_DEFAULT_CONFIG_HWFC 0
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_PARITY  - Parity
 
// <0=> Excluded 
// <14=> Included 

#ifndef NRFX_UARTE_DEFAULT_CONFIG_PARITY
#define NRFX_UARTE_DEFAULT_CONFIG_PARITY 0
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE  - Default Baudrate
 
// <323584=> 1200 baud 
// <643072=> 2400 baud 
// <1290240=> 4800 baud 
// <2576384=> 9600 baud 
// <3862528=> 14400 baud 
// <5152768=> 19200 baud 
// <7716864=> 28800 baud 
// <8388608=> 31250 baud 
// <10289152=> 38400 baud 
// <15007744=> 56000 baud 
// <15400960=> 57600 baud 
// <20615168=> 76800 baud 
// <30801920=> 115200 baud 
// <61865984=> 230400 baud 
// <67108864=> 250000 baud 
// <121634816=> 460800 baud 
// <251658240=> 921600 baud 
// <268435456=> 1000000 baud 

#ifndef NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE
#define NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE 30801920
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_UARTE_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_UARTE_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_UARTE_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_UARTE_CONFIG_LOG_ENABLED
#define NRFX_UARTE_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_UARTE_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_UARTE_CONFIG_LOG_LEVEL
#define NRFX_UARTE_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_UARTE_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_UARTE_CONFIG_INFO_COLOR
#define NRFX_UARTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_UARTE_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_UARTE_CONFIG_DEBUG_COLOR
#define NRFX_UARTE_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_UART_ENABLED - nrfx_uart - UART peripheral driver
//==========================================================
#ifndef NRFX_UART_ENABLED
#define NRFX_UART_ENABLED 0
#endif
// <o> NRFX_UART0_ENABLED - Enable UART0 instance 
#ifndef NRFX_UART0_ENABLED
#define NRFX_UART0_ENABLED 0
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_HWFC  - Hardware Flow Control
 
// <0=> Disabled 
// <1=> Enabled 

#ifndef NRFX_UART_DEFAULT_CONFIG_HWFC
#define NRFX_UART_DEFAULT_CONFIG_HWFC 0
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_PARITY  - Parity
 
// <0=> Excluded 
// <14=> Included 

#ifndef NRFX_UART_DEFAULT_CONFIG_PARITY
#define NRFX_UART_DEFAULT_CONFIG_PARITY 0
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_BAUDRATE  - Default Baudrate
 
// <323584=> 1200 baud 
// <643072=> 2400 baud 
// <1290240=> 4800 baud 
// <2576384=> 9600 baud 
// <3866624=> 14400 baud 
// <5152768=> 19200 baud 
// <7729152=> 28800 baud 
// <8388608=> 31250 baud 
// <10309632=> 38400 baud 
// <15007744=> 56000 baud 
// <15462400=> 57600 baud 
// <20615168=> 76800 baud 
// <30924800=> 115200 baud 
// <61845504=> 230400 baud 
// <67108864=> 250000 baud 
// <123695104=> 460800 baud 
// <247386112=> 921600 baud 
// <268435456=> 1000000 baud 

#ifndef NRFX_UART_DEFAULT_CONFIG_BAUDRATE
#define NRFX_UART_DEFAULT_CONFIG_BAUDRATE 30924800
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_UART_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_UART_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_UART_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_UART_CONFIG_LOG_ENABLED
#define NRFX_UART_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_UART_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_UART_CONFIG_LOG_LEVEL
#define NRFX_UART_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_UART_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_UART_CONFIG_INFO_COLOR
#define NRFX_UART_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_UART_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_UART_CONFIG_DEBUG_COLOR
#define NRFX_UART_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_WDT_ENABLED - nrfx_wdt - WDT peripheral driver
//==========================================================
#ifndef NRFX_WDT_ENABLED
#define NRFX_WDT_ENABLED 0
#endif
// <o> NRFX_WDT_CONFIG_BEHAVIOUR  - WDT behavior in CPU SLEEP or HALT mode
 
// <1=> Run in SLEEP, Pause in HALT 
// <8=> Pause in SLEEP, Run in HALT 
// <9=> Run in SLEEP and HALT 
// <0=> Pause in SLEEP and HALT 

#ifndef NRFX_WDT_CONFIG_BEHAVIOUR
#define NRFX_WDT_CONFIG_BEHAVIOUR 1
#endif

// <o> NRFX_WDT_CONFIG_RELOAD_VALUE - Reload value  <15-4294967295> 


#ifndef NRFX_WDT_CONFIG_RELOAD_VALUE
#define NRFX_WDT_CONFIG_RELOAD_VALUE 2000
#endif

// <o> NRFX_WDT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_WDT_CONFIG_IRQ_PRIORITY
#define NRFX_WDT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_WDT_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_WDT_CONFIG_LOG_ENABLED
#define NRFX_WDT_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_WDT_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_WDT_CONFIG_LOG_LEVEL
#define NRFX_WDT_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_WDT_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_WDT_CONFIG_INFO_COLOR
#define NRFX_WDT_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_WDT_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_WDT_CONFIG_DEBUG_COLOR
#define NRFX_WDT_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> PDM_ENABLED - nrf_drv_pdm - PDM peripheral driver - legacy layer
//==========================================================
#ifndef PDM_ENABLED
#define PDM_ENABLED 0
#endif
// <o> PDM_CONFIG_MODE  - Mode
 
// <0=> Stereo 
// <1=> Mono 

#ifndef PDM_CONFIG_MODE
#define PDM_CONFIG_MODE 1
#endif

// <o> PDM_CONFIG_EDGE  - Edge
 
// <0=> Left falling 
// <1=> Left rising 

#ifndef PDM_CONFIG_EDGE
#define PDM_CONFIG_EDGE 0
#endif

// <o> PDM_CONFIG_CLOCK_FREQ  - Clock frequency
 
// <134217728=> 1000k 
// <138412032=> 1032k (default) 
// <142606336=> 1067k 

#ifndef PDM_CONFIG_CLOCK_FREQ
#define PDM_CONFIG_CLOCK_FREQ 138412032
#endif

// <o> PDM_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef PDM_CONFIG_IRQ_PRIORITY
#define PDM_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <e> POWER_ENABLED - nrf_drv_power - POWER peripheral driver - legacy layer
//==========================================================
#ifndef POWER_ENABLED
#define POWER_ENABLED 0
#endif
// <o> POWER_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef POWER_CONFIG_IRQ_PRIORITY
#define POWER_CONFIG_IRQ_PRIORITY 7
#endif

// <q> POWER_CONFIG_DEFAULT_DCDCEN  - The default configuration of main DCDC regulator
 

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.

#ifndef POWER_CONFIG_DEFAULT_DCDCEN
#define POWER_CONFIG_DEFAULT_DCDCEN 0
#endif

// <q> POWER_CONFIG_DEFAULT_DCDCENHV  - The default configuration of High Voltage DCDC regulator
 

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.

#ifndef POWER_CONFIG_DEFAULT_DCDCENHV
#define POWER_CONFIG_DEFAULT_DCDCENHV 0
#endif

// </e>

// <q> PPI_ENABLED  - nrf_drv_ppi - PPI peripheral driver - legacy layer
 

#ifndef PPI_ENABLED
#define PPI_ENABLED 0
#endif

// <e> PWM_ENABLED - nrf_drv_pwm - PWM peripheral driver - legacy layer
//==========================================================
#ifndef PWM_ENABLED
#define PWM_ENABLED 0
#endif
// <o> PWM_DEFAULT_CONFIG_OUT0_PIN - Out0 pin  <0-31> 


#ifndef PWM_DEFAULT_CONFIG_OUT0_PIN
#define PWM_DEFAULT_CONFIG_OUT0_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_OUT1_PIN - Out1 pin  <0-31> 


#ifndef PWM_DEFAULT_CONFIG_OUT1_PIN
#define PWM_DEFAULT_CONFIG_OUT1_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_OUT2_PIN - Out2 pin  <0-31> 


#ifndef PWM_DEFAULT_CONFIG_OUT2_PIN
#define PWM_DEFAULT_CONFIG_OUT2_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_OUT3_PIN - Out3 pin  <0-31> 


#ifndef PWM_DEFAULT_CONFIG_OUT3_PIN
#define PWM_DEFAULT_CONFIG_OUT3_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_BASE_CLOCK  - Base clock
 
// <0=> 16 MHz 
// <1=> 8 MHz 
// <2=> 4 MHz 
// <3=> 2 MHz 
// <4=> 1 MHz 
// <5=> 500 kHz 
// <6=> 250 kHz 
// <7=> 125 kHz 

#ifndef PWM_DEFAULT_CONFIG_BASE_CLOCK
#define PWM_DEFAULT_CONFIG_BASE_CLOCK 4
#endif

// <o> PWM_DEFAULT_CONFIG_COUNT_MODE  - Count mode
 
// <0=> Up 
// <1=> Up and Down 

#ifndef PWM_DEFAULT_CONFIG_COUNT_MODE
#define PWM_DEFAULT_CONFIG_COUNT_MODE 0
#endif

// <o> PWM_DEFAULT_CONFIG_TOP_VALUE - Top value 
#ifndef PWM_DEFAULT_CONFIG_TOP_VALUE
#define PWM_DEFAULT_CONFIG_TOP_VALUE 1000
#endif

// <o> PWM_DEFAULT_CONFIG_LOAD_MODE  - Load mode
 
// <0=> Common 
// <1=> Grouped 
// <2=> Individual 
// <3=> Waveform 

#ifndef PWM_DEFAULT_CONFIG_LOAD_MODE
#define PWM_DEFAULT_CONFIG_LOAD_MODE 0
#endif

// <o> PWM_DEFAULT_CONFIG_STEP_MODE  - Step mode
 
// <0=> Auto 
// <1=> Triggered 

#ifndef PWM_DEFAULT_CONFIG_STEP_MODE
#define PWM_DEFAULT_CONFIG_STEP_MODE 0
#endif

// <o> PWM_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef PWM_DEFAULT_CONFIG_IRQ_PRIORITY
#define PWM_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <q> PWM0_ENABLED  - Enable PWM0 instance
 

#ifndef PWM0_ENABLED
#define PWM0_ENABLED 0
#endif

// <q> PWM1_ENABLED  - Enable PWM1 instance
 

#ifndef PWM1_ENABLED
#define PWM1_ENABLED 0
#endif

// <q> PWM2_ENABLED  - Enable PWM2 instance
 

#ifndef PWM2_ENABLED
#define PWM2_ENABLED 0
#endif

// <q> PWM3_ENABLED  - Enable PWM3 instance
 

#ifndef PWM3_ENABLED
#define PWM3_ENABLED 0
#endif

// </e>

// <e> QDEC_ENABLED - nrf_drv_qdec - QDEC peripheral driver - legacy layer
//==========================================================
#ifndef QDEC_ENABLED
#define QDEC_ENABLED 0
#endif
// <o> QDEC_CONFIG_REPORTPER  - Report period
 
// <0=> 10 Samples 
// <1=> 40 Samples 
// <2=> 80 Samples 
// <3=> 120 Samples 
// <4=> 160 Samples 
// <5=> 200 Samples 
// <6=> 240 Samples 
// <7=> 280 Samples 

#ifndef QDEC_CONFIG_REPORTPER
#define QDEC_CONFIG_REPORTPER 0
#endif

// <o> QDEC_CONFIG_SAMPLEPER  - Sample period
 
// <0=> 128 us 
// <1=> 256 us 
// <2=> 512 us 
// <3=> 1024 us 
// <4=> 2048 us 
// <5=> 4096 us 
// <6=> 8192 us 
// <7=> 16384 us 

#ifndef QDEC_CONFIG_SAMPLEPER
#define QDEC_CONFIG_SAMPLEPER 7
#endif

// <o> QDEC_CONFIG_PIO_A - A pin  <0-31> 


#ifndef QDEC_CONFIG_PIO_A
#define QDEC_CONFIG_PIO_A 31
#endif

// <o> QDEC_CONFIG_PIO_B - B pin  <0-31> 


#ifndef QDEC_CONFIG_PIO_B
#define QDEC_CONFIG_PIO_B 31
#endif

// <o> QDEC_CONFIG_PIO_LED - LED pin  <0-31> 


#ifndef QDEC_CONFIG_PIO_LED
#define QDEC_CONFIG_PIO_LED 31
#endif

// <o> QDEC_CONFIG_LEDPRE - LED pre 
#ifndef QDEC_CONFIG_LEDPRE
#define QDEC_CONFIG_LEDPRE 511
#endif

// <o> QDEC_CONFIG_LEDPOL  - LED polarity
 
// <0=> Active low 
// <1=> Active high 

#ifndef QDEC_CONFIG_LEDPOL
#define QDEC_CONFIG_LEDPOL 1
#endif

// <q> QDEC_CONFIG_DBFEN  - Debouncing enable
 

#ifndef QDEC_CONFIG_DBFEN
#define QDEC_CONFIG_DBFEN 0
#endif

// <q> QDEC_CONFIG_SAMPLE_INTEN  - Sample ready interrupt enable
 

#ifndef QDEC_CONFIG_SAMPLE_INTEN
#define QDEC_CONFIG_SAMPLE_INTEN 0
#endif

// <o> QDEC_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef QDEC_CONFIG_IRQ_PRIORITY
#define QDEC_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <e> QSPI_ENABLED - nrf_drv_qspi - QSPI peripheral driver - legacy layer
//==========================================================
#ifndef QSPI_ENABLED
#define QSPI_ENABLED 1
#endif
// <o> QSPI_CONFIG_SCK_DELAY - tSHSL, tWHSL and tSHWL in number of 16 MHz periods (62.5 ns).  <0-255> 


#ifndef QSPI_CONFIG_SCK_DELAY
#define QSPI_CONFIG_SCK_DELAY 1
#endif

// <o> QSPI_CONFIG_XIP_OFFSET - Address offset in the external memory for Execute in Place operation. 
#ifndef QSPI_CONFIG_XIP_OFFSET
#define QSPI_CONFIG_XIP_OFFSET 0
#endif

// <o> QSPI_CONFIG_READOC  - Number of data lines and opcode used for reading.
 
// <0=> FastRead 
// <1=> Read2O 
// <2=> Read2IO 
// <3=> Read4O 
// <4=> Read4IO 

#ifndef QSPI_CONFIG_READOC
#define QSPI_CONFIG_READOC 4
#endif

// <o> QSPI_CONFIG_WRITEOC  - Number of data lines and opcode used for writing.
 
// <0=> PP 
// <1=> PP2O 
// <2=> PP4O 
// <3=> PP4IO 

#ifndef QSPI_CONFIG_WRITEOC
#define QSPI_CONFIG_WRITEOC 2
#endif

// <o> QSPI_CONFIG_ADDRMODE  - Addressing mode.
 
// <0=> 24bit 
// <1=> 32bit 

#ifndef QSPI_CONFIG_ADDRMODE
#define QSPI_CONFIG_ADDRMODE 0
#endif

// <o> QSPI_CONFIG_MODE  - SPI mode.
 
// <0=> Mode 0 
// <1=> Mode 1 

#ifndef QSPI_CONFIG_MODE
#define QSPI_CONFIG_MODE 0
#endif

// <o> QSPI_CONFIG_FREQUENCY  - Frequency divider.
 
// <0=> 32MHz/1 
// <1=> 32MHz/2 
// <2=> 32MHz/3 
// <3=> 32MHz/4 
// <4=> 32MHz/5 
// <5=> 32MHz/6 
// <6=> 32MHz/7 
// <7=> 32MHz/8 
// <8=> 32MHz/9 
// <9=> 32MHz/10 
// <10=> 32MHz/11 
// <11=> 32MHz/12 
// <12=> 32MHz/13 
// <13=> 32MHz/14 
// <14=> 32MHz/15 
// <15=> 32MHz/16 

#ifndef QSPI_CONFIG_FREQUENCY
#define QSPI_CONFIG_FREQUENCY 0
#endif

// <s> QSPI_PIN_SCK - SCK pin value.
#ifndef QSPI_PIN_SCK
#define QSPI_PIN_SCK NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <s> QSPI_PIN_CSN - CSN pin value.
#ifndef QSPI_PIN_CSN
#define QSPI_PIN_CSN NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <s> QSPI_PIN_IO0 - IO0 pin value.
#ifndef QSPI_PIN_IO0
#define QSPI_PIN_IO0 NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <s> QSPI_PIN_IO1 - IO1 pin value.
#ifndef QSPI_PIN_IO1
#define QSPI_PIN_IO1 NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <s> QSPI_PIN_IO2 - IO2 pin value.
#ifndef QSPI_PIN_IO2
#define QSPI_PIN_IO2 NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <s> QSPI_PIN_IO3 - IO3 pin value.
#ifndef QSPI_PIN_IO3
#define QSPI_PIN_IO3 NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <o> QSPI_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef QSPI_CONFIG_IRQ_PRIORITY
#define QSPI_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <e> RNG_ENABLED - nrf_drv_rng - RNG peripheral driver - legacy layer
//==========================================================
#ifndef RNG_ENABLED
#define RNG_ENABLED 0
#endif
// <q> RNG_CONFIG_ERROR_CORRECTION  - Error correction
 

#ifndef RNG_CONFIG_ERROR_CORRECTION
#define RNG_CONFIG_ERROR_CORRECTION 1
#endif

// <o> RNG_CONFIG_POOL_SIZE - Pool size 
#ifndef RNG_CONFIG_POOL_SIZE
#define RNG_CONFIG_POOL_SIZE 64
#endif

// <o> RNG_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef RNG_CONFIG_IRQ_PRIORITY
#define RNG_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <e> RTC_ENABLED - nrf_drv_rtc - RTC peripheral driver - legacy layer
//==========================================================
#ifndef RTC_ENABLED
#define RTC_ENABLED 0
#endif
// <o> RTC_DEFAULT_CONFIG_FREQUENCY - Frequency  <16-32768> 


#ifndef RTC_DEFAULT_CONFIG_FREQUENCY
#define RTC_DEFAULT_CONFIG_FREQUENCY 32768
#endif

// <q> RTC_DEFAULT_CONFIG_RELIABLE  - Ensures safe compare event triggering
 

#ifndef RTC_DEFAULT_CONFIG_RELIABLE
#define RTC_DEFAULT_CONFIG_RELIABLE 0
#endif

// <o> RTC_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef RTC_DEFAULT_CONFIG_IRQ_PRIORITY
#define RTC_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <q> RTC0_ENABLED  - Enable RTC0 instance
 

#ifndef RTC0_ENABLED
#define RTC0_ENABLED 0
#endif

// <q> RTC1_ENABLED  - Enable RTC1 instance
 

#ifndef RTC1_ENABLED
#define RTC1_ENABLED 0
#endif

// <q> RTC2_ENABLED  - Enable RTC2 instance
 

#ifndef RTC2_ENABLED
#define RTC2_ENABLED 0
#endif

// <o> NRF_MAXIMUM_LATENCY_US - Maximum possible time[us] in highest priority interrupt 
#ifndef NRF_MAXIMUM_LATENCY_US
#define NRF_MAXIMUM_LATENCY_US 2000
#endif

// </e>

// <e> SAADC_ENABLED - nrf_drv_saadc - SAADC peripheral driver - legacy layer
//==========================================================
#ifndef SAADC_ENABLED
#define SAADC_ENABLED 0
#endif
// <o> SAADC_CONFIG_RESOLUTION  - Resolution
 
// <0=> 8 bit 
// <1=> 10 bit 
// <2=> 12 bit 
// <3=> 14 bit 

#ifndef SAADC_CONFIG_RESOLUTION
#define SAADC_CONFIG_RESOLUTION 1
#endif

// <o> SAADC_CONFIG_OVERSAMPLE  - Sample period
 
// <0=> Disabled 
// <1=> 2x 
// <2=> 4x 
// <3=> 8x 
// <4=> 16x 
// <5=> 32x 
// <6=> 64x 
// <7=> 128x 
// <8=> 256x 

#ifndef SAADC_CONFIG_OVERSAMPLE
#define SAADC_CONFIG_OVERSAMPLE 0
#endif

// <q> SAADC_CONFIG_LP_MODE  - Enabling low power mode
 

#ifndef SAADC_CONFIG_LP_MODE
#define SAADC_CONFIG_LP_MODE 0
#endif

// <o> SAADC_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef SAADC_CONFIG_IRQ_PRIORITY
#define SAADC_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <e> SPIS_ENABLED - nrf_drv_spis - SPIS peripheral driver - legacy layer
//==========================================================
#ifndef SPIS_ENABLED
#define SPIS_ENABLED 0
#endif
// <o> SPIS_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef SPIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define SPIS_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> SPIS_DEFAULT_MODE  - Mode
 
// <0=> MODE_0 
// <1=> MODE_1 
// <2=> MODE_2 
// <3=> MODE_3 

#ifndef SPIS_DEFAULT_MODE
#define SPIS_DEFAULT_MODE 0
#endif

// <o> SPIS_DEFAULT_BIT_ORDER  - SPIS default bit order
 
// <0=> MSB first 
// <1=> LSB first 

#ifndef SPIS_DEFAULT_BIT_ORDER
#define SPIS_DEFAULT_BIT_ORDER 0
#endif

// <o> SPIS_DEFAULT_DEF - SPIS default DEF character  <0-255> 


#ifndef SPIS_DEFAULT_DEF
#define SPIS_DEFAULT_DEF 255
#endif

// <o> SPIS_DEFAULT_ORC - SPIS default ORC character  <0-255> 


#ifndef SPIS_DEFAULT_ORC
#define SPIS_DEFAULT_ORC 255
#endif

// <q> SPIS0_ENABLED  - Enable SPIS0 instance
 

#ifndef SPIS0_ENABLED
#define SPIS0_ENABLED 0
#endif

// <q> SPIS1_ENABLED  - Enable SPIS1 instance
 

#ifndef SPIS1_ENABLED
#define SPIS1_ENABLED 0
#endif

// <q> SPIS2_ENABLED  - Enable SPIS2 instance
 

#ifndef SPIS2_ENABLED
#define SPIS2_ENABLED 0
#endif

// </e>

// <e> TIMER_ENABLED - nrf_drv_timer - TIMER periperal driver - legacy layer
//==========================================================
#ifndef TIMER_ENABLED
#define TIMER_ENABLED 0
#endif
// <o> TIMER_DEFAULT_CONFIG_FREQUENCY  - Timer frequency if in Timer mode
 
// <0=> 16 MHz 
// <1=> 8 MHz 
// <2=> 4 MHz 
// <3=> 2 MHz 
// <4=> 1 MHz 
// <5=> 500 kHz 
// <6=> 250 kHz 
// <7=> 125 kHz 
// <8=> 62.5 kHz 
// <9=> 31.25 kHz 

#ifndef TIMER_DEFAULT_CONFIG_FREQUENCY
#define TIMER_DEFAULT_CONFIG_FREQUENCY 0
#endif

// <o> TIMER_DEFAULT_CONFIG_MODE  - Timer mode or operation
 
// <0=> Timer 
// <1=> Counter 

#ifndef TIMER_DEFAULT_CONFIG_MODE
#define TIMER_DEFAULT_CONFIG_MODE 0
#endif

// <o> TIMER_DEFAULT_CONFIG_BIT_WIDTH  - Timer counter bit width
 
// <0=> 16 bit 
// <1=> 8 bit 
// <2=> 24 bit 
// <3=> 32 bit 

#ifndef TIMER_DEFAULT_CONFIG_BIT_WIDTH
#define TIMER_DEFAULT_CONFIG_BIT_WIDTH 0
#endif

// <o> TIMER_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef TIMER_DEFAULT_CONFIG_IRQ_PRIORITY
#define TIMER_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <q> TIMER0_ENABLED  - Enable TIMER0 instance
 

#ifndef TIMER0_ENABLED
#define TIMER0_ENABLED 0
#endif

// <q> TIMER1_ENABLED  - Enable TIMER1 instance
 

#ifndef TIMER1_ENABLED
#define TIMER1_ENABLED 0
#endif

// <q> TIMER2_ENABLED  - Enable TIMER2 instance
 

#ifndef TIMER2_ENABLED
#define TIMER2_ENABLED 0
#endif

// <q> TIMER3_ENABLED  - Enable TIMER3 instance
 

#ifndef TIMER3_ENABLED
#define TIMER3_ENABLED 0
#endif

// <q> TIMER4_ENABLED  - Enable TIMER4 instance
 

#ifndef TIMER4_ENABLED
#define TIMER4_ENABLED 0
#endif

// </e>

// <e> TWIS_ENABLED - nrf_drv_twis - TWIS peripheral driver - legacy layer
//==========================================================
#ifndef TWIS_ENABLED
#define TWIS_ENABLED 0
#endif
// <q> TWIS0_ENABLED  - Enable TWIS0 instance
 

#ifndef TWIS0_ENABLED
#define TWIS0_ENABLED 0
#endif

// <q> TWIS1_ENABLED  - Enable TWIS1 instance
 

#ifndef TWIS1_ENABLED
#define TWIS1_ENABLED 0
#endif

// <q> TWIS_ASSUME_INIT_AFTER_RESET_ONLY  - Assume that any instance would be initialized only once
 

// <i> Optimization flag. Registers used by TWIS are shared by other peripherals. Normally, during initialization driver tries to clear all registers to known state before doing the initialization itself. This gives initialization safe procedure, no matter when it would be called. If you activate TWIS only once and do never uninitialize it - set this flag to 1 what gives more optimal code.

#ifndef TWIS_ASSUME_INIT_AFTER_RESET_ONLY
#define TWIS_ASSUME_INIT_AFTER_RESET_ONLY 0
#endif

// <q> TWIS_NO_SYNC_MODE  - Remove support for synchronous mode
 

// <i> Synchronous mode would be used in specific situations. And it uses some additional code and data memory to safely process state machine by polling it in status functions. If this functionality is not required it may be disabled to free some resources.

#ifndef TWIS_NO_SYNC_MODE
#define TWIS_NO_SYNC_MODE 0
#endif

// <o> TWIS_DEFAULT_CONFIG_ADDR0 - Address0 
#ifndef TWIS_DEFAULT_CONFIG_ADDR0
#define TWIS_DEFAULT_CONFIG_ADDR0 0
#endif

// <o> TWIS_DEFAULT_CONFIG_ADDR1 - Address1 
#ifndef TWIS_DEFAULT_CONFIG_ADDR1
#define TWIS_DEFAULT_CONFIG_ADDR1 0
#endif

// <o> TWIS_DEFAULT_CONFIG_SCL_PULL  - SCL pin pull configuration
 
// <0=> Disabled 
// <1=> Pull down 
// <3=> Pull up 

#ifndef TWIS_DEFAULT_CONFIG_SCL_PULL
#define TWIS_DEFAULT_CONFIG_SCL_PULL 0
#endif

// <o> TWIS_DEFAULT_CONFIG_SDA_PULL  - SDA pin pull configuration
 
// <0=> Disabled 
// <1=> Pull down 
// <3=> Pull up 

#ifndef TWIS_DEFAULT_CONFIG_SDA_PULL
#define TWIS_DEFAULT_CONFIG_SDA_PULL 0
#endif

// <o> TWIS_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef TWIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define TWIS_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// <e> TWI_ENABLED - nrf_drv_twi - TWI/TWIM peripheral driver - legacy layer
//==========================================================
#ifndef TWI_ENABLED
#define TWI_ENABLED 0
#endif
// <o> TWI_DEFAULT_CONFIG_FREQUENCY  - Frequency
 
// <26738688=> 100k 
// <67108864=> 250k 
// <104857600=> 400k 

#ifndef TWI_DEFAULT_CONFIG_FREQUENCY
#define TWI_DEFAULT_CONFIG_FREQUENCY 26738688
#endif

// <q> TWI_DEFAULT_CONFIG_CLR_BUS_INIT  - Enables bus clearing procedure during init
 

#ifndef TWI_DEFAULT_CONFIG_CLR_BUS_INIT
#define TWI_DEFAULT_CONFIG_CLR_BUS_INIT 0
#endif

// <q> TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT  - Enables bus holding after uninit
 

#ifndef TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT
#define TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
#endif

// <o> TWI_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef TWI_DEFAULT_CONFIG_IRQ_PRIORITY
#define TWI_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> TWI0_ENABLED - Enable TWI0 instance
//==========================================================
#ifndef TWI0_ENABLED
#define TWI0_ENABLED 0
#endif
// <q> TWI0_USE_EASY_DMA  - Use EasyDMA (if present)
 

#ifndef TWI0_USE_EASY_DMA
#define TWI0_USE_EASY_DMA 0
#endif

// </e>

// <e> TWI1_ENABLED - Enable TWI1 instance
//==========================================================
#ifndef TWI1_ENABLED
#define TWI1_ENABLED 0
#endif
// <q> TWI1_USE_EASY_DMA  - Use EasyDMA (if present)
 

#ifndef TWI1_USE_EASY_DMA
#define TWI1_USE_EASY_DMA 0
#endif

// </e>

// </e>

// <e> UART_ENABLED - nrf_drv_uart - UART/UARTE peripheral driver - legacy layer
//==========================================================
#ifndef UART_ENABLED
#define UART_ENABLED 0
#endif
// <o> UART_DEFAULT_CONFIG_HWFC  - Hardware Flow Control
 
// <0=> Disabled 
// <1=> Enabled 

#ifndef UART_DEFAULT_CONFIG_HWFC
#define UART_DEFAULT_CONFIG_HWFC 0
#endif

// <o> UART_DEFAULT_CONFIG_PARITY  - Parity
 
// <0=> Excluded 
// <14=> Included 

#ifndef UART_DEFAULT_CONFIG_PARITY
#define UART_DEFAULT_CONFIG_PARITY 0
#endif

// <o> UART_DEFAULT_CONFIG_BAUDRATE  - Default Baudrate
 
// <323584=> 1200 baud 
// <643072=> 2400 baud 
// <1290240=> 4800 baud 
// <2576384=> 9600 baud 
// <3862528=> 14400 baud 
// <5152768=> 19200 baud 
// <7716864=> 28800 baud 
// <10289152=> 38400 baud 
// <15400960=> 57600 baud 
// <20615168=> 76800 baud 
// <30801920=> 115200 baud 
// <61865984=> 230400 baud 
// <67108864=> 250000 baud 
// <121634816=> 460800 baud 
// <251658240=> 921600 baud 
// <268435456=> 1000000 baud 

#ifndef UART_DEFAULT_CONFIG_BAUDRATE
#define UART_DEFAULT_CONFIG_BAUDRATE 30801920
#endif

// <o> UART_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef UART_DEFAULT_CONFIG_IRQ_PRIORITY
#define UART_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <q> UART_EASY_DMA_SUPPORT  - Driver supporting EasyDMA
 

#ifndef UART_EASY_DMA_SUPPORT
#define UART_EASY_DMA_SUPPORT 1
#endif

// <q> UART_LEGACY_SUPPORT  - Driver supporting Legacy mode
 

#ifndef UART_LEGACY_SUPPORT
#define UART_LEGACY_SUPPORT 1
#endif

// <e> UART0_ENABLED - Enable UART0 instance
//==========================================================
#ifndef UART0_ENABLED
#define UART0_ENABLED 1
#endif
// <q> UART0_CONFIG_USE_EASY_DMA  - Default setting for using EasyDMA
 

#ifndef UART0_CONFIG_USE_EASY_DMA
#define UART0_CONFIG_USE_EASY_DMA 1
#endif

// </e>

// <e> UART1_ENABLED - Enable UART1 instance
//==========================================================
#ifndef UART1_ENABLED
#define UART1_ENABLED 0
#endif
// </e>

// </e>

// <e> USBD_ENABLED - nrf_drv_usbd - USB driver
//==========================================================
#ifndef USBD_ENABLED
#define USBD_ENABLED 0
#endif
// <o> USBD_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef USBD_CONFIG_IRQ_PRIORITY
#define USBD_CONFIG_IRQ_PRIORITY 7
#endif

// <o> USBD_CONFIG_DMASCHEDULER_MODE  - USBD SMA scheduler working scheme
 
// <0=> Prioritized access 
// <1=> Round Robin 

#ifndef USBD_CONFIG_DMASCHEDULER_MODE
#define USBD_CONFIG_DMASCHEDULER_MODE 0
#endif

// </e>

// <e> WDT_ENABLED - nrf_drv_wdt - WDT peripheral driver - legacy layer
//==========================================================
#ifndef WDT_ENABLED
#define WDT_ENABLED 0
#endif
// <o> WDT_CONFIG_BEHAVIOUR  - WDT behavior in CPU SLEEP or HALT mode
 
// <1=> Run in SLEEP, Pause in HALT 
// <8=> Pause in SLEEP, Run in HALT 
// <9=> Run in SLEEP and HALT 
// <0=> Pause in SLEEP and HALT 

#ifndef WDT_CONFIG_BEHAVIOUR
#define WDT_CONFIG_BEHAVIOUR 1
#endif

// <o> WDT_CONFIG_RELOAD_VALUE - Reload value  <15-4294967295> 


#ifndef WDT_CONFIG_RELOAD_VALUE
#define WDT_CONFIG_RELOAD_VALUE 2000
#endif

// <o> WDT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef WDT_CONFIG_IRQ_PRIORITY
#define WDT_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// </h> 
// <<< end of configuration section >>>
#endif // NRFX_CONFIG_H__


