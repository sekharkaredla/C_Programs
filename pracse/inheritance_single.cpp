#include<iostream>
using namespace std;
class base
{
		int a;
	public:
		void seta()
		{
			a=10;
		}
		void showa()
		{
			cout<<"\nA is : "<<a;
		}
		
};
class derived:public base
{
	int b;
	public:
		void setb()
		{
			seta();
			b=20;
		}
		void show()
		{
			showa();
			cout<<"\nB is : "<<b;
		}
};
int main()
{
	derived obj;
	obj.setb();
	obj.show();
return 1;
}
