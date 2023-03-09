#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void f(unsigned int i)
{
	char *s = calloc(i+1, sizeof(char));
	memset(s, '#', i);
	puts(s);
	free(s);
	return;
}

int main(int argc, char *argv[])
{
	f(5);
	f(1);
	f(1);
	f(4);
	f(1);
	f(1);
	f(1);
	return 0;
}
