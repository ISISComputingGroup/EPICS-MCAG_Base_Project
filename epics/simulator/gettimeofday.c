#include <winsock2.h>
#include <sys/timeb.h>
#include "gettimeofday.h"

int gettimeofday(struct timeval* tv, struct timezone *tz)
{
    struct timeb tb;
    ftime(&tb);
    tv->tv_sec = tb.time;
    tv->tv_usec = tb.millitm * 1000;
    return 0;
}
    


