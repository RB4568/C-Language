#include<stdio.h>
main()
{
     int a,i;
     printf("enter a number\n ");
     scanf("%d",&a);
     
     int n;
     int b = 0, c = 1;

  
     n = b+c;
      printf("Fibonacci Series: %d %d ", b, c);
     
     for (i = 3; i <= a; i++) 
	 {
       printf("%d ",n );
       b =c;
       c = n;
       n = c+b;
    }
 }
 
