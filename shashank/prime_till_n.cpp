#include<iostream>
using namespace std;
class num
{
        int n,i,r,j,flag;
        public:
        void getdata()
        {
                cout<<"enter a number :";
                cin>>n;
        }
        void loop()
        {
                for(i=1;i<=n;i++)
                if(prime(i)==1)
                cout<<"  "<<i;
        }
        int prime(int i)
        {flag=1;
                for(j=2;j<i;j++)
                {
                        if(i%j==0)
                        {
                                flag=0;break;
                        }
                        return flag;
                }
        }
};
int main()
        {
                num s;
                s.getdata();
                s.loop();
                return 1;
        }