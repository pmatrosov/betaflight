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
#include "drivers/dma.h"

#include "drivers/timer.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    { TIM12, IO_TAG(PB14), TIM_Channel_1, TIM8_BRK_TIM12_IRQn, 0, IOCFG_AF_PP, GPIO_AF_TIM12, NULL,         0,             0  },  // PPM (5th pin on FlexiIO port)
    { TIM12, IO_TAG(PB15), TIM_Channel_2, TIM8_BRK_TIM12_IRQn, 0, IOCFG_AF_PP, GPIO_AF_TIM12, NULL,         0,             0  },  // S2_IN
    { TIM8,  IO_TAG(PC6),  TIM_Channel_1, TIM8_CC_IRQn,        0, IOCFG_AF_PP, GPIO_AF_TIM8,  NULL,         0,             0  },  // S3_IN
    { TIM8,  IO_TAG(PC7),  TIM_Channel_2, TIM8_CC_IRQn,        0, IOCFG_AF_PP, GPIO_AF_TIM8,  NULL,         0,             0  },  // S4_IN
    { TIM8,  IO_TAG(PC8),  TIM_Channel_3, TIM8_CC_IRQn,        0, IOCFG_AF_PP, GPIO_AF_TIM8,  NULL,         0,             0  },  // S5_IN
    { TIM8,  IO_TAG(PC9),  TIM_Channel_4, TIM8_CC_IRQn,        0, IOCFG_AF_PP, GPIO_AF_TIM8,  NULL,         0,             0  },  // S6_IN
    { TIM3,  IO_TAG(PB0),  TIM_Channel_3, TIM3_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM3,  DMA1_Stream7, DMA_Channel_5, DMA1_ST7_HANDLER  },  // S1_OUT
    { TIM3,  IO_TAG(PB1),  TIM_Channel_4, TIM3_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM3,  DMA1_Stream2, DMA_Channel_5, DMA1_ST2_HANDLER  },  // S2_OUT
    { TIM2,  IO_TAG(PA3),  TIM_Channel_4, TIM2_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM2,  DMA1_Stream6, DMA_Channel_3, DMA1_ST6_HANDLER  },  // S3_OUT
    { TIM2,  IO_TAG(PA2),  TIM_Channel_3, TIM2_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM2,  DMA1_Stream1, DMA_Channel_3, DMA1_ST1_HANDLER  },  // S4_OUT
    { TIM5,  IO_TAG(PA1),  TIM_Channel_2, TIM5_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM5,  DMA1_Stream4, DMA_Channel_6, DMA1_ST4_HANDLER  },  // S5_OUT
    { TIM5,  IO_TAG(PA0),  TIM_Channel_1, TIM5_IRQn,           1, IOCFG_AF_PP, GPIO_AF_TIM5,  DMA1_Stream2, DMA_Channel_6, DMA1_ST2_HANDLER  },  // S6_OUT
};
