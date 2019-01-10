#ifndef __cowslibc___struct_rusage_h
#define __cowslibc___struct_rusage_h

#include "__struct_timeval.h"

struct rusage {
    struct timeval ru_utime;
    struct timeval ru_stime;
};

#endif