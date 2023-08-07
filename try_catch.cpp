#include<iostream>
using namespace std;
main()
{
	int a=10;
	try
	{
		if(a>10)
		{
			cout<<"greater than 10\n";
		}
		else
		{
			cout<<"exit\n";
		}
	}
	catch(exception e)
	{
	}
}
