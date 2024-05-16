#include "main.h"

void adxl_write (SPI_HandleTypeDef *hspi,uint8_t address, uint8_t value);

void adxl_read (SPI_HandleTypeDef *hspi,uint8_t address,uint8_t *data);

void adxl_init (SPI_HandleTypeDef *hspi);
