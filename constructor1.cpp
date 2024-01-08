#include<iostream>
using namespace std;
class date
{
	public:
		int dd,mm,yy;
		date()		//default constructor
		{
			cout<<"enter date month year: ";
			cin>>dd>>mm>>yy;
		}
		date(int dd,int mm,int yy)		//parameterize constructor
		{
			this->dd=dd;
			this->mm=mm;
			this->yy=yy;
		}
		void disp()
		{
			switch(mm)
			{
				case 1:cout<<"\nDate= "<<dd <<"-" <<"Jan" <<"-" <<yy;
						break;
				case 2:cout<<"\nDate= "<<dd <<"-" <<"Feb" <<"-" <<yy;
						break;
				case 3:cout<<"\nDate= "<<dd <<"-" <<"Mar" <<"-" <<yy;
						break;
				case 4:cout<<"\nDate= "<<dd <<"-" <<"Apr" <<"-" <<yy;
						break;
				case 5:cout<<"\nDate= "<<dd <<"-" <<"May" <<"-" <<yy;
						break;
				case 6:cout<<"\nDate= "<<dd <<"-" <<"Jun" <<"-" <<yy;
						break;
				case 7:cout<<"\nDate= "<<dd <<"-" <<"Jul" <<"-" <<yy;
						break;
				case 8:cout<<"\nDate= "<<dd <<"-" <<"Aug" <<"-" <<yy;
						break;
				case 9:cout<<"\nDate= "<<dd <<"-" <<"Sep" <<"-" <<yy;
						break;
				case 10:cout<<"\nDate= "<<dd <<"-" <<"Oct" <<"-" <<yy;
						break;
				case 11:cout<<"\nDate= "<<dd <<"-" <<"Nov" <<"-" <<yy;
						break;
				case 12:cout<<"\nDate= "<<dd <<"-" <<"Dec" <<"-" <<yy;
						break;
			}
		}
};
int main()
{
	date ob;
	ob.disp();
	
	date ob1(22,9,2024);
	ob1.disp();
}
