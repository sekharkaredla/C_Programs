#include<iostream>
using namespace std;
class A
{
	protected:
	int a;
	public:
		A()
		{
		}
		A(int n)
		{
			a=n;
		}
};
class B
{
	protected:
	int b;
	public:
		B()
		{
		}
		B(int n)
		{
			b=n;
		}
};
class P:public A,public B
{
	int c;
	public:
		P()
		{
		}
		P(int a,int b,int k):A(a),B(b)
		{
			c=k;
		}
		void show()
		{
			cout<<endl<<"a,b,c = "<<a<<" "<<b<<" "<<c;
		}
};
int main()
{
	P obj;
	obj=P(5,10,15);
	obj.show();
return 1;
}
