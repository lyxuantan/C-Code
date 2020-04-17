#include <iostream>
#include <math.h>

using namespace std;
int ChuVi(int a,int b,int c);
double DienTich(int a,int b,int c);
bool KiemTra(int a,int b,int c);



int main()
{
    cout << "Nhap 3 Canh Tam Giac"<<endl;
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(KiemTra(a,b,c))
    {
        int cv=ChuVi(a,b,c);
        cout<<"Chu Vi = "<<cv;
        double dt=DienTich(a,b,c);
        cout<<"DienTich = "<<dt;
    }
    else
    {
        cout<<"Tam giac Khong Hop Le"<<endl;

    }

    return 0;
}
int ChuVi(int a,int b,int c)
{

    return a+b+c;
}
double DienTich(int a,int b,int c)
{

    double p=ChuVi(a,b,c)/2.0;
    double dt=sqrt(p*(p-a)*(p-b)*(p-c));
    return dt;


}
bool KiemTra(int a,int b,int c)
{
    if(a<=0 || b<=0 || c<=0 ||(a+b)<=c ||(a+c)<=b||(b+c)<=a)
    {
        return false;
    }
    return true;

}
