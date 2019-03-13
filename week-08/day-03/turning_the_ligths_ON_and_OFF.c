#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

/* create the configuration structs */
GPIO_InitTypeDef user_button_handle;
GPIO_InitTypeDef led;

#define USING_ODR

#define UART_PUTCHAR int __io_putchar(int ch)
volatile int counter = 1;
volatile uint32_t timing_control;
void init_led()
{
	__HAL_RCC_GPIOA_CLK_ENABLE()
	;

	led.Pin = GPIO_PIN_15; /* setting up 2 pins at once with | operator */
	led.Mode = GPIO_MODE_OUTPUT_PP; /* configure as output, in push-pull mode */
	led.Pull = GPIO_NOPULL; /* we don't need internal pull-up or -down resistor */
	led.Speed = GPIO_SPEED_HIGH; /* we need a high-speed output */

	HAL_GPIO_Init(GPIOA, &led);

}
void init_user_button(void)
{
	__HAL_RCC_GPIOF_CLK_ENABLE()
	;
	/* enable the GPIOI clock */

	user_button_handle.Pin = GPIO_PIN_10; /* the pin is the 11 */
	/* We know from the board's datasheet that a resistor is already installed externally for this button
	 (so it's not floating), we don't want to use the internal pull feature */
	user_button_handle.Pull = GPIO_NOPULL;
	user_button_handle.Speed = GPIO_SPEED_FAST; /* port speed to fast */
	/* Here is the trick: our mode is interrupt on rising edge */
	user_button_handle.Mode = GPIO_MODE_IT_RISING;

	HAL_GPIO_Init(GPIOF, &user_button_handle);

	/* we don't need to explicitly call the HAL_NVIC_SetPriorityGrouping function,
	 * because the grouping defaults to NVIC_PRIORITYGROUP_2:
	 * HAL_NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_2);
	 */

	/* assign the intermediate priority to our interrupt line */
	HAL_NVIC_SetPriority(EXTI15_10_IRQn, 2, 0);

	/* tell the interrupt handling unit to process our interrupts */
	HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}
int main(void)
{
	HAL_Init();
	/* GPIOA Periph clock enable */

	BSP_LED_Init(LED_GREEN);

	init_user_button();

	init_led();

	timing_control = HAL_GetTick();

	while (1) {
		if (counter % 6 == 0) {
			GPIOA->ODR ^= (1 << 15);
			counter = 1;
		}
	}
}

void EXTI15_10_IRQHandler(void)
{
	HAL_GPIO_EXTI_IRQHandler(user_button_handle.Pin);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	/* yeey! this is the interrupt routine! */
	if (GPIO_Pin == user_button_handle.Pin
			&& HAL_GetTick() - timing_control > 200) {

		counter++;

		timing_control = HAL_GetTick();
	}
}
