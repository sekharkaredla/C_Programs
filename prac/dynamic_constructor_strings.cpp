#include<iostream>
#include<cstring>
using namespace std;
class string1
{
	char *p;
	int l;
	public:
		string1()
		{
			l=0;
			p=new char[l+1];
		}
		string1(char *k)
		{
			l=strlen(k);
			p=new char[l+1];
			strcpy(p,k);
		}
		void display();
		void join(string1 &,string1 &);
};
void string1::display()
{
	cout<<"\n"<<p<<endl;
}
void string1::join(string1 &m,string1 &n)
{
	this->l=m.l+n.l;
	this->p=new char[this->l+2];
	strcpy(this->p,m.p);
	strcat(this->p," ");
	strcat(this->p,n.p);
}
int main()
{
	string1 s1,s2;
	s1=string1("Sekhar");
	s2=string1("Karedla");
	string1 s3;
	s3.join(s1,s2);
	s3.display();
return 1;
}

