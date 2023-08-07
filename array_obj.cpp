#include<iostream>
using namespace std;

class demo
{
	public : int no;
	char name[50];
	
	setdata()
	{
		cout<<"enter id no";
		cin>>no;
		cout<<endl;
		cout<<"enter name";
		cin>>name;
		
	}
	getdata()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Id no:"<<no<<endl;
	}
	
};

main()
{  int n,i;
     cout<<"no of times you want to take input";
     cin>>n;
	demo obj[n];
	for(i=0;i<n;i++)
	{
		obj[i].setdata();
	}
	for(i=0;i<n;i++)
	{
		obj[i].getdata();
	}
}
