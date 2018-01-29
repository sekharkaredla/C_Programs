#include<iostream>
using namespace std;
class grandparent
{
	protected:
		int a;	
};
class parent1:public virtual grandparent
{
	protected:
		int p1;
};
class parent2:virtual public grandparent  //if virtual is not there ambiguity will be there
{
	protected:
		int p2;
};
class child:public parent1,public parent2
{
	int c;
	public:
		void geta(int n)
		{
			a=n;
		}	
		void showa()
		{
			cout<<endl<<"a is : "<<a;
		}
};
int main()
{
	child obj;
	obj.geta(10);
	obj.showa();
return 1;
}
