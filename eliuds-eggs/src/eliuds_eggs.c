#include "eliuds_eggs.h"

int egg_count(int eggs){
    int egg_sum = 0;

    while(eggs > 0){
        egg_sum += (eggs % 2);
        eggs /= 2;
    }

    return egg_sum;
}

int egg_count_builtin(int eggs){

    return __builtin_popcount(eggs);
    /*
    Built-in Function: int __builtin_popcount (unsigned int x)
            Returns the number of 1-bits in x.
    */
}

int egg_count_bitwise(int eggs) {
    int bits = 0;  // To store the count of '1's in the binary representation

    while (eggs > 0) {
        bits += eggs & 0x01;  // Add 1 if the least significant bit is 1
        eggs >>= 1;  // Right shift to check the next bit
    }

    return bits;  // Return the total count of '1's
}