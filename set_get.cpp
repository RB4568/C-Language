#include<iostream>
using namespace std;

class demo
{
	int emp_no;
	
	public : setdata(int temp)
	{
		emp_no=temp;
	}
	getdata()
	{
		cout<<"employee id no:"<<emp_no;
	}
};
main()
{
	demo obj;
	obj.setdata(10);
	obj.getdata();
	
}
