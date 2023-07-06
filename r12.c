#include<stdio.h>
main()
{
	int no,r,s,c;
	printf("enter a no ");
	scanf("%d",&no);
   
    for(r=no;r>=1;r--)
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
		 
}
