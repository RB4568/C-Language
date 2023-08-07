#include<iostream>
using namespace std;
class A
{
	public : int a=10;
	
	public: void operator ++()
	{
		a--;
	}
	public: void operator --()
	{
		a++;
	}
	public: void display()
	{
	     cout<<a;
	}

};
main()
{
	A obj;
	A obj1;
	++(obj);
	--(obj1);
	obj.display();
    obj1.display();
}

