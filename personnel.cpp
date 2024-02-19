#include<iostream>
using namespace std;

class Personnel
{
	public:
		char name[20],add[20],email[20],dob[20];
		void accept_p()
		{
			cout<<"Enter personnel name,address,email,DOB: ";
			cin>>name>>add>>email>>dob;	
		}
};

class Academic
{
	public:
		float SSC,HSC;
		char pclass[20];
		void accept_a()
		{
			cout<<"Enter SSC marks, HSC marks, Present class: ";
			cin>>SSC>>HSC>>pclass;	
		}
};

class Bio_data : public Personnel,public Academic
{
	public:
		void disp()
		{
			cout<<endl<<"Bio-data of personnel:";
			cout<<endl<<"Name="<<name;
			cout<<endl<<"Address="<<add;
			cout<<endl<<"Email-id="<<email;
			cout<<endl<<"DOB="<<dob;
			cout<<endl<<"SSC percentage="<<SSC;
			cout<<endl<<"HSC percentage="<<HSC;
			cout<<endl<<"Present class="<<pclass;
		}
};

int main()
{
	Bio_data ob;
	ob.accept_p();
	ob.accept_a();
	ob.disp();
}
