#include<iostream>
using namespace std;

class calc
{
	public: void add()
	{
	  int a,b;
	  cout<<"enter A:";
	  cin>>a;
	  cout<<"enter B:";
	  cin>>b;
		int c=a+b;
		cout<<"Addition:"<<c<<endl;
	}
	public: void sub()
	{
		int a,b;
	cout<<"enter A:";
	cin>>a;
	cout<<"enter B:";
	cin>>b;
		int c=a-b;
		cout<<"Subtraction:"<<c<<endl;
	}
	public: void mul()
	{
		int a,b;
	cout<<"enter A:";
	cin>>a;
	cout<<"enter B:";
	cin>>b;
		int c=a*b;
		cout<<"Multiplication:"<<c<<endl;
	}
	public: void div()
	{
		int a,b;
	cout<<"enter A:";
	cin>>a;
	cout<<"enter B:";
	cin>>b;
		int c=a/b;
		cout<<"Division:"<<c<<endl;
	}
};
main()
{
	calc math;
	math.add();
	math.sub();
	math.mul();
	math.div();
}
