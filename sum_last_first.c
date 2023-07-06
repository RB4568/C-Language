#include<stdio.h>
main()
{
     int f,a,l,i,s;
     printf("enter a number \n ");
     scanf("%d",&a);
     l=a%10;
     printf("last digit%d\n ",l);
    while(a>10)
    {
    	a/=10;
	}
	f=a;
     printf("first digit%d\n ",f);
     s=l+f;
     printf("sum=%d\n ",s);
     
}
