#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>


/*
according to wikipedia:
    Sign bit: 1 bit
    Exponent: 11 bits
    Significand precision: 53 bits (52 explicitly stored)
*/

int main ()
{
    union {
        double f;
        uint64_t u;
    } p;

    p.f = -1.1;
    uint64_t sign = (p.u >> 63) & 1;
    // grab bits 63 - 52
    uint64_t exp = (p.u >> 52) & ((1ul << 11) - 1);

    uint64_t coef_mask = (1ul << 52) - 1;
    uint64_t coef = p.u & coef_mask;

    printf("%"PRIu64"\n", sign);
    printf("%"PRIu64"\n", exp);
    printf("0x%llx\n", coef);
    //printf("%llx\n", p.u);
    return 0;
}
