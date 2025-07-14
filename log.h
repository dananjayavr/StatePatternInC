#ifndef _LOG_H
#define _LOG_H

#include <stdio.h>
#include <stdint.h>

extern int timestamp;

// Logging function
static inline void log_info(const char *func, int line, const char *file, const char *msg) {
    const uint32_t ms = timestamp;
    fprintf(stdout, "[%lu ticks] INFO: %s:%d (%s): %s", (unsigned long)ms, func, line, file, msg);
}

// Extract just the filename from __FILE__
#define __FILENAME__ (__builtin_strrchr(__FILE__, '/') ? __builtin_strrchr(__FILE__, '/') + 1 : __FILE__)
#define LOG_INFO(msg) log_info(__func__, __LINE__, __FILENAME__, msg)

#endif