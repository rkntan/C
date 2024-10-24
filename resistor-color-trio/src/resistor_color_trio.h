#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H
#include <stdint.h>

typedef enum {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

// Unit for resistor values
typedef enum {
    OHMS,
    KILOOHMS,
    MEGAOHMS,
    GIGAOHMS
} resistor_unit_t;

// Struct to hold the resistor value and its unit
typedef struct {
    uint16_t value;       // Resistor value (e.g., 680 for 680 ohms)
    resistor_unit_t unit; // Unit for the resistor value (e.g., OHMS, KILOOHMS, MEGAOHMS, GIGAOHMS)
} resistor_value_t;

resistor_value_t color_code(const resistor_band_t bands[]);

#endif
