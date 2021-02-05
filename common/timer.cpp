#include "timer.h"
#include "time.h"
namespace common {

void Timer::Start()
{
    struct tm *ptr;
    time_t lt;
    char str[80];
    lt=time(NULL);
    ptr=localtime(NULL);
    strftime(str,100,"It is now %I %p",ptr);
}

void Timer::Stop()
{

}

void Timer::Erase()
{

}
}