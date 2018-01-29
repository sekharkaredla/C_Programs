#include<iostream>
using namespace std;
class shape
{
	protected:
		float a,b;
	public:
		void getdata()
		{
			cout<<"\nanter the two dimensions : ";
			cin>>a>>b;
		}
		virtual float area()=0;
};
class triangle:public shape
{
	public:
		float area();
};
float triangle::area()
{
	return 0.5*a*b;
}
class rectangle:public shape
{
	public:
		float area();
};
float rectangle::area()
{
	return a*b;
}
int main()
{
	/*tri*/rectangle obj;
	obj.getdata();
	cout<<"\nthe area of is : "<<obj.area();
	return 1;
}
