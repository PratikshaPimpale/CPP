#include<iostream>
using namespace std;
class college
{
	public:
		int cno;
		char cname[20],add[20];
		void accept_c()
		{
			cout<<"\nEnter college no, name, address: ";
			cin>>cno>>cname>>add;
		}
};
class student : public college
{
	public:
		int rno;
		char sname[20];
		float per;
		void accept_s()
		{
			cout<<"\nEnter student roll no, name, percentage: ";
			cin>>rno>>sname>>per;
		}
		void disp()
		{
			cout<<endl<<"College no="<<cno;
			cout<<endl<<"College name="<<cname;
			cout<<endl<<"College address="<<add;
			cout<<endl<<"roll no="<<rno;
			cout<<endl<<"Name="<<sname;
			cout<<endl<<"Percentage="<<per;
		}
};
int main()
{
	student ob;
	ob.accept_c();
	ob.accept_s();
	ob.disp();
}
