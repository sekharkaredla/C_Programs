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
		B(int n,int m):A(n)  //sending first one up ,,, assigning the last one to b
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
		P(int a,int b,int k):B(a,b) //sending first two up ,,,, assigning the last one to c
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
