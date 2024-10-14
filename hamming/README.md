# hamming-distance

This repository contains a solution for the Hamming Distance exercise from Exercism in C.
For more details, visit the [exercise page](https://exercism.org/tracks/c/exercises/hamming).

## problem description

![the hamming distance](https://rosalind.info/media/problems/hamm/Hamming_distance.png "The Hamming distance between these two strings is 7. Mismatched symbols are colored red.")

Figure 1. The Hamming distance between these two strings is 7. Mismatched symbols are colored red.

**Definition:**  
Given two strings `s` and `t` of equal length, the Hamming distance between `s` and `t`, denoted as `dH(s,t)`, is the number of corresponding symbols that differ between `s` and `t`. 

### Example:
Refer to Figure 1 for visual representation (if available).

### Given:
Two DNA strings `s` and `t` of equal length (not exceeding 1 kbp).

### Return:
The Hamming distance `dH(s,t)` between the two strings.

**Sample Dataset**:

`GAGCCTACTAACGGGAT`

`CATCGTAATGACGGCCT`

**Sample Output** :
`7`

#

1. Build the project using `make`:
    ```
    make
    ```

2. Run the tests:
    ```
    .\test_binary.exe
    ```


#

*[Evolution as a Sequence of Mistakes - rosalind.info](https://rosalind.info/problems/hamm/)