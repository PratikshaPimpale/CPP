#include<iostream>
using namespace std;
class emp
{
	public:
		int eno;
		char ename[20];
		float sal;
		emp()
		{
			cout<<"Enter emp no name salary: ";
			cin>>eno>>ename>>sal;
		}
		void disp()
		{
			cout<<"Emp no="<<eno<<endl;
			cout<<"Emp name="<<ename<<endl;
			cout<<"Emp salary="<<sal<<endl;
		}
};
int main()
{
	emp ob;
	ob.disp();
}
