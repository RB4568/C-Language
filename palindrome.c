#include<stdio.h>
main()
{
     int a,rev=0,r,b;
     printf("enter a number\n ");
     scanf("%d",&a);
     b=a;
    printf("original no:%d\n",a);
    while(a!=0)
    {
    	r=a%10;
    	rev=rev*10+r;
    	a/=10;
	}
	if(rev==b)
    { 
        printf("palindrome no%d:\n",rev);
	}	
	else 
	{
		printf("not palindrome%d\n:",rev);
	}
    
}
