/*
 * color.h -- macro.h: ANSI Color Codes
 *
 * */

#ifndef TMACRO_H_COLOR
#define TMACRO_H_COLOR

#define resetc "\033[0m"
#define boldc "\033[1m"
#define faintc "\033[2m"
#define italicc "\033[3m"
#define underlinec "\033[4m"

#define reversecolorsc "\033[7m"

#define blackfg "\033[30m"
#define blackbg "\033[40m"

#define redfg "\033[31m"
#define redbg "\033[41m"

#define greenfg "\033[32m"
#define greenbg "\033[42m"

#define yellowfg "\033[33m"
#define yellowbg "\033[43m"

#define bluefg "\033[34m"
#define bluebg "\033[44m"

#define magentafg "\033[35m"
#define magentabg "\033[45m"

#define cyanfg "\033[36m"
#define cyanbg "\033[46m"

#define whitefg "\033[37m"
#define whitebg "\033[47m"

#define bblackfg "\033[90m"
#define bblackbg "\033[100m"
#define grayfg bblackfg
#define greyfg bblackfg
#define graybg bblackbg
#define greybg bblack

#define bredfg "\033[91m"
#define bredbg "\033[101m"

#define bgreenfg "\033[92m"
#define bgreenbg "\033[102m"

#define byellowfg "\033[93m"
#define byellowbg "\033[103m"

#define bbluefg "\033[94m"
#define bbluebg "\033[104m"

#define bmagentafg "\033[95m"
#define bmagentabg "\033[105m"

#define bcyanfg "\033[96m"
#define bcyanbg "\033[106m"

#define bwhitefg "\033[97m"
#define bwhitebg "\033[107m"

#include "_tmacro_to_str.h"
#define rgbansifg(r, g, b) "\033[38;2;" TO_STR(r) ";" TO_STR(g) ";" TO_STR(b) "m"
#define rgbansibg(r, g, b) "\033[48;2;" TO_STR(r) ";" TO_STR(g) ";" TO_STR(b) "m"

#endif /*TMACRO_H_COLOR*/
