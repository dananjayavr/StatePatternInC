#ifndef _DIGITALSTOPWATCH_H
#define _DIGITALSTOPWATCH_H

#include "WatchState.h"

typedef struct DigitalStopWatch *DigitalStopWatchPtr;

typedef enum 
{
	stopped = 0,
	started
} State;

typedef enum 
{
	stopEvent = 0,
	startEvent
} Event;

struct DigitalStopWatch {
	//State state;
	struct WatchState state;
};

#define NO_OF_STATES 2
#define NO_OF_EVENTS 2

void startWatch(DigitalStopWatchPtr instance);
void stopWatch(DigitalStopWatchPtr instance);

#endif