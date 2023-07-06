#include<stdio.h>
main()
{
	int a,c,b,d;
	printf("Enter 4 numbers to check the maximum");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b)
    {
	  	if(a>c && a>d)
	  	{
	  		printf("a is the maximum");
	  		
		  }
    }
	  if(b>a)
	  {
	  	if(b>c  && b>d)
	  	{
	  		printf("b is the maximum");
		  }
	  }
	  if(c>a)
	  {
	  	if(c>b  && c>d)
	  	{
	  	    printf("c is the maximum");
		  }
	  }
	   if(d>a)
	   {
	   	   if(d>b && d>c)
	   	   {
	   	   	printf("d is the maximum");
			  }
	   }
	
}
