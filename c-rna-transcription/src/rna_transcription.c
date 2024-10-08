#include "rna_transcription.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *to_rna(const char *dna) {
    size_t len = strlen(dna);
    char *rna = malloc(len + 1);
    if (dna == NULL || dna[0] == '\0') {
        rna[0] = '\0';
        return rna;
    }

    
    for (size_t i = 0; i < len; i++) {
        switch (dna[i]) {
            case 'T': rna[i] = 'A'; break; 
            case 'A': rna[i] = 'U'; break; 
            case 'G': rna[i] = 'C'; break; 
            case 'C': rna[i] = 'G'; break; 
            default:
                free(rna);
                return NULL;
        }
    }

    rna[len] = '\0';
    return rna;
}
