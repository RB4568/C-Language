#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fptr;
	fptr=fopen("rishit.txt","r");
	
	if(fptr==NULL)
	{
		printf("file does not exist. ");
	}
	else
	{
		printf("created successfully.");
	}
}
