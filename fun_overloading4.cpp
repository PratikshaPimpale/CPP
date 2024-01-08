#include<iostream>
using namespace std;
void area(float r,float l)
{
	float area=3.14*r*r+3.14*r*l;
	cout<<"Area of cone="<<area<<endl;
}
void area(float r)
{
	float area=4*3.14*r*r;
	cout<<"Area of sphere="<<area<<endl;
}
void area(double r)
{
	double area=3.14*r*r;
	cout<<"Area of circle="<<area<<endl;
}
int main()
{
	float r,l;
	double radius;
	cout<<"Enter radius & length:";
	cin>>r>>l;
	area(r,l);
	
	cout<<"Enter radius:";
	cin>>r;
	area(r);
	
	cout<<"Enter radius:";
	cin>>radius;
	area(radius);
}
