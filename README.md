In this proiject I connect STM32L476G-DISCO and adxl345

<!-- Hardvare connect -->
## Connect
![CONNECT](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/9f6901aa-1590-4fe4-b1b8-6a69dfb853b0)

Dont forgot enable CS PB6 PIN 
![image](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/17b00225-d309-44a8-8947-2d0aca551ee0)


<!-- CubeMX settings -->
    System Core
##
* NVIC
![image](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/a62e34bc-79d5-424f-9eb4-c02d22eae61c)
##
* RCC
![image](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/46e263d5-5f5e-4b71-9418-4730ac2fa310)
##
* SYS
![image](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/d32f5f28-1589-4d6e-8964-2d3913813b6b)

    Timers
* Timer 4
  ![image](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/8cb190c4-c50e-4c81-b900-8b64bded07db)
* Timer 6
  ![image](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/3c3c510a-e759-4ad4-aa6d-b5a65e18e29a)
* Timer 7
  ![image](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/667c4ff0-dd6f-4366-ab67-484e33c44f19)
##
 Connectivity
* SPI1
![image](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/128398c7-0d44-47c4-be6f-4c499d877957)
##
  Multimedia
* LCD
  For LCD we need include stm32l476g_discovery and stm32l476g_discovery_glass_lcd.h
  ![image](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/25b36acf-8f44-4f11-8826-5ab2fccdf44e)
  ##
Clock Configuration
![image](https://github.com/OlehKosminin/STM32_Accelerometer/assets/106763163/939d2587-263d-42d5-bae0-71f831f1df12)

