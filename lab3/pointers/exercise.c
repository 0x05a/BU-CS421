#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Create a pointer to the local variable n called pointer_to_n, and use it to increase the value of n by one.
    int n = 1;
    int * pointer_to_n = &n;
    *pointer_to_n += 1;
    printf("The value of n is now %d\n", n);
}