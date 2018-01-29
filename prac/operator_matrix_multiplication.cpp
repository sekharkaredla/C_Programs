#include<iostream>
using namespace std;
class mat
{
        int **p;
        int m,n;
        public:
                mat()
                {}
                mat(int a,int b)
                {
                m=a;n=b;
                int i;
                p=new int*[m];
                for(i=0;i<m;i++)
                p[i]=new int[n];
                }
                void getdata()
                {
                        cout<<"\nenter the elements : \n";
                        int i,j;
                        for(i=0;i<m;i++)
                        {
                                for(j=0;j<n;j++)
                                {
                                        cin>>p[i][j];
                                }
                        }
                }
                void display();
                friend mat operator*(mat a,mat b);
};
void mat::display()
{
        cout<<"\nthe matrix is : \n";
        int i,j;
        for(i=0;i<m;i++)
        {
        cout<<endl;
                for(j=0;j<n;j++)
                {
                        cout<<" "<<p[i][j];
                }
        }
}
mat operator*(mat a,mat b)
{
        mat temp(a.m,b.n);
        int i,j,k;
        for(i=0;i<temp.m;i++)
        {
                for(j=0;j<temp.n;j++)
                {
                        temp.p[i][j]=0;
                        for(k=0;k<b.m;k++)
                        {
                                temp.p[i][j]+=a.p[i][k]*b.p[k][j];
                        }
                }
        }
return temp;
}
int main()
{
        cout<<"\nenter the order of the two matrices : ";
        int m,n,p,q;
        cin>>m>>n>>p>>q;
        mat a(m,n),b(p,q),c(m,q);
        a.getdata();
        b.getdata();
        c=a*b;
        c.display();
        return 1;
}


