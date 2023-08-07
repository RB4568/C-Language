#include<iostream>
using namespace std;

class input
{
	public: int a,b;
	public: getdata()
	{
		cout<<"Enter 2 values to add"<<endl;
		cin>>a>>b;
	}
};
class D: public input
{
	public:display()
	{
		int c=a+b;
		cout<<"addition of 2 values:"<<c;
	}
};
main()
{
	D obj;
	obj.getdata();
	obj.display();
}
