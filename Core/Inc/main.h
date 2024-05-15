/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Joy_Center_Pin GPIO_PIN_0
#define Joy_Center_GPIO_Port GPIOA
#define Joy_Left_Pin GPIO_PIN_1
#define Joy_Left_GPIO_Port GPIOA
#define Joy_Right_Pin GPIO_PIN_2
#define Joy_Right_GPIO_Port GPIOA
#define Joy_Up_Pin GPIO_PIN_3
#define Joy_Up_GPIO_Port GPIOA
#define Joy_Down_Pin GPIO_PIN_5
#define Joy_Down_GPIO_Port GPIOA
#define LD_Red_Pin GPIO_PIN_2
#define LD_Red_GPIO_Port GPIOB
#define LD_Green_Pin GPIO_PIN_8
#define LD_Green_GPIO_Port GPIOE
#define CS_Pin GPIO_PIN_6
#define CS_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
