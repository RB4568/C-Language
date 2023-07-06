#include<stdio.h>
main()
{
	int no,i,j,s;
	printf("enter a no ");
	scanf("%d",&no);
	 
	 for(i=1;i<=no;i++)
	 {
	 	for(s=i;s<=no;s++)
	 	{
	 		printf(" ");
		 }
	 	for(j=i;j>=1;j--)
	 	{
	 		printf("%d",j);
		 }
		 printf("\n");
	 }
	
	
}
