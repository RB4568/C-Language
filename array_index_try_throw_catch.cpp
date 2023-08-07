#include<iostream>
using namespace std;
main()
{
	int n,d,a[4],index;
	
	cout<<"No of Array index\n";
	cin>>index;
	
	try 
	{
		if(index>=4)
		{
			throw 'Error';
		}
		else
		{
			cout<<"Numerator:";
			cin>>n;
			
			cout<<"Denominator:";
			cin>>d;
			
			if(d==0)
			{
				throw 0;
			}
			a[index]=n/d;
			
			cout<<a[index];
		}
	}
	catch (const char *msg)
	{
		cout<<msg;
	}
	catch (int num)
	{
		cout<<"Error";
	}
}
