#include<iostream>
using namespace std;
inline int max(int a,int b)
{
	return(a>b?a:b);
}
inline int min(int a,int b)
{
	return(a<b?a:b);
}
int main()
{
	int a,b;
	cout<<"Enter 2 numbers:";
	cin>>a>>b;
	cout<<"Maximum num="<<max(a,b)<<endl;
	cout<<"Minimum num="<<min(a,b);
}
