#include<iostream>
using namespace std;
template<class T>
class cmplx
{
	T a,b;
	public:
		cmplx()
		{}
		cmplx(T m,T n)
		{
			a=m;b=n;
		}
		void display()
		{
			if(b<0)
			cout<<"\ncomplex number is : "<<a<<"-"<<b<<"i";
			if(b>=0)
			cout<<"\ncomplex number is : "<<a<<"+"<<b<<"i";
		}
		void operator++()  //pre - increment   -- default
		{
		++a;
		++b;
		}
	 	void operator++(int)  //post increment
	 	{
		a++;
		b++;
		}
};

int main()
{
	cmplx <int>s1(5,6);
	s1++;
	s1.display();
	++s1;
	s1.display();
return 1;
}
