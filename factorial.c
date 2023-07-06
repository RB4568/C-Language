#include<stdio.h>
main()
{
     int a,i,fac=1;
     printf("enter a number\n ");
     scanf("%d",&a);
  
     for(i=1;i<=a;i++)
     {
     	fac*=i;
	 }
   
     printf("factorial of a no:%d",fac);
       
}
