
#include "logger.h"

static int log[100]
static int log_cnt;

void log_event(int id)
{
	log[event_cnt] = id;
	log_cnt++;
}

