#include "main.h"
#include "common/common.h"

extern LogLevel LOG_EVEL;

int main(void)
{
    LOG_EVEL = LogLevel::warn;
    LOG_INFO("hahah%d", 1);
    return 0;
}