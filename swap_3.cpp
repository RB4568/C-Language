#include<iostream>
using namespace std;

class s
{
	public: void swap()
	{
		int c,a,b;
		cout<<"enter the value of a:";
		cin>>a;
		cout<<endl;
		cout<<"enter the value of b:";
		cin>>b;
		cout<<endl;
		c=a;
		a=b;
		b=c;
		cout<<"after swapping"<<endl;
		cout<<"A:"<<a<<endl;
		cout<<"B:"<<b<<endl;
	}
	
}; 
main()
{
	s was;
	was.swap();
}
