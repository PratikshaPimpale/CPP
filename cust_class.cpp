#include<iostream>
using namespace std;
class customer
{
	public:
		int id;
		char cname[20],add[20],phno[10];
		void accept()
		{
			cout<<"Enter customer id, name, address, phone no: ";
			cin>>id>>cname>>add>>phno;
		}
		void disp()
		{
			cout<<"\nCustomer id="<<id<<endl;
			cout<<"Name="<<cname<<endl;
			cout<<"Address="<<add<<endl;
			cout<<"Phone no:"<<phno;
		}
	}ob;
int main()
{
	ob.accept();
	ob.disp();
}
