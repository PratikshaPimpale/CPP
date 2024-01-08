#include<iostream>
using namespace std;
inline float diameter(float r)
{
	return(2*r);
}
inline float circum(float r)
{
	return(2*3.14*r);
}
inline float area(float r)
{
	return(3.14*r*r);
}
int main()
{
	float r;
	cout<<"Enter radius of circle:";
	cin>>r;
	cout<<"Diameter of circle="<<diameter(r)<<endl;
	cout<<"Circumferance of circle="<<circum(r)<<endl;
	cout<<"Circle of circle="<<area(r);
}
