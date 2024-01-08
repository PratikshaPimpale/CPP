#include<iostream>
using namespace std;
class emp
{
	public:
		int eno;
		char ename[20];
		float sal;
		emp();
		void disp()
		{
			cout<<"Emp no="<<eno<<endl;
			cout<<"Emp name="<<ename<<endl;
			cout<<"Emp salary="<<sal<<endl;
		}
};
emp :: emp()
{
	cout<<"Enter emp no name salary: ";
	cin>>eno>>ename>>sal;
}
int main()
{
	emp ob;
	ob.disp();
}
