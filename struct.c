#include<stdio.h>
#include<string.h>
struct std
{
	int no;
	char name[50];
};
main()
{
	struct std crate;
	crate.no=15;
	strcpy(crate.name,"Rajesh");
	
	printf("Name:%s",crate.name);
	printf("\nID no:%d",crate.no);
	
}
