#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
	public:
		A()
		{}
		A(int m)
		{
			a=m;
		}
		void showa()
		{
			cout<<"\nA is : "<<a;
		}
};
class B:public A
{
	protected:
		int b;
	public:
		B()
		{}
		B(int m,int n):A(m)
		{
			b=n;
		}
		void showb()
		{
			cout<<"\nB is : "<<b;
		}
};
class C:public B
{
	int c;
	public:
		C()
		{}
		C(int p,int q,int r):B(p,q)
		{
			c=r;
		}
		void showc()
		{
			cout<<"\nC is : "<<c;
		}
};
int main()
{
	C obj;
	obj=C(10,20,30);
	obj.showa();
	obj.showb();
	obj.showc();
return 1;
}
