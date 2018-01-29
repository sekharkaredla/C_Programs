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
class B:public A
{
        protected:
        int n;
        public:
        B()
        {}
        B(int a,int b):A(a)
        {
        n=b;
        }
        void shown()
        {
        cout<<"\nN : "<<n;
        }
};
class C:public B
{
        protected:
        int k;
        public:
        C()
        {}
        C(int a,int b,int c):B(a,b)
        {
        k=c;
        }
        void showk()
        {
        cout<<"\nK : "<<k;
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
