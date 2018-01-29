#include<iostream>
using namespace std;
class base
{
	protected:
		int a;
	public:
		base()
		{
			a=10;
		}
		virtual	void show()
		{
			cout<<"\nshow base a="<<a;
		}
		void display()
		{
			cout<<"\ndisplay base a="<<a;
		}
};
class derived:public base
{
	int b;
	public:
		derived()
		{
			b=20;
		}
		void show()
		{
			cout<<"\nshow derived b="<<b;
		}
		void display()
		{
			cout<<"\ndisplay derived b="<<b;
		}
};
int main()
{
	base *bptr;
	base b;
	bptr=&b;
	bptr->show();
	bptr->display();
	derived obj;
	bptr=&obj;
	bptr->show();
	bptr->display();
return 1;
}
		
		
