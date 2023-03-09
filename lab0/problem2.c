#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct rect
{
	int width;
	int height;
};


void rectangle(struct rect *a)
{
	int area = a->width * a->height;
	int perimeter = (2 * a->width) + (2 * a->height);
	printf("Perimeter of the rectangle = %d inches\nArea of the rectangle = %d square inches\n", perimeter, area);
	return;
}

int main(int argc, char *argv[])
{
	struct rect r = { .width=3, .height=5};
	rectangle(&r);
	return 0;
}
