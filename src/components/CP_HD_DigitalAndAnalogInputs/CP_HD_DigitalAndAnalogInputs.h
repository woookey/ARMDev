#ifndef CP_HD_DIGITAL_AND_ANALOG_INPUTS_H
#define CP_HD_DIGITAL_AND_ANALOG_INPUTS_H

typedef struct digitalAndAnalogInputStruct digitalAndAnalogInputStruct_t;
typedef digitalAndAnalogInputStruct_t *const CP_HD_DigitalAndAnalogInput;

extern CP_HD_DigitalAndAnalogInput CP_HD_DigitalAndAnalogInput_SafetySwitch;

void CP_HD_DigitalAndAnalogInputs_ReadInput(CP_HD_DigitalAndAnalogInput input);
void CP_HD_DigitalAndAnalogInputs_ConstructInput(CP_HD_DigitalAndAnalogInput input);
void CP_HD_DigitalAndAnalogInputs_PublishOutput(CP_HD_DigitalAndAnalogInput input);

#endif
