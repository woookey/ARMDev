#include <testing_utils.h>
#include <stdlib.h>
#include <time.h>


void initiateTestingUtilities(void)
{
	srand(time(0));
}

/**
 * Generates a randomised uint8_t value
 */
uint8_t testingUtils_GetRandomUint8(void)
{
	return (uint8_t)((uint8_t)rand() % UINT8_MAX);
}
