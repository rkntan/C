#include "armstrong_numbers.h"
// #include <math.h>

// Exponentiation by squaring

int int_pow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

bool is_armstrong_number(int candidate) {
    int number = candidate;
    int digit_count = 0;

    while (number > 0) {
        number /= 10;
        digit_count++;
    }

    int sum_of_powers = 0;
    number = candidate;

    while (number > 0) {

        int digit = number % 10;
        number /= 10;

        // manual calculation
        // int power = 1;
        // for (int i = 0; i < digit_count; i++) {
        //     power *= digit;
        // }
        // sum_of_powers += power;

        sum_of_powers += int_pow(digit, digit_count); // with my int_pow function

        // sum_of_powers += pow(digit, digit_count); // with using math lib.
    }

    return candidate == sum_of_powers;
}
