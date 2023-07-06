#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *std;
	std=fopen("rishit.txt","w");
	
	if(std==NULL)
	{
		printf("File does not exist.");
	}
	else
	{
		printf("Created successfully.");
	}
}
