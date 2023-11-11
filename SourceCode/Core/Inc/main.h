/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define Button_2_Pin GPIO_PIN_13
#define Button_2_GPIO_Port GPIOC
#define LED_RED_1_Pin GPIO_PIN_1
#define LED_RED_1_GPIO_Port GPIOA
#define LED_YELLOW_1_Pin GPIO_PIN_2
#define LED_YELLOW_1_GPIO_Port GPIOA
#define LED_GREEN_1_Pin GPIO_PIN_3
#define LED_GREEN_1_GPIO_Port GPIOA
#define LED_RED_2_Pin GPIO_PIN_4
#define LED_RED_2_GPIO_Port GPIOA
#define LED_YELLOW_2_Pin GPIO_PIN_5
#define LED_YELLOW_2_GPIO_Port GPIOA
#define LED_GREEN_2_Pin GPIO_PIN_6
#define LED_GREEN_2_GPIO_Port GPIOA
#define Pin0_Pin GPIO_PIN_7
#define Pin0_GPIO_Port GPIOA
#define On_1_Pin GPIO_PIN_0
#define On_1_GPIO_Port GPIOB
#define On_2_Pin GPIO_PIN_1
#define On_2_GPIO_Port GPIOB
#define On_3_Pin GPIO_PIN_2
#define On_3_GPIO_Port GPIOB
#define Pin1_Pin GPIO_PIN_8
#define Pin1_GPIO_Port GPIOA
#define Pin2_Pin GPIO_PIN_9
#define Pin2_GPIO_Port GPIOA
#define Pin3_Pin GPIO_PIN_10
#define Pin3_GPIO_Port GPIOA
#define Pin4_Pin GPIO_PIN_11
#define Pin4_GPIO_Port GPIOA
#define Pin5_Pin GPIO_PIN_12
#define Pin5_GPIO_Port GPIOA
#define Pin6_Pin GPIO_PIN_13
#define Pin6_GPIO_Port GPIOA
#define Button_0_Pin GPIO_PIN_14
#define Button_0_GPIO_Port GPIOA
#define Button_1_Pin GPIO_PIN_15
#define Button_1_GPIO_Port GPIOA
#define On_4_Pin GPIO_PIN_3
#define On_4_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
