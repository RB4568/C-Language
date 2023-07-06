#include<stdio.h>
main()
{
	int no,r,c;
	printf("enter a no");
	scanf("%d",&no);
	
	for(r=1;r<=no;r++)
	{
		
		for(c=r;c<=no;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	 
	
}
