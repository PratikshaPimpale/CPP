#include<iostream>
using namespace std;
int main()
{
	int rem,rev,n,t;
	cout<<"Enter number: ";
	cin>>n;
	t=n;
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if(t==rev)
		cout<<"palindrome number";
	else
		cout<<"not palindrome number";		
}
