#include<stdio.h>
main()
{
	int r,s,c,no;
	printf("enter a no");
	scanf("%d",&no); 
	
	for(r=no;r>=1;r--)
	{
	    for(c=1;c<=r;c++)
	    {
	    	printf("%d",c);
		}	
		for(s=r;s<no;s++)
		{
			printf(" ");
		}
			for(s=r;s<no;s++)
		{
			printf(" ");
		}
		for(c=r;c>=1;c--)
		{
			printf("%d",c);
		}
	
		printf("\n");
	}
	for(r=1;r<=no;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",c);
		}
		for(s=r;s<no;s++)
		{
			printf(" ");
		}
		for(s=r;s<no;s++)
		{
			printf(" ");
		}
		for(c=r;c>=1;c--)
		{
			printf("%d",c);
		}
		
		
		
		
		printf("\n");
		
	}
	
	
	
	
}
