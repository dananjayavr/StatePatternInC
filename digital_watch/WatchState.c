#include <stdio.h>
#include "WatchState.h"

static void defaultStop(WatchStatePtr state)
{
	/* we'll get here if the stop event isn't supported
	in the concrete state. */
	printf("Stop event: %s\n", state->name);
}

static void defaultStart(WatchStatePtr state)
{
	/* we'll get here if the start event isn't supported
	in the concrete state. */
	printf("Start event: %s\n", state->name);
}

void defaultImplementation(WatchStatePtr state)
{
	state->start = defaultStart;
	state->stop = defaultStop;
}