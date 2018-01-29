#include<iostream>
using namespace std;
class num
{
        int n;
        public:
        void getdata()
        {
        cout<<"enter a number : ";
        cin>>n;
        }
        void palin()
        {
        int t,s=0,r;t=n;
        while(n!=0)
        {
        r=n%10;
        s=s*10+r;
        n=n/10;
        }
        if(s==t)
        cout<<"palindrome";
        else
        cout<<"not palindrome";
        }
};
int main()
{
        num s;
        s.getdata();
        s.palin();
return 1;
}