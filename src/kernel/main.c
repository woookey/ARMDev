#include <stdio.h>
#include <RF_agents.h>
#include <RF_scheduler.h>
#include <LEDManager.h>
#include <RF_dispatcher.h>

static void runRFKernel(void);

int main()
{
	RFEvent LEDManagerMemoryPool[20];
	printf("Starting ARM program...\n");
	/**
	 * Creating Agents
	 */
	RF_DispatcherCtor();
	startAgent(HW_RF_LEDManager, HW_RF_LEDManagerConstructor, AGENT_PRIORITY_0, &LEDManagerMemoryPool[0], 20*sizeof(RFEvent));
	/**
	 * TODO
	 * Posting first event to agent has to be fixed!
	 */
	runRFKernel();
	return 0;
}

void runRFKernel(void)
{
	printf("Starting Robot Framework kernel...\n");
	runScheduler();
}
