#include<iostream>
using namespace std;
int main()
{
	int rem,rev,n;
	cout<<"Enter number: ";
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	cout<<"Reverse="<<rev;
}
