#include<iostream>
using namespace std;
class product
{
	public:
		int pid,qty,cnt;
		float price;
		void accept()
		{
			static int c;
			cout<<"enter product id, quantity, price:";
			cin>>pid>>qty>>price;
			c++;
			cnt=c;
		}
		void disp()
		{
			cout<<"product id="<<pid<<endl;
			cout<<"Product count="<<cnt<<endl;
		}
}ob,ob1,ob2;
int main()
{
	ob.accept();
	ob1.accept();
	ob2.accept();
	 
	ob.disp();
	ob1.disp();
	ob2.disp();
}
