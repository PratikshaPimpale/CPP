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
			cout<<endl<<eno<<"\t"<<ename<<"\t"<<sal;
		}
};
int main()
{
	int n,i,pass;
	cout<<"Enter limit: ";
	cin>>n;
	Emp ob[n];
	cout<<"Enter n emp info:\n";
	for(i=0;i<n;i++)
	{
		ob[i].accept();
	}
	
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(ob[i].sal<ob[i+1].sal)
			{
				 Emp t=ob[i];
				ob[i]=ob[i+1];
				ob[i+1]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
		ob[i].disp();
}
