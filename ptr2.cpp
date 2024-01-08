#include<iostream>
using namespace std;
int main()
{
	int n,i,*a;
	cout<<"Enter limit: ";
	cin>>n;
	a=new int[n];
	
	cout<<"Enter n numbers:";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	cout<<"Display Reverse=";
	for(i=n-1;i>=0;i--)
	cout<<"\t"<<a[i];
}
