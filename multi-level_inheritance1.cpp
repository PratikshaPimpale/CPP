#include<iostream>
using namespace std;
int t,i;
float per;
class student
{
	public:
		int rno;
		char sname[20];
		void accept_s()
		{
			cout<<"\nEnter student roll no, name: ";
			cin>>rno>>sname;
		}
};
class exam : public student
{
	public:
		int m[6];
		void accept_m()
		{
			cout<<"Enter 6 subject's marks: ";
			for(i=0;i<6;i++)
				cin>>m[i];
		}
		void calc()
		{
			for(i=0;i<6;i++)
				t=t+m[i];
			per=t/6;
		}
};
class result : public exam
{
	public:
		void disp()
		{
			cout<<endl<<"roll no="<<rno;
			cout<<endl<<"Name="<<sname;
			cout<<endl<<"Percentage="<<per;
		}
};
int main()
{
	result ob;
	ob.accept_s();
	ob.accept_m();
	ob.calc();
	ob.disp();
}
