#include<stdio.h>
main()
{
	int no,i,j,r,c;
	printf("enter a no ");
	scanf("%d",&no);
     
	for(r=1;r<=no;r++)
	{
		for(c=r;c>=1;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	
	for(i=no-1;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
		 
}
