#include<stdio.h>
int swap(int *a,int *b);
main()
{
	int x=10,y=20;
	printf("after swapping \n x:%d  \n y:%d\n",x,y);
	swap(&x,&y);
	
}
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("after swapping \n x:%d  \n y:%d",*a,*b);
}
