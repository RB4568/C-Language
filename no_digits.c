#include<stdio.h>
main()
{
	int a,i;
	printf("enter a no");
	scanf("%d",&a);
	for(i=0;a!=0;i++)
	{
		a/=10;
	
	}
	printf("no of digits:%d",i);
}
