#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;
void NhapMaTran(int **&M,int n);//& thay doi gia tri **M
void XuatMaTran(int **M,int n);
int Max(int **M,int n);

int main()
{
    int **M;
    int n=5;
    NhapMaTran(M,n);
    cout<<"Ma Tran sau khi nhap:\n";
    XuatMaTran(M,n);
    int m=Max(M,n);
    cout<<"Max="<<m<<endl;
    return 0;
}
void NhapMaTran(int **&M,int n){
    srand(time(NULL));
    M=new int*[n];
    for(int i=0;i<n;i++)
        *(M+i)=new int[n];
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {

            *(*(M+i)+j)=-50+rand()%151;

        }
    }
}
void XuatMaTran(int **M,int n)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<*(*(M+i)+j)<<"\t";
        }
        cout<<endl;
    }
}
int Max(int **M,int n)
{
    int m=*(*(M+0)+0);
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(m<*(*(M+i)+j))
                m=*(*(M+i)+j);

        }
    }
    return m;
}
