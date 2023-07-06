#include<stdio.h>
main()
{
	int i,j,no;
	printf("enter a no:");
	scanf("%d",&no);

    for(i=no;i>=1;i--)
    {
    	for(j=no;j>=i;j--)
    	{
    		printf("%d",i);
		}
		printf("\n");
	}
    
}
