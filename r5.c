#include<stdio.h>
main()
{
    int no,r,c;
	printf("enter a no");
	scanf("%d",&no);
	
	for(r=no;r>=1;r--)
	{
		for(c=1;c<=no;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
		
}
