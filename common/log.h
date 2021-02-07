#ifndef __LOG_H_
#define __LOG_H_
#include "stdio.h"
#include "stdlib.h"

enum class LogLevel : uint8_t {
    debug = 0,
    info,
    warn,
    error,
    event,
    null
};

static LogLevel LOG_EVEL = LogLevel::error;

#define LOG_COMMON(format, ...) do {    \
    printf(format, ##__VA_ARGS__);      \
} while (false);                        \

#define LOG_DBG(format, ...) do {                                                                   \
    if (LOG_EVEL <= LogLevel::debug) {                                                              \
        LOG_COMMON("[DEBUG] [%s: %d][Tid: %d] " format "\n", __FILE__, __LINE__, ##__VA_ARGS__);    \
    }                                                                                               \
} while (false);                                                                                    \

#define LOG_INFO(format, ...) do {                                                                  \
    if (LOG_EVEL <= LogLevel::info) {                                                               \
        LOG_COMMON("[INFO] [%s: %d][Tid: %d] " format "\n", __FILE__, __LINE__, ##__VA_ARGS__);     \
    }                                                                                               \
} while (false);                                                                                    \

#define LOG_WARN(format, ...) do {                                                                  \
    if (LOG_EVEL <= LogLevel::warn) {                                                               \
        LOG_COMMON("[WARN] [%s: %d][Tid: %d] " format "\n", __FILE__, __LINE__, ##__VA_ARGS__);     \
    }                                                                                               \
} while (false);                                                                                    \

#define LOG_ERR(format, ...) do {                                                                   \
    if (LOG_EVEL <= LogLevel::error) {                                                              \
        LOG_COMMON("[ERROR] [%s: %d][Tid: %d] " format "\n", __FILE__, __LINE__, ##__VA_ARGS__);    \
    }                                                                                               \
} while (false);                                                                                    \

#define LOG_EVENT(format, ...) do {                                                                 \
    if (LOG_EVEL <= LogLevel::event) {                                                              \
        LOG_COMMON("[EVENT] [%s: %d][Tid: %d] " format "\n", __FILE__, __LINE__, ##__VA_ARGS__);    \
    }                                                                                               \
} while (false);                                                                                    \

#endif
