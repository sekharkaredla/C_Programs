#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void geta(int m)
		{
			a=m;
		}
		void showa()
		{
			cout<<endl<<"a is : "<<a;
		}
};
class B:public A
{
	int b;   //int a not inherited in B
	public:
		void getb(int n)
		{
			b=n;
		}
		void show_ab()
		{
			showa();
			cout<<endl<<"b is : "<<b;
		}
};
int main()
{
	B obj;
	obj.geta(5);
	obj.showa();   //int a is not inherited but showa function is inherited ....
	obj.getb(10);
	obj.show_ab();
}
