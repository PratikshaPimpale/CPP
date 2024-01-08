#include<iostream>
using namespace std;
class Ebill
{
	public:
		char cname[20];
		int meterid,unit;
		float total;
		void accept()
		{
			cout<<"Enter customer name:";
			cin>>cname;
			cout<<endl<<"Enter meter id:";
			cin>>meterid;
			cout<<endl<<"Enter units:";
			cin>>unit;
		}
		void cal()
		{
			if(unit<=100)
			{
				total=unit*1;
			}
			else if(unit>100 && unit<=200)
			{
				total=100*1;
				unit=unit-100;
				total=total+unit*2;
			}
			else
			{
				total=100*1;
				unit=unit-100;
				total=total+(100*2);
				unit=unit-100;
				total=total+(unit*5);
			}
			total=total+150;
			if(total>=250)
				total=total+(total*0.15);
		}
		void disp()
		{
			cout<<"\nCustomer name="<<cname<<endl;
			cout<<"\nMeter id="<<meterid<<endl;
			cout<<"\nUnits="<<unit<<endl;
			cout<<"\nTotal Bill amount="<<total;
		}
}ob;
int main()
{
	ob.accept();
	ob.cal();
	ob.disp();
}
