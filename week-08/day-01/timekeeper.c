#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

#define UART_PUTCHAR int __io_putchar(int ch)

UART_HandleTypeDef UartHandle;

/* the timer's config structure */
TIM_HandleTypeDef TimHandle;

uint16_t tim_val = 0; /* variable to store the actual value of the timer's register (CNT) */
uint16_t seconds = 0; /* variable to store the value of ellapsed seconds */

static void Error_Handler(void);
static void SystemClock_Config(void);

int main(void)
{
	HAL_Init();

	SystemClock_Config();

	__HAL_RCC_USART1_CLK_ENABLE()
	;
	UartHandle.Instance = USART1;
	UartHandle.Init.BaudRate = 115200;
	UartHandle.Init.WordLength = UART_WORDLENGTH_8B;
	UartHandle.Init.StopBits = UART_STOPBITS_1;
	UartHandle.Init.Parity = UART_PARITY_NONE;
	UartHandle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	UartHandle.Init.Mode = UART_MODE_TX_RX;
	BSP_COM_Init(COM1, &UartHandle);
	BSP_LED_Init(LED_GREEN);

	/* we need to enable the TIM2 */
	__HAL_RCC_TIM2_CLK_ENABLE()
	;

	printf("Set the timer in this format: wx.yz\r\n");
	uint8_t time_as_string[5];
	HAL_UART_Receive(&UartHandle, (uint8_t*) time_as_string, 5, 0xFFFF);
	float time = 10000 * (time_as_string[0] - '0')
			+ 1000 * (time_as_string[1] - '0') + 100 * (time_as_string[3] - '0')
			+ 10 * (time_as_string[4] - '0');

	//	HAL_UART_Transmit(&UartHandle, )

	TimHandle.Instance = TIM2;

	TimHandle.Init.Prescaler = 54000 - 1; /* 108000000/54000 = 10000 -> speed of 1 count-up: 1/2000 sec = 0.5 ms */
	TimHandle.Init.Period = time * 2 - 1; /* time x 0.5 ms = time */
	TimHandle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	TimHandle.Init.CounterMode = TIM_COUNTERMODE_DOWN;

	/* configure the timer */
	HAL_TIM_Base_Init(&TimHandle);

	/* starting the timer */
	HAL_TIM_Base_Start(&TimHandle);

	while (1) {

		if (__HAL_TIM_GET_COUNTER(&TimHandle) == 0) {
			printf("%.2f seconds elapsed.\n", time / 1000);
			HAL_NVIC_SystemReset();
		}

	}
}

static void Error_Handler(void)
{
}

static void SystemClock_Config(void)
{
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

	/**Configure the main internal regulator output voltage */
	__HAL_RCC_PWR_CLK_ENABLE()
	;
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
	RCC_OscInitStruct.PLL.PLLM = 8;
	RCC_OscInitStruct.PLL.PLLN = 216;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 2;

	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/**Activate the Over-Drive mode */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}

UART_PUTCHAR
{
	HAL_UART_Transmit(&UartHandle, (uint8_t*) &ch, 1, 0xFFFF);
	return ch;
}
