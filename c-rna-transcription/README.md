# c-rna-transcription

This repository contains a solution for the RNA Transcription exercise from Exercism in C.
For more details, visit the [exercise page](https://exercism.org/tracks/c/exercises/rna-transcription).

## problem description

In this exercise, you need to create a function that takes a string representing a DNA sequence and returns a string representing the corresponding RNA sequence. The conversion rules are as follows:

- Replace `G` with `C`
- Replace `C` with `G`
- Replace `T` with `A`
- Replace `A` with `U`

### Example

For example, if the input DNA sequence is `GCTA`, the corresponding RNA sequence would be `CGAU`.

#

1. Build the project using `make`:
    ```
    make
    ```

2. Run the tests:
    ```
    ./test_rna.exe
    ```