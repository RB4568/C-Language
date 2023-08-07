#include<iostream>
using namespace std;
class A
{
	public: getdata()
	{
		cout<<"Hello \n";
	}
	getdata(int a)
	{
		cout<<"value of a:"<<a;
	}
	getdata(int c,int b)
	{
		return b+c;
	}
};
main()
{
	A obj;
	obj.getdata();
	obj.getdata(10);
	cout<<"\nAddition:"<<obj.getdata(10,20);
}
