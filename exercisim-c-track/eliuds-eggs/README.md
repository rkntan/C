# eliuds-eggs

This repository contains a solution for the Eliuds Eggs exercise from Exercism in C.
For more details, visit the [exercise page](https://exercism.org/tracks/c/exercises/eliuds-eggs/).

## problem description

The position information encoding is calculated as follows:

Scan the potential egg-laying spots and mark down a 1 for an existing egg or a 0 for an empty spot.
Convert the number from binary to decimal.
Show the result on the display.

### Example:
```
Chicken Coop:
 _ _ _ _ _ _ _
|E| |E|E| | |E|

Resulting Binary:
 1 0 1 1 0 0 1

Decimal number on the display:
89

Actual eggs in the coop:
4
```

Your task is to count the number of 1 bits in the binary representation of a number.



#

1. Build the project using `make`:
    ```
    make
    ```

2. Run the tests:
    ```
    .\test_eliuds_eggs.exe
    ```


