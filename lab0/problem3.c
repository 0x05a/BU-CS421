#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int a = 125, b = 12345; 
long ax = 1234567890; 
short s = 4043; 
float x = 2.13459; 
double dx = 1.1415927; 
char c = 'W'; 
unsigned long ux = 2541567890;

int main(int argc, char *argv[])
{
	printf("a + c = %i\n", a + ((unsigned int )c));
	printf("x + c = %li\n", ((int)x) + ((int) c));
	printf("dx + x = %li\n", ((int) dx) + ((int)x));
	printf("((int) dx) + ax = %li\n",((int) dx) + ax);
	printf("a + x = %li\n", a + ((int) x));
	printf("s + b = %li\n", s + b);
	printf("ax + b = %li\n", ax + b);
	printf("s + c = %li\n", s + c);
	printf("ax + c = %li\n", ax + c);
	printf("ax + ux = %li\n", ax + ux);
	return 0;
}
