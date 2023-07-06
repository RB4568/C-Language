#include<stdio.h>
main()
{
    int no,i,s=0;
    float avg;
	printf("enter the array no");
	scanf("%d",&no);
	
	int a[no];
	printf("enter values");
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	 avg=(s/no);
	 printf("average:%f",avg);
		
}
