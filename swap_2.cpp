#include<iostream>
using namespace std;

class s
{
	public: void swap()
	{
		int a,b;
		cout<<"enter the value of A:";
		cin>>a; 
		cout<<endl; 
		cout<<"enter the value of B:"; 
		cin>>b; 
		cout<<endl; 
		a=a+b;
		b=a-b;
		a=a-b;
		cout<<"After Swapping:"<<endl;
		cout<<"A:"<<a<<endl;
		cout<<"B:"<<b<<endl;
	}
};
main()
{
	s is;
	is.swap();
}
