#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
/*
 * Frequency play

 Exercise

 Flash the user LED with gradually increasing frequency.
 Start from 0.5 Hz and constantly make it 1 Hz,
 then 2 Hz finally 4 Hz, then it should constantly decrease the frequency
 from 4 Hz back to 0.5 Hz. (increase/decrease the frequency,
 when 3 period - on and off - comes to an end)
 */

int main(void)
{
	HAL_Init();

	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	int Hz = 2000;

	while (1) {
		for (int i = 0; i < 4; i++) {
			BSP_LED_On(LED1);
			HAL_Delay(Hz);
			BSP_LED_Off(LED1);
			HAL_Delay(Hz);
			Hz = Hz / 2;
		}
		for (int i = 0; i < 4; i++) {
			BSP_LED_On(LED1);
			HAL_Delay(Hz);
			BSP_LED_Off(LED1);
			HAL_Delay(Hz);
			Hz = Hz * 2;
		}
	}
}
