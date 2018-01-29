#include<iostream>
using namespace std;
class complex1
{
	float real,imag;
	public:
		complex1()
		{
			real=imag=0;
		}
		complex1(float a,float b)
		{
			real=a;
			imag=b;
		}
		void display();
		complex1 operator +(complex1 m);
};
void complex1::display()
{
	cout<<"\n"<<real<<" + "<<imag<<"i"<<endl;
}
complex1 complex1::operator +(complex1 m)
{
	complex1 temp;
	temp.real=this->real+m.real;
	temp.imag=this->imag+m.imag;
	return temp;
}
int main()
{
	complex1 a,b;
	float p,q,r,s;
	cout<<"\nenter the real and imaginery part of first complex number : ";
	cin>>p>>q;
	cout<<"\nenter the real and imaginery part of second complex number : ";
	cin>>r>>s;
	a=complex1(p,q);
	b=complex1(r,s);
	complex1 c;
	c=a+b;
	cout<<"\nthe addition complex number is : ";
	c.display();
return 0;
}
