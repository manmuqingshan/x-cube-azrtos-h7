/**
  ******************************************************************************
  * @file    mt25tl01g_conf.h
  * @author  MCD Application Team
  * @brief   This file contains all the description of the
  *          MT25TL01G QSPI memory.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2019-2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
#ifndef MT25TL01G_CONF_H
#define MT25TL01G_CONF_H

#ifdef __cplusplus
 extern "C" {
#endif

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/** @addtogroup BSP
  * @{
  */

#define CONF_MT25TL01G_READ_ENHANCE      0                       /* MMP performance enhance read enable/disable */

#define CONF_QSPI_ODS                   MT25TL01G_CR_ODS_15

#define CONF_QSPI_DUMMY_CLOCK                 8U

/* Dummy cycles for STR read mode */
#define MT25TL01G_DUMMY_CYCLES_READ_QUAD      8U
#define MT25TL01G_DUMMY_CYCLES_READ           8U
/* Dummy cycles for DTR read mode */
#define MT25TL01G_DUMMY_CYCLES_READ_DTR       6U
#define MT25TL01G_DUMMY_CYCLES_READ_QUAD_DTR  8U

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

#ifdef __cplusplus
}
#endif

#endif /* MT25TL01G_CONF_H */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */
