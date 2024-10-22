#include "resistor_color_trio.h"
#include <math.h>

resistor_value_t color_code(const resistor_band_t bands[]) {

    uint16_t value = (bands[0] * 10 + bands[1]);
    // uint16_t multiplier = pow(10, bands[2]);

    resistor_unit_t unit = bands[2] >= 3 ? bands[2] >= 6 ? MEGAOHMS : KILOOHMS : OHMS;

    resistor_value_t result = {.value = value, .unit = unit};
    return result;
}