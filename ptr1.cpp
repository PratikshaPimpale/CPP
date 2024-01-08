#include<iostream>
using namespace std;
int main()
{
	int n,i;
	float *a;
	cout<<"Enter limit";
	cin>>n;
	a=new float[n];
	
	cout<<"Enter n numbers:";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	cout<<"Display=";
	for(i=0;i<n;i=i+2)
	cout<<"\t"<<a[i];
}
