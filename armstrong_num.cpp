#include<iostream>
using namespace std;
int main()
{
	int n,sum,n1,rem;
	for(n=1;n<=500;n++)
	{
		sum=0;
		n1=n;
		while(n1>0)
		{
			rem=n1%10;
			sum=sum+(rem*rem*rem);
			n1=n1/10;	
		}	
		if(n==sum)
			cout<<"\nArmstrong number="<<n;
	}
}
