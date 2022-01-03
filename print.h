/*
 * print.h -- macro.h: Printing
 *  requires:
 *   stdio.h  (fprintf)
 *   stdlib.h (exit, EXIT_FAILURE)
 *  for the respective macros.
 * */

#ifndef TMACRO_H_PRINT
#define TMACRO_H_PRINT

#define tmacro_PP_THIRD_ARG(a, b, c, ...) c
#define tmacro_VA_OPT_SUPPORTED1(...) tmacro_PP_THIRD_ARG(__VA_OPT__(,),1,0,)
#define tmacro_VA_OPT_SUPPORTED tmacro_VA_OPT_SUPPORTED1(?)

#if tmacro_VA_OPT_SUPPORTED

#define printerr(s, ...) fprintf(stderr, s __VA_OPT__(,) __VA_ARGS__)
#define fprintfc(c, dst, s, ...) fprintf(dst, c s resetc __VA_OPT__(,) __VA_ARGS__)
#define error_and_exit(s, ...) do { printerr(s, __VA_ARGS__); exit(EXIT_FAILURE); } while(0)

#ifdef TMACRO_H_COLOR

#define printfatalf(s, ...) fprintfc(bredfg, stderr, s, __VA_ARGS__) 
#define printsuccessf(s, ...) fprintf(bgreenfg, stdout, s, __VA_ARGS__)
#define fprintboldf(dst, s, ...) fprintf(dst, boldc s resetc __VA_OPT__(,) __VA_ARGS__)
#define fprintunderlinef(dst, s, ...) fprintf(dst, underlinec s resetc __VA_OPT__(,) __VA_ARGS__) 

#endif /*TMACRO_H_COLOR*/

#else /*__VA_OPT__ not supported*/

#ifndef macroh_SILENCE_VA_OPT
#include "_tmacro_va_opt.h"
#warning tmacro_va_opt1
#warning tmacro_va_opt2
#endif

#error "[macro.h] TODO: Implement print.h for compilers without __VA_OPT__ support."

#endif /*#if __VA_OPT__ supported*/

#ifdef macroh_DEFINE_PRINT
#define print(s) fputs(s, stdout)
#endif

#endif /*TMACRO_H_PRINT*/
