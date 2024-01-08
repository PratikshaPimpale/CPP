#include<iostream>
#include<string.h>
int n;
using namespace std;
class college
{
	public:
		int id,year;
		char uname[20],cname[20];
		
		void accept()
		{
			cout<<"Enter college id, college name, unversity, establish year: ";
			cin>>id>>cname>>uname>>year;
		}
		
		void disp(char univ[20])
		{
			for(int i=0;i<n;i++)
			{
				if(strcmp(ob[i].uname,univ)==0)
				{
					cout<<"college id="<<id<<endl;
					cout<<"college name="<<name<<endl;
					cout<<"university="<<uname<<endl;
					cout<<"Establish year="<<year<<endl;
				}
			}
		}
		
		void disp(int y)
		{
			for(int i=0;i<n;i++)
			{
				if(ob[i].year==y)
				{
					cout<<"college id="<<id<<endl;
					cout<<"college name="<<name<<endl;
					cout<<"university="<<uname<<endl;
					cout<<"Establish year="<<year<<endl;
				}
			}
		}
}ob[100];
int main()
{
	college obj;
	int i,y,ch;
	char univ[20];
	
	cout<<"Enter limit: ";
	cin>>n;
	
	for(i=0;i<n;i++)
		ob[i].accept();
		
	do
	{
		cout<<"1-disp univ-wise \n2-disp year-wise: ";
		cout<<"Enter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"Enter university:";
					cin>>univ;
					for(i=0;i<n;i++)
						obj[i].disp(univ);
					break;
			case 2:	cout<<"Enter year:";
					cin>>y;
					for(i=0;i<n;i++)
						obj[i].disp(y);
		}
	}while(ch<3);
	/*cout<<"Enter university:";
	cin>>univ;
	for(i=0;i<n;i++)
		ob[i].disp(univ);
		
	cout<<"Enter year:";
	cin>>y;
	for(i=0;i<n;i++)
		ob[i].disp(y);*/
}
