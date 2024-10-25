#include "hamming.h"
#include <stdlib.h>
#include <string.h>

int compute(const char *lhs, const char *rhs){
    if (lhs == NULL || rhs == NULL) return -1; 
    
    int hamming_distance = 0;    
    if(strlen(lhs) == strlen(rhs)){
        size_t i = 0;
        while(lhs[i] != '\0'){
            if(lhs[i] != rhs[i])
                hamming_distance++;
            i++;
        }
        return hamming_distance;
    }

    return -1;
    
}