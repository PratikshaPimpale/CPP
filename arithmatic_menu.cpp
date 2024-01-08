#include<iostream>
using namespace std;
class demo
{
	public:
		inline int add(int a,int b)
		{
			return(a+b);
		}
		inline int sub(int a,int b)
		{
			return(a-b);
		}
		inline int mul(int a,int b)
		{
			return(a*b);
		}
		inline int div(int a,int b)
		{
			return(a/b);
		}
};
int main()
{
	demo ob;
	int a,b,ch;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	do
	{
		cout<<"\n1-addition \n2-substraction \n3-multiplication \n4-division";
		cout<<"\nEnter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"Addition="<<ob.add(a,b);
					break;
			case 2:cout<<"Substraction="<<ob.sub(a,b);
					break;
			case 3:cout<<"Multiplication="<<ob.mul(a,b);
					break;
			case 4:cout<<"Division="<<ob.div(a,b);
					break;
			default:cout<<"invalid choice...";
		}
	}while(ch<5);
}
