#include <stdio.h>
#include "DigitalStopWatch.h"

#include <string.h>

#if 0
/*
    If the watch is stopped, a stopEvent keeps it stopped, startEvent makes it started.
    If the watch is started, a stopEvent makes it stopped, startEvent keeps it started.
*/
static State TransitionTable[NO_OF_STATES][NO_OF_EVENTS] =
{
    // stopEvent = 0, startEvent = 1	
	{stopped,started}, // from STOPPED
	{stopped,started}, // from STARTED
};

void startWatch(DigitalStopWatchPtr instance) {
	const State currentState = instance->state;
	if (currentState == stopped) {
		printf("Starting stop watch...\n");
		instance->state = TransitionTable[currentState][startEvent];
		printf("Current State: %s\n", instance->state == 0 ? "STOPPED" : "STARTED");
	}
}

void stopWatch(DigitalStopWatchPtr instance) {
	const State currentState = instance->state;
	if(currentState == started) {
		printf("Stopping stop watch...\n");
		instance->state = TransitionTable[currentState][stopEvent];
		printf("Current State: %s\n", instance->state  == 0 ? "STOPPED" : "STARTED");
	}
}
#else

void startWatch(DigitalStopWatchPtr instance) {
	if (strcmp(instance->state.name,"started") != 0) {
		instance->state.start(&instance->state);
	}
}

void stopWatch(DigitalStopWatchPtr instance) {
	if (strcmp(instance->state.name,"stopped") != 0) {
		instance->state.stop(&instance->state);
	}
}

#endif