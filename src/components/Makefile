CUR_DIR = $(shell pwd)

build_components:
	make build_components_CP_HA_LED
	make build_components_CP_HD_LEDDriver
	make build_components_LEDManager
	make build_components_CP_HA_HardwareSetup
	make build_components_CP_BH_PowerManager
	make build_components_CP_HA_DigitalInput
	
build_components_CP_HA_DigitalInput:
	cd ${CUR_DIR}/CP_HA_DigitalInput; make CP_HA_DigitalInput.o CC=${CC}
	
build_components_CP_BH_PowerManager:
	cd ${CUR_DIR}/CP_BH_PowerManager; make CP_BH_PowerManager.o CC=${CC}
	
build_components_CP_HA_HardwareSetup:
	cd ${CUR_DIR}/CP_HA_HardwareSetup; make CP_HA_HardwareSetup.o CC=${CC}
	
build_components_CP_HA_LED:
	cd ${CUR_DIR}/CP_HA_LED; make CP_HA_LED.o CC=${CC}

build_components_CP_HD_LEDDriver:
	cd ${CUR_DIR}/CP_HD_LEDDriver; make CP_HD_LEDDriver.o CC=${CC}
	
build_components_LEDManager:
	cd ${CUR_DIR}/LEDManager; make LEDManager.o CC=${CC}
	
test_components:
	make test_components_LEDManager
	make test_components_CP_HD_LEDDriver
	
test_components_LEDManager:
	cd ${CUR_DIR}/LEDManager; make test
	
test_components_CP_HD_LEDDriver:
	cd ${CUR_DIR}/CP_HD_LEDDriver; make test

clean:
	cd $(CUR_DIR)/LEDManager; make clean
	cd ${CUR_DIR}/CP_HD_LEDDriver; make clean
	cd ${CUR_DIR}/CP_HA_LED; make clean
	cd ${CUR_DIR}/CP_HA_HardwareSetup; make clean
	cd ${CUR_DIR}/CP_BH_PowerManager; make clean
	cd ${CUR_DIR}/CP_HA_DigitalInput; make clean