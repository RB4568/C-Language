#include<stdio.h>
main()
{
    int no,r,c,s;
	printf("enter a no");
	scanf("%d",&no);
	
	for(r=1;r<=no;r++)
	{
		for(s=1;s<r;s++)
	    {
	    	printf(" ");
    	}
		for(c=r;c<=no;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
		
}
