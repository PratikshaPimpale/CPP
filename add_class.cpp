#include<iostream>
using namespace std;
class addition
{
	public:
		void add(int a,int b)
		{
			int c=a+b;
			cout<<"Addition="<<c<<endl;
		}
		void add(int a,int b,int c)
		{
			int d=a+b+c;
			cout<<"Addition="<<d<<endl;
		}
		void add(double a,double b)
		{
			double c=a+b;
			cout<<"Addition="<<c<<endl;
		}
}ob;
int main()
{
	ob.add(10,20);
	ob.add(22.40,55.66);
	ob.add(10,20,30);
}
