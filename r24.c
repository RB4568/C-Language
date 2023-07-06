#include<stdio.h>
main()
{
	int no,i,j,s,r,c;
	printf("enter a no");
	scanf("%d",&no); //5
	
	for(i=no;i>=1;i--)
	{
		for(s=i;s>=1;s--)
		{
			printf(" ");
		}
		for(j=no;j>=i;j--)
		{
			printf("%d",j);
		}
		for(j=i+1;j<=no;j++)
		{
			printf("%d",j);
		}
		 printf("\n");
		
		
		
		
	}


}

