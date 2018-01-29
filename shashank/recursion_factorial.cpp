#include<iostream>
using namespace std;
class fact
{
        int n,f;
        public:
        int getdata()
        {
                cout<<"enter a number : ";
                cin>>n;f=1;return n;
        }
        int fact1(int n)
        {
        if(n==1)
        return f;
        else
        return n*fact1(n-1);
        }
};
int main()
{
        fact n;int k;
        k=n.getdata();
        int f1=n.fact1(k);
        cout<<"the factorial is "<<f1;
return 1;
}