#include "StoppedState.h"
#include "StartedState.h"
#include "log.h"

static void startWatch(WatchStatePtr state)
{
	transitionToStarted(state);
}

void transitionToStopped(WatchStatePtr state)
{
	/* initialize with the default implementation
	before specifying the events to be handles in the 
	stopped state */
	defaultImplementation(state);
	state->start = startWatch;
	state->name = "stopped";
	LOG_INFO("Transitioning to stopped\n");
}
