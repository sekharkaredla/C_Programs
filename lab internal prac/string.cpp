#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1("12345");
	string s2("abcde");
	cout<<s1+s2;
	string s3;
	s2.insert(2,s1);
	cout<<endl<<s2;
	s2.erase(2,5);
	cout<<endl<<s2;
	s2.replace(2,3,s1);
	cout<<endl<<s2;
}
