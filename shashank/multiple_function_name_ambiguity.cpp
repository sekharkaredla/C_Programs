#include<iostream>
using namespace std;
class A
{
	protected:
	int a;
	public:
		A()
		{
			a=5;
		}
		void show()
		{
			cout<<"\na is : "<<a;
		}	
};
class B
{
	protected:
		int b;
	public:
		B()
		{
			b=10;
		}
		void show()
		{
			cout<<"\nb is : "<<b;
		}
};
class P:public A,public B
{
	int c;
	public:
		P()
		{
		c=a*b;	
		}
		void showc()
		{
			cout<<"\nc is : "<<c;
		}
};
int main()
{
	P obj;
	obj.show();
return 1;
}
