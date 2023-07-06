#include<stdio.h>
main()
{
	int no,i;
	int a[no];
	printf("enter the array no");
	scanf("%d",&no);
	
	printf("enter values");
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("printing array");
	for(i=0;i<no;i++)
	{
		printf("%d ",a[i]);
	}
	
}
