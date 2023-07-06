#include<stdio.h>
#include<string.h>
union std
{
	int no;
	char name[50];
};
main()
{
	union std crate;
	crate.no=87;
	strcpy(crate.name,"Rajesh");
	
	printf("Name:%s\n",crate.name);
	printf("Batch no:%d",crate.no);
	
}
