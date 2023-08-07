#include<iostream>
using namespace std;
int a=20;
class demo
{
	public: get()
	{
		int a=100;
		cout<<"global variable:"<<::a<<endl;
		cout<<"local variable:"<<a;
	}
};
main()
{
	demo obj;
	obj.get();
	
}
