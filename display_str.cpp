#include<iostream>
using namespace std;
class abc
{
	public:
		void display_str(char s1[100])
		{
			cout<<"String="<<"\""<<s1<<"\"";
		}
		void display_str(char s1[100],int n)
		{
			cout<<"\nString=";
			for(int i=0;i<n;i++)
				cout<<s1[i];
		}
		void display_str(char s1[100],int m,int n)
		{
			cout<<"\nString=";
			for(int i=m;i<n;i++)
				cout<<s1[i];
		}
};
int main()
{
	char s1[100];
	cout<<"Enter string:";
	cin>>s1;
	abc ob;
	ob.display_str(s1);
	ob.display_str(s1,5);
	ob.display_str(s1,5,9);
}
