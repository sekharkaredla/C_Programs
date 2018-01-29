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
		/*virtual */void put()
		{
			cout<<"\nputbase A : "<<a;
		}
	 	virtual void show()
		{
			cout<<"\nshowbase A : "<<a;
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
		void put()
		{
			cout<<"\nputderived B : "<<b;	
		}
		void show()
		{
			cout<<"\nshowderived B : "<<b;
		}
};
int main()
{
	base *bptr;
	base B;derived D;
	bptr=&B;
	bptr->put();
	bptr->show();
	bptr=&D;
	bptr->put();
	bptr->show();
return 1;
}
