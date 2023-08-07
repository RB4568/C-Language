#include<iostream>
using namespace std;

class demo
{
	public : demo()                   //default construstor
	{
		int a=10;
		cout<<a<<endl;
	}
	
	public : demo(int a,int b)           //parametrised construstor
	{
		cout<<"a:"<<a<<endl<<"b:"<<b;
		
	}
	
};
main()
{
	demo obj;
	demo obj1(10,20);	
}


