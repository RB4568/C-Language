#include<iostream>
using namespace std;

class item
{
    public:
        int item_no;
        char item_name[50];
        float item_price;
};
class discount : public item
{
    public:
        int dis_percent;
        int dis_price;
        void accept_details()
        {
                cout<<"Enter item name :"<<endl;
                cin>>item_name;
                cout<<" Enter item no :"<<endl;
                cin>>item_no;
                cout<<" Enter item price :"<<endl;
                cin>>item_price;
                cout<<"Enter discount percent :"<<endl;
                cin>>dis_percent;
                cout<<" ----------------------"<<endl;
                dis_price = item_price - item_price * dis_percent / 100;
        }
        void display_details()
        {
                cout<<"Item name : "<<item_name<<endl;
                cout<<"Item no. : "<<item_no<<endl;
                cout<<"Item price : "<<item_price<<endl;
                cout<<"Discount percent : "<<dis_percent<<endl;
                cout<<"Discounted price : "<<dis_price<<endl;
                cout<<" ----------------------";
        }
};
int main()
{
        int i, n, dis = 0, price = 0;
        discount dt[100];
        cout<<"How many items you want to enter? : ";
        cin>>n;
        for(i=1; i<=n; i++)
        {
                dt[i].accept_details();
        }
        for(i=1;i<=n;i++)
        {
                dt[i].display_details();
        }
        for(i=1;i<=n;i++)
        {
                price = price + dt[i].item_price;
        }
        for(i=1;i<=n;i++)
        {
                dis = dis + dt[i].item_price-dt[i].dis_price;
        }
        cout<<endl<<"Total Price : "<<price<<endl;
        cout<<" Total Discount : "<<discount;
        
}
