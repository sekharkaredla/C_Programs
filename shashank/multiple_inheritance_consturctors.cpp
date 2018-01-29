#include<iostream>
using namespace std;
class A
{
        protected:
        int m;
        public:
        A()
        {}
        A(int a)
        {m=a;}
        void showm()
        {
        cout<<"\nM : "<<m;
        }
};
class B
{
        protected:
        int n;
        public:
        B()
        {}
        B(int b)
        {n=b;}
        void shown()
        {
        cout<<"\nN is : "<<n;
        }
};
class C:public A,public B
{
        protected:
        int k;
        public:
        C()
        {}
        C(int a,int b,int c):A(a),B(b)
        {
        k=c;
        }
        void showk()
        {
        cout<<"\nK is : "<<k;
        }
};
int main()
{
        C obj(5,10,15);
        obj.showm();
        obj.shown();
        obj.showk();
return 1;
}
