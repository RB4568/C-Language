// without argument and with return type

#include<stdio.h>
int add();

main()
{
	add();
	printf("Addition: %d",add());
}

int add()
{
	int c,a=10,b=40;
	c=a+b;
	return c;
}
