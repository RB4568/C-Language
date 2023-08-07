#include<iostream>
using namespace std;

demo()
{
	 static int a=10;
	
	a++;
	cout<<a<<endl;
}
main()
{
	int i;
	
	for(i=0;i<5;i++)
	{
		demo();
	}
}
