#include<iostream>
using namespace std;
int main()
{
	int i,n,a,b,c;
	cout<<"Enter number: ";
	cin>>n;
	for(i=2;i<n;i++)
	{
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
	}
}
