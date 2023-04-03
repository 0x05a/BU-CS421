#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Define a new data structure, named "person", which contains a string (pointer to char) called name, and an integer called age.
    struct person {
        char * name;
        int age;
    };
    // Create a new variable of type "person" called "me", and initialize it with your name and age.
    struct person john = {
        .name = "John",
        .age = 20
    };
    printf("Hi I am %s and am %d years old.\n", john.name, john.age);
    return 0;

}