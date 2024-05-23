#include <adxl.h>

//uint8_t data_rec[6]; // buffer for analog value

void adxl_write (SPI_HandleTypeDef *hspi,uint8_t address, uint8_t value)
{
	uint8_t data[2];
	data[0] = address|0x40;  // multibyte write
	data[1] = value;
	// GPIO_PIN_6 Pin need for enable adxl 345 module
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);  // pull the cs pin low
	HAL_SPI_Transmit  (hspi, data, 2, 100);  // write data to register
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_6, GPIO_PIN_SET);  // pull the cs pin high
}

void adxl_read (SPI_HandleTypeDef *hspi,uint8_t address,uint8_t *data)
{
	address |= 0x80;  // read operation
	address |= 0x40;  // multibyte read
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);  // pull the pin low
	HAL_SPI_Transmit (hspi, &address, 1, 100);  // send address
	HAL_SPI_Receive (hspi, data, 6, 100);  // receive 6 bytes data
	HAL_GPIO_WritePin (GPIOB, GPIO_PIN_6, GPIO_PIN_SET);  // pull the pin high
}

void adxl_init (SPI_HandleTypeDef *hspi)
{
	adxl_write (hspi,0x31, 0x01);  // data_format range= +- 4g
	adxl_write (hspi,0x2d, 0x00);  // reset all bits
	adxl_write (hspi,0x2d, 0x08);  // power_cntl measure and wake up 8hz
	adxl_write (hspi, 0x2C,0x0F);
}


