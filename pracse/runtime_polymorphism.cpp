#include<iostream>
#include<cstring>
using namespace std;
class media
{
	protected:
		char *name;
		int e;
	public:
		media()
		{
			name=new char[1];
		}
		media(char *p,int r)
		{
			name=new char[(strlen(p)+1)];
			strcpy(name,p);
			e=r;
		}
		virtual void show()=0;//pure virtual function
};
class book:public media
{
	int page;
	public:
		book()
		{
			page=0;
		}
		book(char *p,int r,int m):media(p,r)
		{
			page=m;
		}
		void show()
		{
			cout<<"\nbook name : "<<name;
			cout<<"\nedition number : "<<e;
			cout<<"\nno of pages : "<<page;
		}
};
class tape:public media
{
	float time;
	public:
		tape()
		{
			time=0;
		}
		tape(char *p,int r,float m):media(p,r)
		{
			time=m;
		}
		void show()
		{
			cout<<"\ntape name : "<<name;
			cout<<"\nedition number : "<<e;
			cout<<"\ntime : "<<time;
		}
};
int main()
{
	media *ptr;
	book obj1("sherlock",6,436);
	tape obj2("inception",2,456);
	ptr=&obj1;
	ptr->show();
	ptr=&obj2;
	ptr->show();
return 1;
}
