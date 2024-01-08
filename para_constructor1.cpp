#include<iostream>
#include<string.h>
using namespace std;
class emp
{
	public:
		int eno;
		char ename[20];
		float sal;
		
		emp(int eno,char ename[20], float sal);
		
		void disp()
		{
			cout<<"Emp no="<<eno<<endl;
			cout<<"Emp name="<<ename<<endl;
			cout<<"Emp salary="<<sal<<endl;
		}
};
emp :: emp(int eno,char ename[20], float sal)
		{
			this->eno=eno;
			strcpy(this->ename,ename);
			this->sal=sal;
		}
		
int main()
{
	int eno;
	char ename[20];
	float sal;
	
	cout<<"Enter emp no name salary: ";
	cin>>eno>>ename>>sal;
	
	emp ob(eno,ename,sal);
	ob.disp();
}
