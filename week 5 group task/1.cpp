#include<iostream>
#include<stdlib.h>
using namespace std;
class matrix
{
        int m,n,p,q,**a,**b,m1,n1,**c;
        public:
                void getdata();
                void display();
                void add();
                void subtract();
                void multiply();
};
void matrix::getdata()
{
        cout<<"enter the order of the first matrix : ";
        cin>>m>>n;
        cout<<"enter the order of the second matrix : ";
        cin>>p>>q;
        a = new int *[m];
        for(int i = 0; i < m; ++i)
        a[i] = new int[n];
        b = new int*[p];
        for(int i = 0; i < p; ++i)
        b[i] = new int[q];
        int i,j;
        cout<<"enter the elements of the first matrix : \n";
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
        cout<<"enter the values of the second matrix : \n";
        for(i=0;i<p;i++)
        for(j=0;j<q;j++)
        cin>>b[i][j];
}
void matrix::display()
{
        int i,j;
        cout<<"the matrix is \n";
        for(i=0;i<m1;i++)
        {
        cout<<endl;
        for(j=0;j<n1;j++)
        cout<<c[i][j]<<" ";
        }
}
void matrix::add()
{
        if(m!=p||n!=q)
        {
        cout<<"wrong order : ";
        exit(-1);
        }
        int i,j;
        m1=m;n1=n;
        c = new int*[m1];
        for(int i = 0; i < m1; ++i)
        c[i] = new int[n1];
        for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
        c[i][j]=a[i][j]+b[i][j];
}
void matrix::subtract()
{
        if(m!=p||n!=q)
        {
        cout<<"wrong order : ";
        exit(-1);
        }
        int i,j;
        m1=m;n1=n;
        c = new int*[m1];
        for(int i = 0; i < m1; ++i)
        c[i] = new int[n1];
        for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
        c[i][j]=a[i][j]-b[i][j];
}
void matrix::multiply()
{
        if(n!=p)
        {
        cout<<"wrong order : ";
        exit(-1);
        }
        int i,j,k;
        m1=m;n1=q;
        c = new int*[m1];
        for(int i = 0; i < m1; ++i)
        c[i] = new int[n1];
        for(i=0;i<m1;i++)
        {
                for(j=0;j<n1;j++)
                {
                        c[i][j]=0;
                        for(k=0;k<n;k++)
                        c[i][j]+=a[i][k]*b[k][j];
                }
        }
}
int main()
{
        matrix s;
        s.getdata();
        int ch;
        cout<<"press 1 for addition , 2 for subtraction ,3 for multiplication , 4 for division ";
        cin>>ch;
        switch(ch)
        {
                case 1: s.add();s.display();break;
                case 2: s.subtract();s.display();break;
                case 3:s.multiply();s.display();break;
                default:cout<<"wrong choice ...";
        }
return 1;
}


