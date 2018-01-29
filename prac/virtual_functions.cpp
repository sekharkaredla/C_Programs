#include<iostream>
using namespace std;
class base
{
	public:
		void tell()
		{
			cout<<"\ntell base";
		}
	virtual void show()
		{
			cout<<"\nshow base";
		}
};
class derived:public base
{
	public:
		void tell()
		{
			cout<<"\ntell derived";
		}
		void show()
		{
			cout<<"\nshow derived";
		}
};
int main()
{
	base *ptr;base B;derived D;
	ptr=&B;
	cout<<"\npointer towards base class";
	ptr->tell();
	ptr->show();
	ptr=&D;
	cout<<"\npointer towards derived class";
	ptr->tell();
	ptr->show();
return 1;
}
