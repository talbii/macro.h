/*
 * util.h -- macro.h: Utilities
 * */

#ifndef TMACRO_H_UTIL
#define TMACRO_H_UTIL

#define comment(...)
#define fptr(RETURN_VAL, ptr_name, ...) RETURN_VAL (*ptr_name)(__VA_ARGS__)
#include "_tmacro_to_str.h" 

#endif /*TMACRO_H_UTIL*/
