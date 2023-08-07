#include<iostream>
using namespace std;
class A
{
	int x,y;
	public: A(int a,int b)
	{
		x=a;
		y=b;
		cout<<"X:"<<x<<endl<<"Y:"<<y<<endl<<endl;
	}
	public: A(A &obj)
	{
		x=obj.x;
		y=obj.y;
		cout<<"copy constructor"<<endl;
		cout<<"X:"<<x<<endl<<"Y:"<<y;
	}
};
main()
{
	A obj(20,45);
	A obj1=obj;
}
