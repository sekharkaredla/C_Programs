//function overloading including string
#include<iostream>
#include<string.h>
using namespace std;
int add(int a,int b)
{
        return a+b;
}
float add(float a, float b)
{
        return a+b;
}
int add(int a,int b,int c)
{
        return a+b+c;
}
void add(char *p,char *q)
{
        int l1,l2;
        l1=strlen(p);
        l2=strlen(q);
        int i;
        for(i=l1;i<=(l1+l2);i++)
        p[i]=q[i-l1];
}
int main()
{
        int a,b,c,r;float a1,b1,r1;char w1[100],w2[100];
        cout<<"enter two numbers : ";
        cin>>a>>b;
        r=add(a,b);
        cout<<"\n sum of two numbers : "<<r;
        cout<<"\n enter another number : ";
        cin>>c;
        r=add(a,b,c);
        cout<<"\n sum of three numbers : "<<r;
        cout<<"\n enter two floating point numbers : ";
        cin>>a1>>b1;
        r1=add(a1,b1);
        cout<<"\n sum of floating point numbers is : "<<r1;
        cout<<"\n enter two words : ";
        cin>>w1>>w2;
        add(w1,w2);
        cout<<"\n the addition of words is : "<<w1;
return 1;
}
