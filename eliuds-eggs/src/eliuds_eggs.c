#include "eliuds_eggs.h"

int egg_count(int eggs){
    if(eggs == 0)
        return 0;

    int binary[32];
    int egg_sum = 0;
    for(int i = 0; eggs > 0; eggs /=2){
        binary[i] = eggs % 2;
        if(binary[i] == 1) {egg_sum++; }
        i++;
    }

    return egg_sum;
}
