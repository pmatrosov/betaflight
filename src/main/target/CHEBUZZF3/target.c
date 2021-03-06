/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/timer.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    // INPUTS CH1-8
    { TIM1,  IO_TAG(PA8),  TIM_Channel_1, TIM1_CC_IRQn,            1, IOCFG_AF_PP_PD, GPIO_AF_6 }, // PWM1 - PA8
    { TIM16, IO_TAG(PB8),  TIM_Channel_1, TIM1_UP_TIM16_IRQn,      0, IOCFG_AF_PP_PD, GPIO_AF_1 }, // PWM2 - PB8
    { TIM17, IO_TAG(PB9),  TIM_Channel_1, TIM1_TRG_COM_TIM17_IRQn, 0, IOCFG_AF_PP_PD, GPIO_AF_1 }, // PWM3 - PB9
    { TIM8,  IO_TAG(PC6),  TIM_Channel_1, TIM8_CC_IRQn,            1, IOCFG_AF_PP_PD, GPIO_AF_4 }, // PWM4 - PC6
    { TIM8,  IO_TAG(PC7),  TIM_Channel_2, TIM8_CC_IRQn,            1, IOCFG_AF_PP_PD, GPIO_AF_4 }, // PWM5 - PC7
    { TIM8,  IO_TAG(PC8),  TIM_Channel_3, TIM8_CC_IRQn,            1, IOCFG_AF_PP_PD, GPIO_AF_4 }, // PWM6 - PC8
    { TIM15, IO_TAG(PF9),  TIM_Channel_1, TIM1_BRK_TIM15_IRQn,     0, IOCFG_AF_PP_PD, GPIO_AF_3 }, // PWM7 - PF9
    { TIM15, IO_TAG(PF10), TIM_Channel_2, TIM1_BRK_TIM15_IRQn,     0, IOCFG_AF_PP_PD, GPIO_AF_3 }, // PWM8 - PF10
    { TIM4,  IO_TAG(PD12), TIM_Channel_1, TIM4_IRQn,               0, IOCFG_AF_PP,    GPIO_AF_2 }, // PWM9 - PD12
    { TIM4,  IO_TAG(PD13), TIM_Channel_2, TIM4_IRQn,               0, IOCFG_AF_PP,    GPIO_AF_2 }, // PWM10 - PD13
    { TIM4,  IO_TAG(PD14), TIM_Channel_3, TIM4_IRQn,               0, IOCFG_AF_PP,    GPIO_AF_2 }, // PWM11 - PD14
    { TIM4,  IO_TAG(PD15), TIM_Channel_4, TIM4_IRQn,               0, IOCFG_AF_PP,    GPIO_AF_2 }, // PWM12 - PD15
    { TIM2,  IO_TAG(PA1),  TIM_Channel_2, TIM2_IRQn,               0, IOCFG_AF_PP,    GPIO_AF_1 }, // PWM13 - PA1
    { TIM2,  IO_TAG(PA2),  TIM_Channel_3, TIM2_IRQn,               0, IOCFG_AF_PP,    GPIO_AF_1 }, // PWM14 - PA2
    { TIM2,  IO_TAG(PA3),  TIM_Channel_4, TIM2_IRQn,               0, IOCFG_AF_PP,    GPIO_AF_1 }, // PWM15 - PA3
    { TIM3,  IO_TAG(PB0),  TIM_Channel_3, TIM3_IRQn,               0, IOCFG_AF_PP,    GPIO_AF_2 }, // PWM16 - PB0
    { TIM3,  IO_TAG(PB1),  TIM_Channel_4, TIM3_IRQn,               0, IOCFG_AF_PP,    GPIO_AF_2 }, // PWM17 - PB1
    { TIM3,  IO_TAG(PA4),  TIM_Channel_2, TIM3_IRQn,               0, IOCFG_AF_PP,    GPIO_AF_2 }  // PWM18 - PA4
};

