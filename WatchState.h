#ifndef _WATCHSTATE_H
#define _WATCHSTATE_H

typedef struct WatchState *WatchStatePtr;

typedef void (*EventStartFunc)(WatchStatePtr);
typedef void (*EventStopFunc)(WatchStatePtr);

struct WatchState {
	EventStartFunc start;
	EventStopFunc stop;
	const char *name;
};

void defaultImplementation(WatchStatePtr state);

#endif