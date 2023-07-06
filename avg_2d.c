#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,x,y,sum=0,avg;
	
	printf("enter rows:");
	scanf("%d",&x);
	printf("enter columns:");
	scanf("%d",&y);
	
	printf("enter values");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d ",&a[i][j]);
		}
		
	}

	printf("printing 2d array\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",a[i][j]);
			 sum=sum+a[i][j];
		}
		printf("\n");
	}
	 avg=sum/(x*y);
	printf("average:%d",avg);
}
