#include<stdio.h>
main()
{
	int i=1,j,no,s,temp;
	printf("enter a no:");
	scanf("%d",&no);
	
	for(i=no;i>=1;i--)
     {
     	
		for(j=no;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");

    }
}
