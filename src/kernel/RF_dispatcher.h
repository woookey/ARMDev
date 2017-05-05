/**
 * Dispatcher takes any published event, pushes it into its own queue
 * and dispenses the event to each and every agent that is subscribed
 * to that particular event
 *
 * Note: Dispatcher has to be created before the scheduler starts any agent
 */
#ifndef RF_DISPATCHER_H
#define RF_DISPATCHER_H

#include <RF_events.h>
#include <RF_agents.h>

/**
 * Constructs dispatcher with a fixed memory pool (at least now)
 */
void RF_DispatcherCtor(void);

/**
 * Posts event directly to the agent's queue
 *
 * Note: This should only be used to post an event to itself
 */
void postEventToAgent(RFAgent* self, RFEvent const * const evt);

/**
 * Subscribes an agent to the signal
 */
void subscribeAgentToSignal(RFAgent* self, uint32_t signalValue);

/**
 * Publishes an event
 */
void publishEvent(RFEvent const* const evt);

#endif
