#include<iostream>
using namespace std;
class reference
{
 	
 	public : getdata()
 	{
 		int x=10;
 		int &ref=x;
 		
 		
 		ref=30;
 		
 		cout<<"x is "<<x<<endl;
        cout<<"Ref is"<<ref; 		
	 }
};
main()
{
	reference obj;
	obj.getdata();
}
