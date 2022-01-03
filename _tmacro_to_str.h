#ifndef TMACROi_H_TO_STR /*i: internal; include "utils.h" instead*/
#define TMACROi_H_TO_STR
#define tmacro__token_to_string(x) #x
#define TO_STR(x) tmacro__token_to_string(x)
#endif /*TMACROi_H_TO_STR*/
