CUR_DIR = $(shell pwd)
CFLAGS = -Wall -g -c -I.
CPU_CONFIG = --specs=nosys.specs -mthumb -mcpu=cortex-m4

ifeq (${CC}, arm-none-eabi-gcc)
	INC_DIR = -I${CUR_DIR}/target
	INC_DIR += -I${CUR_DIR}/../../lib/STM32F4xx_HAL_Driver/Inc
	INC_DIR += -I${CUR_DIR}/../../lib/CMSIS/Device/ST/STM32F4xx/Include
	INC_DIR += -I${CUR_DIR}/../../lib/CMSIS/Include
	CFLAGS += -DSTM32F407xx
	CFLAGS += ${CPU_CONFIG}
	OBJS = ${CUR_DIR}/target/CP_HA_LED.c
else
	INC_DIR = -I${CUR_DIR}/synthetic
	OBJS = ${CUR_DIR}/synthetic/CP_HA_LED.c
endif

CP_HA_LED.o: ${OBJS} 
	${CC} ${CFLAGS} ${INC_DIR} ${OBJS} -o CP_HA_LED.o
	
${HAL_DRIVER_SRC}/stm32f4xx_hal_gpio.o:
	${CC} ${CFLAGS} ${INC_DIR} ${HAL_DRIVER_SRC}/stm32f4xx_hal_gpio.c -o stm32f4xx_hal_gpio.o
clean:
	rm -rf *.o *.~ 
	cd mock; rm -rf *.o *.~