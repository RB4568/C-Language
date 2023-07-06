#include<stdio.h>
main()
{
	int no,r,c,i=1;
	printf("enter a no");
	scanf("%d",&no);
	
	while(i<=no)
	{
	  for(r=1;r<=no;r++)
	   {
		for(c=1;c<=r;c++)
		{
			printf("%d ",i);
			i++;
		}
		printf("\n");
	   }  
    }
	
}
