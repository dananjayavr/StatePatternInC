#include "StartedState.h"
#include "StoppedState.h"

static void stopWatch(WatchStatePtr state)
{
	transitionToStopped(state);
}

void transitionToStarted(WatchStatePtr state)
{
	/* initialize with the default implementation
	before specifying the events to be handles in the 
	started state */
	defaultImplementation(state);
	state->stop = stopWatch;
	state->name = "started";
}