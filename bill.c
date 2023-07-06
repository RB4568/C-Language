#include<stdio.h>
main()
{
	int unit;
	float total,sc;
	
	printf("enter total units");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		total=50*0.50;
		sc=(20*total)/100;
		total=total+sc;
		printf("Total:%f",total);
	}
	if(unit>50 && unit<=150)
	{
		total=50*0.50+(unit-50)*0.75;
			sc=(20*total)/100;
		total=total+sc;
		printf("Total:%f",total);
	}
	if(unit>150 && unit<=250)
	{
		total=50*0.50+(unit-50)*0.75+(unit-150)*1.20;
			sc=(20*total)/100;
		total=total+sc;
		printf("Total:%f",total);
	}
	if(unit>250)
	{
		total=50*0.50+(unit-50)*0.75+(unit-150)*1.20+(unit-250)*1.50;
			sc=(20*total)/100;
		total=total+sc;
		printf("Total:%d",total);
	}
	
}
