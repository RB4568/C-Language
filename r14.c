#include<stdio.h>
main()
{
	int no,c,r,s;
	printf("enter a no");
	scanf("%d",&no);
	
	for(r=no;r>=1;r--)
	{
	    for(s=r;s>=1;s--)
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
