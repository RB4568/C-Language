#include<iostream>
using namespace std;
class fruit
{
	public:input()
	{
		cout<<"to calculate no of fruits "<<endl;
	}
	
};
class apple:public fruit
{
      public: int a;
            app()
	  		{
	 			cout<<"enter no of apples:"<<endl;
	 			cin>>a;
			 }	
};
class mango:public apple
{
	 public: int m;
            man()
	  		{
	 			cout<<"enter no of mangoes:"<<endl;
	 			cin>>m;
			 }	
			 
	display()
	{
	     int total=m+a;
		cout<<"mangoes:"<<m<<endl;
		cout<<"apples"<<a<<endl;
		cout<<"total fruits:"<<total;
	}
};
main()
{
	mango obj;
	obj.input();
	obj.app();
	obj.man();
	obj.display();
}
