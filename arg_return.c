// with argument and return type

#include<stdio.h>
int cube(int c);
main()
{
	cube(5);
	printf("Cube:%d",cube(5));
}

int cube(int c)
{
	return c*c*c;
}
