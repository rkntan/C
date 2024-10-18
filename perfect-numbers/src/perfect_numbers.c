#include "perfect_numbers.h"
#include <math.h>

kind classify_number(int number) {

    if (number <= 0) {
        return ERROR;
    }

    int aliquot_sum = 0;

    for (int divisor = 1; divisor < sqrt(number); divisor++) {
        if ((number % divisor) == 0) {
            aliquot_sum += divisor; // Add the divisor
            /* The divisors d and n/d are called complementary divisors of n.
            For example, 2 and 5 are a pair of complementary divisors of 10. */
            if (divisor != 1 && divisor != number / divisor) {
                // ensures we don’t add the same divisor twice when i is the square root of number
                aliquot_sum += number / divisor; // Add the complementary divisor
            }
        }
    }
    //

    if (aliquot_sum > number) {
        return ABUNDANT_NUMBER;
    } else if (aliquot_sum < number) {
        return DEFICIENT_NUMBER;
    } else {
        return PERFECT_NUMBER;
    }

    // return aliquot_sum > number ? ABUNDANT_NUMBER : aliquot_sum < number ? DEFICIENT_NUMBER : PERFECT_NUMBER;
}