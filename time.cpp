#include<iostream>
using namespace std;
class time
{
	public:
		int hh,mm,ss;
		void accept()
		{
			cout<<"Enter hours, minutes, seconds:";
			cin>>hh>>mm>>ss;
		}
		void disp()
		{
			cout<<"\nTime="<<hh <<":" <<mm <<":" <<ss<<endl;
		}
		static void diff(time ob,time ob1)
		{
			int h,m,s;
			if(ob.hh>ob1.hh)
			{
				h=ob.hh-ob1.hh;
				m=ob.mm-ob1.mm;
				s=ob.ss-ob1.ss;
				cout<<"\nDifference="<<h <<":" <<m <<":" <<s<<endl;
			}
			else if(ob1.hh>ob.hh)
			{
				h=ob1.hh-ob.hh;
				m=ob1.mm-ob.mm;
				s=ob1.ss-ob.ss;
				cout<<"\nDifference="<<h <<":" <<m <<":"<<s;
			}
		}
};
int main()
{
	time ob,ob1;
	ob.accept();
	ob1.accept();
	
	ob.disp();
	ob1.disp();
	
	time::diff(ob,ob1);
}
