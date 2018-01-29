#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		void geta(int n)
		{
			a=n;
		}
		void showa()
		{
			cout<<endl<<"a is : "<<a;
		}
};
class B
{
	protected:
		int b;
		void getb(int m)
		{
			b=m;
		}
		void showb()
		{
			cout<<endl<<"b is : "<<b;
		}
};
class P:protected A,protected B
{
	int ab;
	public:
		void mul(int a,int b)
		{
			geta(a);
			getb(b);
			ab=a*b;
		}
		void display()
		{
			showa();
			showb();
			cout<<endl<<"a*b is : "<<ab;
		}
};
int main()
{
	P obj;
	obj.mul(5,10);
	obj.display();
return 1;
}
