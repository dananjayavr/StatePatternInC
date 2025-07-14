#include <stdio.h>
#include <unistd.h>
#include "DigitalStopWatch.h"
#include "WatchState.h"
#include "StoppedState.h"
#include "StartedState.h"

int main(int argc, char const *argv[])
{
	int timestamp = 0;
	struct DigitalStopWatch watch = {0};
	
	//Initialization
	//watch.state = stopped;
	transitionToStopped(&watch.state);


	while(1) {
		startWatch(&watch);
		timestamp++;
		if(timestamp == 5) {
			stopWatch(&watch);
			timestamp = 0;
		}
		sleep(1);
	}
	return 0;
}