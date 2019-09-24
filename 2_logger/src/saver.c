
#include "saver.h"

static int events[100]
static int event_cnt;

void save_event(int id)
{
	events[event_cnt] = id;
	event_cnt++;
}
