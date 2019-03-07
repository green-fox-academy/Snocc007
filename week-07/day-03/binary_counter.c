#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

/* create a config structure */
GPIO_InitTypeDef LEDS;

int main(void)
{
	HAL_Init();

	/* we need to enable the GPIOA port's clock first */
	__HAL_RCC_GPIOF_CLK_ENABLE()
	;

	LEDS.Pin = GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10; /* setting up 2 pins at once with | operator */
	LEDS.Mode = GPIO_MODE_OUTPUT_PP; /* configure as output, in push-pull mode */
	LEDS.Pull = GPIO_NOPULL; /* we don't need internal pull-up or -down resistor */
	LEDS.Speed = GPIO_SPEED_HIGH; /* we need a high-speed output */

	HAL_GPIO_Init(GPIOF, &LEDS); /* initialize the pin on GPIOF port */

	uint16_t pins[4] = { GPIO_PIN_7, GPIO_PIN_8, GPIO_PIN_9, GPIO_PIN_10 };

	while (1) {

		int status[4] = { 0, 0, 0, 0 };
		for (int i = 0; i < 16; i++) {
			int result = i;
			int remainer;
			for (int j = 0; j < 4; j++) {
				remainer = result % 2;
				status[3 - j] = remainer;
				result = result / 2;
			}
			for (int j = 0; j < 4; j++) {
				HAL_GPIO_WritePin(GPIOF, pins[j], status[j]);	/* setting the 4 pins to 0 or 1 */

			}
			HAL_Delay(1000);									/* wait a second */
		}
	}


}
