#include<stdio.h>
main()
{
	int i,a,t;
	printf("Enter a table no");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++)
	{
		t=a*i;
		printf(" \n%d*%d=%d",a,i,t);
	}
}
