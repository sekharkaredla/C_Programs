#include<iostream>
using namespace std;
class arsak
{
	static int c;
	public:
		arsak()
		{
			cout<<"\nconstructor working ....";
			c++;
			cout<<"\n "<<c;
		}
		~arsak();
		void dispc();
};
arsak::~arsak()
{
	cout<<"\ndestructor working ....";
	c--;
	cout<<"\n "<<c;
}
void arsak::dispc()
{
	cout<<"\ncount presently is : "<<c;
}
int arsak::c;
int main()
{
	arsak a;
	a.dispc();
	goto p;
	p:
	{
		arsak b,c;	
		c.dispc();
	}
return 1;
}
