# perfect-numbers

This repository contains a solution for the Perfect Numbers exercise from Exercism in C.
For more details, visit the [exercise page](https://exercism.org/tracks/c/exercises/perfect-numbers).

## problem description

Determine if a number is perfect, abundant, or deficient based on Nicomachus' (60 - 120 CE) classification scheme for positive integers.

The Greek mathematician Nicomachus devised a classification scheme for positive integers, identifying each as belonging uniquely to the categories of perfect, abundant, or deficient based on their aliquot sum. 

The aliquot sum is defined as the sum of the factors of a number not including the number itself. 
For example, the aliquot sum of 15 is (1 + 3 + 5) = 9



### Example:


- Perfect: aliquot sum = number
    - 6 is a perfect number because (1 + 2 + 3) = 6
    - 28 is a perfect number because (1 + 2 + 4 + 7 + 14) = 28
- Abundant: aliquot sum > number
    - 12 is an abundant number because (1 + 2 + 3 + 4 + 6) = 16
    - 24 is an abundant number because (1 + 2 + 3 + 4 + 6 + 8 + 12) = 36
- Deficient: aliquot sum < number
    - 8 is a deficient number because (1 + 2 + 4) = 7
    - Prime numbers are deficient

Implement a way to determine whether a given number is perfect. Depending on your language track, you may also need to implement a way to determine whether a given number is abundant or deficient.

#
1. Square Root Calculation:
We loop from `1` to `sqrt(number)` instead of `1` to `number-1`. This reduces the number of iterations, especially for large numbers.

1. Complementary Divisor:
For each `divisor`, if the `divisor` is not equal to 1 and `divisor` is not the square root of number, we also add `number / divisor` to the sum. This captures both divisors at once.

1. Avoid Redundant Checks:
The check `if (divisor != 1 && divisor != number / divisor)` ensures we don’t add the same divisor twice when the `divisor` is the square root of number.

#### Performance Consideration
This optimization significantly improves the performance of the function, especially for larger inputs. Instead of linear time complexity $O(n)$, it reduces it to $O(\sqrt{n})$, making it much more efficient for large numbers.


#

1. Build the project using `make`:
    ```
    make
    ```

2. Run the tests:
    ```
    .\test_perfect_numbers.exe
    ```


