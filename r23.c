#include<stdio.h>
main()
{
	int i,j,no;
	printf("enter a no");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		for(j=no;j>=i;j--)
		{
			if(j<=i)
			{
				printf(" *");
			}
			else
			{
				printf(" ");
			}
		}
		
		for(j=2;j<=i;j++)
		{
			if(j>=i)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
}
