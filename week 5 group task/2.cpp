#include<iostream>
using namespace std;
class complex
{
private:
	float real;
	float imag;
	public:
	void add(complex,complex);
	void sub(complex,complex);
	void mul(complex,complex);
	void divide(complex,complex);
	void display();
	void getdata(float,float);
};
void complex::add(complex x, complex y)
{
   this->real=x.real+y.real;
   this->imag=x.imag+y.imag;
}
void complex::sub(complex x, complex y)
{
   this->real=x.real-y.real;
   this->imag=x.imag-y.imag;
}
void complex::mul(complex x, complex y)
{
   this->real=(x.real*y.real)-(x.imag)*(y.imag);
   this->imag=(x.real*y.imag)+(y.real*x.imag);
}
void complex::divide(complex x, complex y)
{
   this->real=((x.real*y.real)+(x.imag)*(y.imag))/((y.real*y.real)+(y.imag*y.imag));
   this->imag=((y.real*x.imag)-(x.real*y.imag))/((y.real*y.real)+(y.imag*y.imag));
}
void complex::display()
{
	if(imag>0)
	cout<<real<<"+"<<imag<<"i\n";
	else
	cout<<real<<"-"<<imag<<"i\n";
}
void complex::getdata(float r,float i)
{
	real=r;
	imag=i;
}
int main()
{
	complex c1,c2,c3;
	float m,n;
	cout<<"\nenter the real and imaginery part of first complex no. : ";
	cin>>m>>n;
	c1.getdata(m,n);
	cout<<"\nenter the real and imaginery part of second complex no. : ";
	cin>>m>>n;
	c2.getdata(m,n);
	int ch;
	cout<<"\nenter 1 for addition\nenter 2 for subtraction\nenter 3 for subtraction\nenter 4 division :\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				c3.add(c1,c2);
			}break;
		case 2:
			{
				c3.sub(c1,c2);
			}break;
		case 3:
			{
				c3.mul(c1,c2);
			}break;
		case 4:
			{
				c3.divide(c1,c2);
			}break;
		default:cout<<"wrong choice ....";
	}
	cout<<"the output is : \n";
	c3.display();
	return 1;
}

