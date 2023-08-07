#include<iostream>
using namespace std;
class demo
{
	private :int a;
	
	public : demo()
	{
		a=10;
	}
	friend void geta(demo &obj);
};
void geta(demo &obj)
{
	cout<<"A:"<<obj.a;
}
main()
{
	demo obj1;
	geta(obj1);
}
