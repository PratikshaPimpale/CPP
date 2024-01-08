#include<iostream>
using namespace std;
class area
{
	public:
		float area;
		void rarea(float l,float b)
		{
			area=l*b;
			cout<<"Area of rectangle="<<area<<endl;
		}
		void carea(float r)
		{
			area=3.14*r*r;
			cout<<"Area of circle="<<area<<endl;
		}
		void tarea(float b,float h)
		{
			area=0.5*b*h;
			cout<<"Area of triangle="<<area;
		}
};
int main()
{
	area ob;
	float l,b,h,r;
	
	cout<<"Enter length & breadth:";
	cin>>l>>b;
	ob.rarea(l,b);
	
	cout<<"Enter radius:";
	cin>>r;
	ob.carea(r);
	
	cout<<"Enter base & height:";
	cin>>b>>h;
	ob.tarea(b,h);
}
