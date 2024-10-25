#include "two_fer.h"

#define MAX_BUFFER_SIZE 50 // Define a constant for the maximum buffer size

void two_fer(char *buffer, const char *name){
    sprintf(buffer, "One for %s, one for me.", name ? name : "you" );
}

// Wrapper function to manage buffer size
int safe_two_fer(char *buffer, size_t buffer_size, const char *name) {
    // Check if the provided buffer is large enough
    if (buffer_size < MAX_BUFFER_SIZE) {
        fprintf(stderr, "Error: Buffer size is too small. Minimum size required is %d bytes.\n", MAX_BUFFER_SIZE);
        snprintf(buffer, buffer_size, "Error: Buffer too small."); // Write an error message
        return -1; // Exit the wrapper early
    }

    two_fer(buffer, name);

    return 0;
}