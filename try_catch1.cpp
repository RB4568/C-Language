#include<iostream>
using namespace std;
main()
{
	int a=15;
	try
	{
		if(a>=18)
		{
			cout<<"eligible for voting\n";
		}
		else
		{
			throw(a);
		}
	}
	catch(int no)
	{
		cout<<"not eligible for voting, Age: "<<no;
	}
}
