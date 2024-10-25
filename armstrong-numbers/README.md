# armstrong-numbers

This repository contains a solution for the Two Fer exercise from Exercism in C.
For more details, visit the [exercise page](https://exercism.org/tracks/c/exercises/armstrong-numbers/).

## problem description

An `Armstrong number` is a number that is the sum of its own digits each raised to the power of the number of digits.

For example:

9 is an Armstrong number, because 9 = 9^1 = 9
10 is not an Armstrong number, because 10 != 1^2 + 0^2 = 1
153 is an Armstrong number, because: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
154 is not an Armstrong number, because: 154 != 1^3 + 5^3 + 4^3 = 1 + 125 + 64 = 190
Write some code to determine whether a number is an Armstrong number.

##

## Concept of Exponentiation by Squaring

[Exponentiation by Squaring ](https://en.wikipedia.org/wiki/Exponentiation_by_squaring)

The goal of exponentiation by squaring is to raise a base to a power (base^exp) with fewer multiplications.


### Even and Exponents

When the exponent $n$ is **even**, we can express it as:

$a^n = a^{n/2} \cdot a^{n/2} = (a^{n/2})^2$

This reduces the problem size by half.

When the exponent $n$ is **odd**, we can express it as:

$a^n = a \cdot a^{n-1}$

Here, $n - 1$ is even, allowing us to use the even exponent rule on $a^{n-1}$


### Algorithm

```math
a^n = \begin{cases}
   1 &\text{if } n = 0 \\
   (a^{n/2})^2 &\text{if } n > 0\text{ and $n$ is even} \\
   a \cdot a^{n-1} &\text{if } n > 0\text{ and $n$ is odd} \\
\end{cases}
```

[TO-DO]
#

1. Build the project using `make`:

```cmd
    make
```

1. Run the tests:

```cmd

    .\test_ armstrong_numbers.exe

```
