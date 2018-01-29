#include<iostream>
#include<math.h>					//including math header file
using namespace std;
int main()						//main function
{
	float s,t,x;  int n=1;
	cout<<"\n Enter the value of x in degrees : ";
	cin>>x;
	x=x*(3.141/180);
	s=0;t=x;
	while(((s-sin(x))>-0.00001)&&(s-sin(x))<0.00001) 
	  {
		s=s+t;
		t=t*-1*x*x/(2*(n-1)*(2*n-1));
 		n++;
	  }
 	 cout<<"\n The original value of sinx is : "<<sin(x) <<"\n The obtained value of sinx is : "<<s;
	 cout<<"\n Obtained the solution in "<<n<< "iterations";
return 0;
}

