#include<iostream>
using namespace std;
void area(float b,float h)
{
	float area=0.5*b*h;
	cout<<"Area of triangle="<<area<<endl;
}
void area(float r)
{
	float area=3.14*r*r;
	cout<<"Area of circle="<<area<<endl;
}
void area(double l,double w)
{
	double area=l*w;
	cout<<"Area of rectangle="<<area<<endl;
}
int main()
{
	float h,r,b;
	double l,w;
	cout<<"Enter base and height:";
	cin>>b>>h;
	area(b,h);
	
	cout<<"Enter length & width:";
	cin>>l>>w;
	area(l,w);
	
	cout<<"Enter radius:";
	cin>>r;
	area(r);
}
