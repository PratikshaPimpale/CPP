#include<iostream>
using namespace std;
class student
{
	public:
		int rno,a[6],t=0,i;
		char name[20];
		float per;
		void accept()
		{
			cout<<"Enter student rno,name, six sub marks:";
			cin>>rno>>name;
			for(i=0;i<6;i++)
				cin>>a[i];
		}
		void cal()
		{
			for(i=0;i<6;i++)
				t=t+a[i];
			per=t/6;
		}
		void disp()
		{
			cout<<"Student roll no="<<rno;
			cout<<endl<<"Name="<<name;
			cout<<endl<<"percentage="<<per;
		}
};
int main()
{
	student ob;
	ob.accept();
	ob.cal();
	ob.disp();	
}
