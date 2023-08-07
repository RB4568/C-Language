#include<iostream>
using namespace std;
int a=20;
class dar
{
	public: void getdata()
	{
		int a=10;
		cout<<"local A:"<<a<<endl;
		cout<<"global A"<<::a;
	}
	
};
main()
{
	dar cat;
	cat.getdata();
}
