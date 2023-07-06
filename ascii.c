#include<stdio.h>
main()
{ 
     char c;
	printf("enter any character:");
	scanf("%c",&c);
	
	if(c>='a' && c<='z' || c>='A' && c<='Z')
	{
		printf("character is an alphabet");
	}
	else if(c>='0' && c<='9')
	{
		printf("character is a digit");
	}
	else
	{
		printf("character is a special character");
	}
}
