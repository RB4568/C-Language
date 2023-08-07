#include<iostream>
using namespace std;
class person     
{
   public:
        char name[100], address[100];
        int ph;
};

class employee : public person  
{                                                   
    public:
        int eno;
        char ename[50];
};
class manager : public employee 
 {
 	public:
        char designation[50], deptname[100];
        float basic_salary;
    public:
        void accept_details()
        {
                cout<<" Enter details of manager "<<endl;
                cout<<" -------------------------- "<<endl;
                cout<<" Enter employee no. : "<<endl;
                cin>>eno;
                cout<<" Enter name : "<<endl;
                cin>>ename;
                cout<<" Enter add : "<<endl;
                cin>>address;
                cout<<" Enter phone no. : "<<endl;
                cin>>ph;
                cout<<" Enter designation : "<<endl;
                cin>>designation;
                cout<<" Enter department name : "<<endl;
                cin>>deptname;
                cout<<" Enter basic salary : "<<endl;
                cin>>basic_salary;
	}   
        
};
int main()
{
        int i,n,temp;
        manager man[100];
        cout<<"How Many Managers You Want to Enter? : ";   
        cin>>n;         
        for(i=1;i<=n;i++)
        {
                man[i].accept_details();
        }
        
        for(i=1;i<=n;i++)
        {
                if(man[temp].basic_salary<man[i].basic_salary)
                temp=i;
        }
        cout<<" Manager with Highest Salary is : "<<man[temp].basic_salary<<endl;
        cout<<" Manager Name is : "<<man[temp].ename;
   
}
