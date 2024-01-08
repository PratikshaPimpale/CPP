#include<iostream>
using namespace std;
class fraction
{
	public:
	int n,d;
	fraction(int n1,int d1)
	{
		n=n1;
		d=d1;
	}
	void add(fraction ob, fraction ob1)
	{
		n=ob.n + ob1.n;
		d=ob.d + ob1.d;
		cout<<"Addition = "<<n<<"/"<<d;
	}
};
int main()
{
	fraction ob(22,44);
	fraction ob1(55,11);
	
	ob.add(ob,ob1);
}
