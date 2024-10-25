# resistor-color-trio

This repository contains a solution for the Two Fer exercise from Exercism in C.
For more details, visit the [exercise page](https://exercism.org/tracks/c/exercises/resistor-color-trio/).

## problem description

Each resistor has a resistance value.

Resistors are small - so small in fact that if you printed the resistance value on them, it would be hard to read. To get around this problem, manufacturers print color-coded bands onto the resistors to denote their resistance values.

Each band acts as a digit of a number. For example, if they printed a brown band (value 1) followed by a green band (value 5), it would translate to the number 15. In this exercise, you are going to create a helpful program so that you don't have to remember the values of the bands. The program will take 3 colors as input, and outputs the correct value, in ohms

| color | value |
|:-------:|:------:|
|black| 0 |
|brown| 1 |
|red| 2 |
|orange| 3 |
|yellow| 4 |
|green| 5 |
|blue| 6 |
|violet| 7 |
|grey| 8 |
|white| 9 |

## Instructions

In Resistor Color Duo you decoded the first two colors. For instance: orange-orange got the main value 33. The third color stands for how many zeros need to be added to the main value. The main value plus the zeros gives us a value in ohms. For the exercise it doesn't matter what ohms really are. For example:

orange-orange-black would be 33 and no zeros, which becomes 33 ohms.
orange-orange-red would be 33 and 2 zeros, which becomes 3300 ohms.
orange-orange-orange would be 33 and 3 zeros, which becomes 33000 ohms.

This exercise is about translating the colors into a label:

"... ohms"

So an input of "orange", "orange", "black" should return:

"33 ohms"

When we get to larger resistors, a metric prefix is used to indicate a larger magnitude of ohms, such as "kiloohms". That is similar to saying "2 kilometers" instead of "2000 meters", or "2 kilograms" for "2000 grams".

For example, an input of "orange", "orange", "orange" should return:

"33 kiloohms"

##

1. Build the project using `make`:

```cmd
    make
```

1. Run the tests:

```cmd

    .\test_resistor_color_trio.exe

```
