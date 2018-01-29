#include<iostream>
using namespace std;
int main()
{
        float u,sum;
        cout<<"enter the units : ";
        cin>>u;
        if(u<100)
        {
                sum=u*60;
        }
        else if(u>100&&u<=300)
        {
                sum=(100*60)+(u-100)*80;
        }
        else
        {
                sum=(100*60)+(200*80)+(u-300)*90;
        }
        sum=sum/100;
        cout<<"the bill amount is : "<<sum<<" rupees";
return 1;
}
