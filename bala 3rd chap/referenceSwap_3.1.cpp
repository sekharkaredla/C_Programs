#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
        int t=x;
        x=y;
        y=t;
}
int main()
{
        cout<<"enter two numbers : ";
        int a,b;
        cin>>a>>b;
        swap(a,b);
        cout<<"after swapping : "<<a<<" "<<b;
return 1;
}
