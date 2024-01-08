#include<iostream>
using namespace std;
class person
{
	public:
	char pname[20],add[30];
	float sal,tax_amt;
	void accept()
	{
		cout<<"Enter person name, address, sal:";
		cin>>pname>>add>>sal;
	}
	void cal()
	{
		if(sal<=20000)
			tax_amt=0;
		else if(sal<=40000)
			tax_amt=(sal*5)/100;
		else
			tax_amt=(sal*10)/100;
	}
	void disp()
	{
		cout<<"Person name="<<pname<<endl;
		cout<<"Address="<<add<<endl;
		cout<<"Salary="<<sal<<endl;
		cout<<"Tax amount="<<tax_amt;
	}
}ob;
int main()
{
	ob.accept();
	ob.cal();
	ob.disp();
}
