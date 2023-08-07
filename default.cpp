#include<iostream>
using namespace std;
main()
{
	try
	{
		throw 'a';
	}
	catch(int x)
	{
		cout<<"caught in 1";
	}
	catch(...)
	{
		cout<<"default";
	}
}
