#include<iostream>
using namespace std;

class A
{
	public: int math,eng,sci;
		  input()
		  {
		  	cout<<"enter the marks of maths:"<<endl;
		  	cin>>math;
		  	cout<<"enter the marks of eng:"<<endl;
		  	cin>>eng;
		  	cout<<"enter the marks of sci:"<<endl;
		  	cin>>sci;
		  }
};
class B: public A
{
	public: int total;
			calculate()
			{
				total=math+eng+sci;
			}
};
class C: public B
{
	public: float per;
	 		display()
	        {
		        per=(total/3);
		        cout<<"percentage of the student:"<<per;
          	}
};
main()
{
	C obj;
	obj.input();
	obj.calculate();
	obj.display();
}
