#include<iostream>
using namespace std;
void volume(float a)
{
	float v=a*a*a;
	cout<<"Volume of cube="<<v<<endl;
}
void volume(float r,float h)
{
	float v=3.14*r*r*h;
	cout<<"Volume of cylinder="<<v<<endl;
}
void volume(float l,float w,float h)
{
	float v=l*w*h;
	cout<<"Volume of rectangle="<<v<<endl;
}
int main()
{
	float l,w,h,r,s;
	cout<<"Enter side of cube:";
	cin>>s;
	volume(s);
	
	cout<<"Enter length,width,height of rectangle:";
	cin>>l>>w>>h;
	volume(l,w,h);
	
	cout<<"Enter radius & height of cylinder:";
	cin>>r>>h;
	volume(r,h);
}
