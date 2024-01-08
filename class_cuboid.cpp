#include<iostream>
using namespace std;
class cuboid
{
	public:
		float l,b,h;
	void setvalues(float l1,float b1, float h1)
	{
		l=l1;
		b=b1;
		h=h1;
	}
	void getvalues()
	{
		cout<<"\nLength="<<l;
		cout<<"\nBreadth="<<b;
		cout<<"\nHeight="<<h;
	}
	inline float volume()
	{
		return(l*b*h);
	}
	inline float surface_area()
	{
		return(2*(l*b)+(l*h)+(b*h));
	}
}ob;
int main()
{
	float l,b,h;
	cout<<"Enter length, breadth, height:";
	cin>>l>>b>>h;
	ob.setvalues(l,b,h);
	ob.getvalues();
	cout<<"\nVolume of cuboid="<<ob.volume();
	cout<<"\nSurface area of cuboid="<<ob.surface_area();
}
