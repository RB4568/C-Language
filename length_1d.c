#include<stdio.h>
main()
{
	int no,i,s;
	printf("enter the array no");
	scanf("%d",&no);
	printf("enter values");
	int a[no];
	for(i=0;i<no;i++)
	{
		scanf("%d ",&a[i]);
	}
	
	s= sizeof(a)/sizeof(a[0]);
	printf("length of the array:%d",s);
}
