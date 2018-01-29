#include<iostream>
#include<math.h>
using namespace std;
int main()
{
        int n,s=0;
        cout<<"enter the number of numbers : ";
        cin>>n;
        int *p=new int[n];
        int i;
        cout<<"enter "<<n<<" numbers : ";
        for(i=0;i<n;i++)
        {
                cin>>p[i];
                s=s+p[i];
        }
        float m,sd,v;
        m=(1.0/n)*s;
        float s1;
        for(i=0;i<n;i++)
        {
                s1=s1+((p[i]-m)*(p[i]-m));
        }
        sd=sqrt(s1);
        v=sd*sd;
        cout<<"\n\nvariance : "<<v<<"\nstandard deviation : "<<sd<<"\nmean : "<<m;
        return 1;
}
