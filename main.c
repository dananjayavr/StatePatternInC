#include <unistd.h>
#include "DigitalStopWatch.h"
#include "StartedState.h"

int timestamp = 0;

int main(int argc, char const *argv[])
{
	struct DigitalStopWatch watch = {0};
	//Initial state
	transitionToStopped(&watch.state);

	while(1) {
		startWatch(&watch);
		timestamp++;
		if(timestamp % 5 == 0) {
			stopWatch(&watch);
		}
		sleep(1);

		if (timestamp == 50)
			break;
	}

	return 0;
}