#include<stdio.h>
main()
{
	int no,i,j,r,c,s;
	printf("enter a no ");
	scanf("%d",&no);

    for(r=1;r<=no;r++)
    {
    	for(s=r;s<=no;s++)
    	{
    		printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	for(r=2;r<=no;r++)
	{
		for(s=1;s<=r;s++)
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
