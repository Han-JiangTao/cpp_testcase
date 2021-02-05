#ifndef __TIMER_H__
#define __TIMER_H__
#include "common.h"
namespace common {
class Timer{
public:
    Timer(std::string description="") : description_(description) {}
    void Start();
    void Stop();
    void Erase();
private:
    std::string description_;
    uint64_t beginTime_;
    uint64_t endTime_;
};
}
#endif