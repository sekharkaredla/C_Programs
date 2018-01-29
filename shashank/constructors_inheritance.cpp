#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
	public:
		A()
		{}
		A(int n)
		{
			a=n;
		}			
};
class B:public A
{
	protected:
		int b;
	public:
		B()
		{}
		B(int n,int m):A(n)
		{
			b=m;
		}
};
class P:public B
{
	protected:
		int c;
	public:
		P()
		{}
		P(int a,int b,int k):B(a,b)
		{
			c=k;
		}
		void show()
		{
			cout<<"\n a,b,c = "<<a<<" "<<b<<" "<<c;
		}
};
int main()
{
	P obj(5,10,15);
	obj.show();
}
