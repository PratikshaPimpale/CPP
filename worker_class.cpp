#include<iostream>
using namespace std;
class worker
{
	public:
		char name[20];
		int hour,total;
		void accept()
		{
			cout<<"Enter worker name:";
			cin>>name;
			cout<<"Enter no. of hours:";
			cin>>hour;
			cal();
		}
		void cal(int rate=150)
		{
			total=hour*rate;
			disp();
		}
		void disp()
		{
			cout<<"Name="<<name<<endl<<"Salary="<<total;
		}
};
int main()
{
	worker ob;
	ob.accept();
}
