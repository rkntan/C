#ifndef TWO_FER_H
#define TWO_FER_H

typedef enum {
    PERFECT_NUMBER = 1,
    ABUNDANT_NUMBER = 2,
    DEFICIENT_NUMBER = 3,
    ERROR = -1
} kind;

kind classify_number(int number);

#endif
