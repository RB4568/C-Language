#include<stdio.h>
main()
{
	int a=10;
	int  *p;
	int **ptr;
	
	p=&a;
	ptr=&p;
	
	printf("a:%d\n",a);
	printf("pointer p:%d\n",*p);
	printf("pointer ptr:%d\n",**ptr);
	
	
}
