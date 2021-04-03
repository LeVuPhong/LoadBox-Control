/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include "stm32g4xx_hal.h"
#include "stm32g4xx_ll_pwr.h"

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
#define KNOB_UP_OUT_Pin GPIO_PIN_2
#define KNOB_UP_OUT_GPIO_Port GPIOE
#define KNOB_DOWN_OUT_Pin GPIO_PIN_3
#define KNOB_DOWN_OUT_GPIO_Port GPIOE
#define ACC_OUT_Pin GPIO_PIN_4
#define ACC_OUT_GPIO_Port GPIOE
#define ING_OUT_Pin GPIO_PIN_5
#define ING_OUT_GPIO_Port GPIOE
#define SOS_OUT_Pin GPIO_PIN_6
#define SOS_OUT_GPIO_Port GPIOE
#define V5_EN_Pin GPIO_PIN_9
#define V5_EN_GPIO_Port GPIOF
#define VBAT_ON_Pin GPIO_PIN_10
#define VBAT_ON_GPIO_Port GPIOF
#define CPU_AI1_Pin GPIO_PIN_0
#define CPU_AI1_GPIO_Port GPIOC
#define CPU_AI2_Pin GPIO_PIN_1
#define CPU_AI2_GPIO_Port GPIOC
#define CPU_AI3_Pin GPIO_PIN_2
#define CPU_AI3_GPIO_Port GPIOC
#define CPU_AI4_Pin GPIO_PIN_3
#define CPU_AI4_GPIO_Port GPIOC
#define LES_SYS_Pin GPIO_PIN_2
#define LES_SYS_GPIO_Port GPIOF
#define CPU_AI5_Pin GPIO_PIN_0
#define CPU_AI5_GPIO_Port GPIOA
#define CPU_AI6_Pin GPIO_PIN_1
#define CPU_AI6_GPIO_Port GPIOA
#define RELAY_ON10_Pin GPIO_PIN_2
#define RELAY_ON10_GPIO_Port GPIOA
#define RELAY_ON9_Pin GPIO_PIN_3
#define RELAY_ON9_GPIO_Port GPIOA
#define CPU_AI7_Pin GPIO_PIN_4
#define CPU_AI7_GPIO_Port GPIOA
#define CPU_AI8_Pin GPIO_PIN_5
#define CPU_AI8_GPIO_Port GPIOA
#define CPU_AI9_Pin GPIO_PIN_6
#define CPU_AI9_GPIO_Port GPIOA
#define CPU_AI10_Pin GPIO_PIN_7
#define CPU_AI10_GPIO_Port GPIOA
#define CPU_TEST_IN_Pin GPIO_PIN_4
#define CPU_TEST_IN_GPIO_Port GPIOC
#define CPU_SW_SENSE_Pin GPIO_PIN_5
#define CPU_SW_SENSE_GPIO_Port GPIOC
#define RELAY_ON5_Pin GPIO_PIN_0
#define RELAY_ON5_GPIO_Port GPIOB
#define RELAY_ON6_Pin GPIO_PIN_1
#define RELAY_ON6_GPIO_Port GPIOB
#define I2C3_SAMBA_Pin GPIO_PIN_2
#define I2C3_SAMBA_GPIO_Port GPIOB
#define V33_VCC_ADC_Pin GPIO_PIN_7
#define V33_VCC_ADC_GPIO_Port GPIOE
#define CPU_AV1_Pin GPIO_PIN_8
#define CPU_AV1_GPIO_Port GPIOE
#define RELAY_ON11_Pin GPIO_PIN_9
#define RELAY_ON11_GPIO_Port GPIOE
#define CPU_AV2_Pin GPIO_PIN_10
#define CPU_AV2_GPIO_Port GPIOE
#define CPU_AV3_Pin GPIO_PIN_11
#define CPU_AV3_GPIO_Port GPIOE
#define CPU_AV4_Pin GPIO_PIN_12
#define CPU_AV4_GPIO_Port GPIOE
#define RELAY_ON12_Pin GPIO_PIN_13
#define RELAY_ON12_GPIO_Port GPIOE
#define CPU_AV5_Pin GPIO_PIN_14
#define CPU_AV5_GPIO_Port GPIOE
#define CPU_AV6_Pin GPIO_PIN_15
#define CPU_AV6_GPIO_Port GPIOE
#define RELAY_ON3_Pin GPIO_PIN_10
#define RELAY_ON3_GPIO_Port GPIOB
#define RELAY_ON4_Pin GPIO_PIN_11
#define RELAY_ON4_GPIO_Port GPIOB
#define CPU_AV7_Pin GPIO_PIN_12
#define CPU_AV7_GPIO_Port GPIOB
#define RELAY_ON7_Pin GPIO_PIN_13
#define RELAY_ON7_GPIO_Port GPIOB
#define CPU_AV8_Pin GPIO_PIN_14
#define CPU_AV8_GPIO_Port GPIOB
#define CPU_AV9_Pin GPIO_PIN_15
#define CPU_AV9_GPIO_Port GPIOB
#define CPU_AV10_Pin GPIO_PIN_8
#define CPU_AV10_GPIO_Port GPIOD
#define CPU_AV11_Pin GPIO_PIN_9
#define CPU_AV11_GPIO_Port GPIOD
#define CPU_AV12_Pin GPIO_PIN_10
#define CPU_AV12_GPIO_Port GPIOD
#define VBAT_ADC_Pin GPIO_PIN_11
#define VBAT_ADC_GPIO_Port GPIOD
#define V5_ADJ_ADC_Pin GPIO_PIN_12
#define V5_ADJ_ADC_GPIO_Port GPIOD
#define IGN_IN2_Pin GPIO_PIN_13
#define IGN_IN2_GPIO_Port GPIOD
#define V5_USB_ADC_Pin GPIO_PIN_14
#define V5_USB_ADC_GPIO_Port GPIOD
#define SOS_IN2_Pin GPIO_PIN_15
#define SOS_IN2_GPIO_Port GPIOD
#define RELAY_ON8_Pin GPIO_PIN_8
#define RELAY_ON8_GPIO_Port GPIOA
#define CPU_PG2_VCC_Pin GPIO_PIN_12
#define CPU_PG2_VCC_GPIO_Port GPIOC
#define CUP_PG1_5V_Pin GPIO_PIN_0
#define CUP_PG1_5V_GPIO_Port GPIOD
#define SOS_IN1_Pin GPIO_PIN_1
#define SOS_IN1_GPIO_Port GPIOD
#define KNOB_PRESS_IN_Pin GPIO_PIN_2
#define KNOB_PRESS_IN_GPIO_Port GPIOD
#define KNOB_UP_IN_Pin GPIO_PIN_3
#define KNOB_UP_IN_GPIO_Port GPIOD
#define KNOB_DOWN_IN_Pin GPIO_PIN_4
#define KNOB_DOWN_IN_GPIO_Port GPIOD
#define ACC_IN1_Pin GPIO_PIN_5
#define ACC_IN1_GPIO_Port GPIOD
#define ACC_IN2_Pin GPIO_PIN_6
#define ACC_IN2_GPIO_Port GPIOD
#define IGN_IN1_Pin GPIO_PIN_7
#define IGN_IN1_GPIO_Port GPIOD
#define REALY_ON1_Pin GPIO_PIN_6
#define REALY_ON1_GPIO_Port GPIOB
#define LED_ERR_Pin GPIO_PIN_7
#define LED_ERR_GPIO_Port GPIOB
#define REALAY_ON2_Pin GPIO_PIN_9
#define REALAY_ON2_GPIO_Port GPIOB
#define CPU_TEST_OUT_Pin GPIO_PIN_0
#define CPU_TEST_OUT_GPIO_Port GPIOE
#define KNOB_PRESS_OUT_Pin GPIO_PIN_1
#define KNOB_PRESS_OUT_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
