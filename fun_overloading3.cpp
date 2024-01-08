#include<iostream>
using namespace std;
class sorting
{   public:
    void sort(int a[100],int n)
    {
	 int pass,i,t;
	 for(pass=0;pass<n;pass++)
	 {
	    for(i=0;i<n-pass;i++)
	    {
	      if(a[i]>a[i+1])
	      {
		t=a[i];
		 a[i]=a[i+1];
		 a[i+1]=t;
	      }
	    }
	 }
	 cout<<"Sorted Array=";
	 for(i=0;i<n;i++)
	 {
	    cout<<a[i]<<"\t";
	 }
}
   void sort(float a[100],int n)
  {
	  int pass,i;
	  float t;
	 for(pass=0;pass<n;pass++)
	 {
	    for(i=0;i<n-pass;i++)
	    {
	      if(a[i]>a[i+1])
	      {
		t=a[i];
		 a[i]=a[i+1];
		 a[i+1]=t;
	      }
	    }
	 }
	 cout<<"\nSorted Array=";
	 for(i=0;i<n;i++)
	 {
	    cout<<a[i]<<"\t";
	 }
       }

};
int main()
{
   sorting ob;
   int a[100],i,n=10;
   float b[100];
   cout<<"Enter values:";
   	for(i=0;i<n;i++)
   		cin>>a[i];
   ob.sort(a,10);
   
   cout<<"\nEnter values:";
   for(i=0;i<n;i++)
   		cin>>b[i];
   ob.sort(b,10);
}
