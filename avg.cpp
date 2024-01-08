#include<iostream>
using namespace std;
void avg(float a,float b,float c)
{
	float avg=(a+b+c)/3;
	cout<<"Floating numbers average="<<avg;
}
void avg(int a,int b,int c)
{
	int avg=(a+b+c)/3;
	cout<<"Integer numbers average="<<avg<<endl;
}
int main()
{
	int a,b,c;
	float p,q,r;
	cout<<"Enter 3 integer numbers:";
	cin>>a>>b>>c;
	avg(a,b,c);
	cout<<"\nEnter 3 floating point numbers:";
	cin>>p>>q>>r;
	avg(p,q,r);
}
