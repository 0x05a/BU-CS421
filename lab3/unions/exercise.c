#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Create a union that stores an array of 21 characters and 6 ints (6 since 21 / 4 == 5, but 5 * 4 == 20 
    // so you need 1 more for the purpose of this exercise), you will set the integers to 6 given values and 
    // then print out the character array both as a series of chars and as a string.
    union {
        char chars[21];
        int ints[6];
    } u;
    u.ints[0] = 0x6c6c6548;
    u.ints[1] = 0x6f57206f;
    u.ints[2] = 0x21646c72;
    u.ints[3] = 0x6c6c6568;
    u.ints[4] = 0x6f57206f;
    u.ints[5] = 0x21646c72;
    printf("The str is: %s\n", u.chars);
    for (int i = 0; i < 21; i++) {
        printf("%c", u.chars[i]);
    }
    printf("\n");
    return 0;
}