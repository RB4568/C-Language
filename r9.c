#include<stdio.h>
main()
{
	int i,j,no;
	printf("enter a no:");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
}
