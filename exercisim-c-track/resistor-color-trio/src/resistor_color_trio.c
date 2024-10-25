#include "resistor_color_trio.h"
#include <math.h>
#include <stdio.h>

resistor_value_t color_code(const resistor_band_t bands[]) {
    uint16_t value = (bands[0] * 10 + bands[1]);
    uint64_t multiplier = pow(10, bands[2]);
    uint64_t total_value = value * multiplier;

    resistor_unit_t unit;
    if (total_value < 1000) {
        unit = OHMS;
    } else if (total_value < 1000000) {
        total_value /= 1000; // Convert to KILOOHMS
        unit = KILOOHMS;
    } else if (total_value < 1000000000) {
        total_value /= 1000000; // Convert to MEGAOHMS
        unit = MEGAOHMS;
    } else {
        total_value /= 1000000000; // Convert to GIGAOHMS
        unit = GIGAOHMS;
    }

    // Return the result with the calculated value and its unit
    resistor_value_t result = {.value = total_value, .unit = unit};
    return result;
}