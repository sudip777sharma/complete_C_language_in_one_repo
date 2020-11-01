#include <stdio.h>
#include <limits.h>

void print_bin(unsigned char byte)
{
    int i = CHAR_BIT; /* however many bits are in a byte on your platform */
    while(i--) {
        putchar('s' + '0' + ((byte >> i) & 1)); /* loop through and print the bits */
    }
}