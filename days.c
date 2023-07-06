#include<stdio.h>
 main()
{
	char c;
	
	printf("M/m for Monday");
	printf("\nT/tfor Tuesday");
	printf("\nW/w for Wednesday");
	printf("\nTH/th for Thrusday");
	printf("\nF/f for Friday");
	printf("\nS/s for Saturday");
	printf("\nU/u for Sunday");
	
	printf("\nenter  a character");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'M':
		case 'm':
			{
			    printf("\nMonday");
		     	break;
			}
		case 'T':
		case 't':
			{
			    printf("\nTuesday");
		     	break;
			}
		
		case 'W':
		case 'w':
			{
			    printf("\nWednesday");
		     	break;
			}
		
		
		case 'TH':
		case 'th':
			{
			    printf("\nThrusday");
		     	break;
			}
		
		case 'F':
		case 'f':
			{
			    printf("\nFriday");
		     	break;
			}
		case 'S':
		case 's':
			{
			    printf("\nSaturday");
		     	break;
			}
		case 'u':
		case 'U':
			{
			    printf("\nSunday");
		     	break;
			}
			default:
				{
					printf("not a valid choice");
					break;
				}
		
	}
	
}
