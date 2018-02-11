#include <CP_HA_LED.h>
#include <LEDType.h>

struct LEDType CPUActivityLEDInstance =
{
		.GPIOTypeDef_t = {GPIOD},
		.GPIOInitTypeDef_t =
		{
				.Pin = GPIO_PIN_12,
				.Mode = GPIO_MODE_OUTPUT_PP,
				.Pull = GPIO_PULLUP,
				.Speed = GPIO_SPEED_FREQ_VERY_HIGH,
		},
};

struct LEDType powerOnIndicationLEDInstance =
{
		.GPIOTypeDef_t = {GPIOD},
		.GPIOInitTypeDef_t =
		{
				.Pin = GPIO_PIN_13,
				.Mode = GPIO_MODE_OUTPUT_PP,
				.Pull = GPIO_PULLUP,
				.Speed = GPIO_SPEED_FREQ_VERY_HIGH,
		},
};

struct LEDType executingIndicationLEDInstance =
{
		.GPIOTypeDef_t = {GPIOC},
		.GPIOInitTypeDef_t =
		{
				.Pin = GPIO_PIN_1,
				.Mode = GPIO_MODE_OUTPUT_PP,
				.Pull = GPIO_PULLUP,
				.Speed = GPIO_SPEED_FREQ_VERY_HIGH,
		},
};

struct LEDType safetyStopIndicationLEDInstance =
{
		.GPIOTypeDef_t = {GPIOC},
		.GPIOInitTypeDef_t =
		{
				.Pin = GPIO_PIN_2,
				.Mode = GPIO_MODE_OUTPUT_PP,
				.Pull = GPIO_PULLUP,
				.Speed = GPIO_SPEED_FREQ_VERY_HIGH,
		},
};

CP_HA_LEDStruct CPUActivityLED = &CPUActivityLEDInstance;
CP_HA_LEDStruct powerOnIndicationLED = &powerOnIndicationLEDInstance;
CP_HA_LEDStruct executingIndicationLED = &executingIndicationLEDInstance;
CP_HA_LEDStruct safetyStopIndicationLED = &safetyStopIndicationLEDInstance;

void CP_HA_LEDConstruct(CP_HA_LEDStruct LEDInstance)
{

	GPIOD->MODER |= (1 << (12 << 1));
	GPIOD->OSPEEDR |= (3 << (12 << 1));
	/*HAL_GPIO_Init(&LEDInstance->GPIOTypeDef_t, &LEDInstance->GPIOInitTypeDef_t);*/
}

void CP_HA_LEDSwitchOn(CP_HA_LEDStruct LEDInstance)
{
	GPIOD->BSRR |= (1 << 12);
	/*HAL_GPIO_WritePin(&LEDInstance->GPIOTypeDef_t,
			LEDInstance->GPIOInitTypeDef_t.Pin, GPIO_PIN_SET);*/
}

void CP_HA_LEDSwitchOff(CP_HA_LEDStruct LEDInstance)
{
	GPIOD->BSRR |= (1 << (12+(uint16_t)16));
	/*HAL_GPIO_WritePin(&LEDInstance->GPIOTypeDef_t,
				LEDInstance->GPIOInitTypeDef_t.Pin, GPIO_PIN_RESET);*/
}

