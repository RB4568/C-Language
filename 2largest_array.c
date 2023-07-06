#include<stdio.h>
main()
{
     int no,i,l,s,a[no];
	 printf("enter the array no:");
	 scanf("%d",&no);
	 
	 printf("enter the values");
	 for(i=0;i<no;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
	 l=a[0];
	 s=a[1];
	 
	 for(i=0;i<no;i++)
	 {
	 	if(a[i]>l)
	 	{
	 		s=l;
	 		l=a[i];
		 }
		 else if(a[i]>s && a[i]!=l)
		 {
		 	s=a[i];
		 }
	 }
	 	printf("the second largest no in a array:%d",s);
}
