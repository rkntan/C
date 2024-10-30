#include "isogram.h"
#include <stddef.h>
#include <stdint.h>

bool is_isogram(const char phrase[]) {

    if (phrase == NULL) {
        return false;
    }

    uint32_t flags = 0;

    for (int i = 0; phrase[i] != '\0'; i++) {
        int pos;
        if (phrase[i] >= 'A' && phrase[i] <= 'Z') {
            pos = phrase[i] - 'A';
        } else if (phrase[i] >= 'a' && phrase[i] <= 'z') {
            pos = phrase[i] - 'a';
        } else if (phrase[i] == ' ' || phrase[i] == '-') {
            continue; // NOP
        } else {
            return false; // invalid characters
        }

        if ((flags & (1 << pos)) != 0) {
            return false;
        }

        flags |= (1 << pos);
    }

    return true;
}