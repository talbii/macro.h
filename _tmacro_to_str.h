#ifndef TMACROi_TO_STR_H
#define TMACROi_TO_STR_H
#define tmacro__token_to_string(x) #x
#define TO_STR(x) tmacro__token_to_string(x)
#endif
