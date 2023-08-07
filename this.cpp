#include<iostream>
using namespace std;

class demo
{
	public : int x;          //this
	       getdata(int x)
	       {
	       	this ->x =x;
	       	cout<<"x="<<x;
	       	cout<<"this-> x="<<this->x;          //printing this keyword
		   }
	
};
main()
{
	demo obj;
	obj.getdata(10);
}
