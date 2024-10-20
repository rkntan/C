#include "pangram.h"
#include <stdio.h>
#include <stdint.h>

#define PANGRAM_FLAGS 0x3FFFFFF

bool is_pangram(const char *sentence)
{
    if (sentence == NULL || sentence[0] == '\0')
    {
        return false;
    }
    uint32_t flags = 0; // Initialize the flags variable

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            flags |= (1 << (sentence[i] - 'A')); // Set the corresponding flag
        }
        // Check if the character is between 'a' and 'z'
        else if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            flags |= (1 << (sentence[i] - 'a')); // Set the corresponding flag
        }
    }

    return flags == PANGRAM_FLAGS;
}