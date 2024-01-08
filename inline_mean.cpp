#include<iostream>
using namespace std;
inline int mean(int a,int b,int c)
{
	return(a<b)?(a<c?a:c):(b<c?b:c);
}
inline int median(int a,int b,int c)
{
	return b;
}
inline int mode(int a,int b,int c)
{
	return(a+b+c)/3;
}
int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers:";
	cin>>a>>b>>c;
	cout<<"\nMean="<<mean(a,b,c);
	cout<<"\nMedian="<<median(a,b,c);
	cout<<"\nMode="<<mode(a,b,c);
}
