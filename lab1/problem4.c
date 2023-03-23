#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    puts("--------------------------------");
    puts("Enter the first array's values");
    puts("--------------------------------");
    double u_arr[6] = {0};
    printf("Enter a number: ");
    scanf("%lf", &u_arr[0]); 
    printf("Enter a number: ");
    scanf("%lf", &u_arr[1]);
    printf("Enter a number: ");
    scanf("%lf", &u_arr[2]);
    puts("--------------------------------");
    puts("Enter the second array's values");
    puts("--------------------------------");
    printf("Enter a number: ");
    scanf("%lf", &u_arr[3]); 
    printf("Enter a number: ");
    scanf("%lf", &u_arr[4]);
    printf("Enter a number: ");
    scanf("%lf", &u_arr[5]);
    printf("The merged array is [%.2f, %.2f, %.2f, %.2f, %.2f, %.2f].\n", \
    u_arr[0], u_arr[1], u_arr[2], u_arr[3], u_arr[4], u_arr[5]);
}