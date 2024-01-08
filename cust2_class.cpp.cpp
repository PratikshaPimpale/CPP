#include<iostream>
using namespace std;
class customer
{
	public:
		int id,phno;
		char name[20],add[20];
		void accept();
		void disp();
};
void customer :: accept()
{
	cout<<"Enter customer id name address phone: ";
	cin>>id>>name>>add>>phno;
}
void customer :: disp()
{
	cout<<endl<<"Customer id="<<id;
	cout<<endl<<"Customer name="<<name;
	cout<<endl<<"Customer address="<<add;
	cout<<endl<<"Customer phone="<<phno;
}
int main()
{
	customer ob;
	ob.accept();
	ob.disp();
}
