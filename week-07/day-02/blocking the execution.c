#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void)
{
	HAL_Init();

	BSP_LED_Init(LED1);

	while (!BSP_PB_GetState(BUTTON_KEY));   //This "while" blocks the code below from execution
											//until the button is pressed
		while (1) {
			BSP_LED_On(LED1);
			HAL_Delay(250);
			BSP_LED_Off(LED1);
			HAL_Delay(250);
		}

}
