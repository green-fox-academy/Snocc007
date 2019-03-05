#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void)
{
	HAL_Init();

	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	int count = 0;

	while (1) {
		if (BSP_PB_GetState(BUTTON_KEY) && count < 5) {
			count++;
			HAL_Delay(500);
		} else if (BSP_PB_GetState(BUTTON_KEY)) {
			BSP_LED_On(LED1);
		}
	}
}
