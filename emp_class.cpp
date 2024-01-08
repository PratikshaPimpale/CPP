#include<iostream>
using namespace std;
class Emp
{
	public:
		int eno;
		char ename[20];
		float sal;
		void accept()
		{
			cout<<"Enter emp number,name,salary:";
			cin>>eno>>ename>>sal;
		}
		void disp()
		{
			cout<<"Emp number="<<eno<<endl;
			cout<<"Name="<<ename<<endl;
			cout<<"Salary="<<sal;
		}
};
int main()
{
	Emp ob;
	ob.accept();
	ob.disp();
}
