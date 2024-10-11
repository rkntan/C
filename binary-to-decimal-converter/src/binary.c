#include "binary.h"
#include <stdlib.h>
#include <string.h>

int convert(const char *input){
    if(input == NULL || input[0] == '\0'){
        return INVALID;
    }
    size_t len = strlen(input);
    int exp = 0;
    int sum = 0;
    for(; len > 0; len--){
        if(input[len - 1] == '1'){
            sum += (1 << exp);
        }else if(input[len - 1] != '0'){
            return INVALID;
        }
        exp++;
    }
    return sum;
}