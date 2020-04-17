#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;


struct SinhVien
{
    int ma;
    char ten[255];
};
void NhapMang(SinhVien dsSV[],int siso);
void XuatMang(SinhVien dsSV[],int siso);
int main()
{
    int siso=3;
    SinhVien dsSV[siso];
    NhapMang(dsSV,siso);
    XuatMang(dsSV,siso);

    cout << "Hello world!" << endl;
    return 0;
}
void NhapMang(SinhVien dsSV[],int siso)
{
    for(int i=0;i<siso;i++)
    {
        cout<<"Nhap sinh vien thu "<<i<<"\n";
        cout<<"Nhap ma:";
        cin>>dsSV[i].ma;
        cout<<"Nhap ten:";
        cin.ignore();
        gets(dsSV[i].ten);

    }
}
void XuatMang(SinhVien dsSV[],int siso)
{
    for(int i=0;i<siso;i++)
    {

        cout<<dsSV[i].ma<<"\t"<<dsSV[i].ten<<endl;

    }
}
