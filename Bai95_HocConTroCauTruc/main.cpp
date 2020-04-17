#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
/*
C/C++ cho phép dùng con trỏ với các cấu trúc như với bất kỳ kiểu dữ liệu nào của biến
Cú pháp khai báo con trỏ cấu trúc giống như các loại con trỏ khác
Dạng tổng quát để khai   báo con trỏ cấu trúc

structureName *structurePointers
Và cúng sắp phải cấp phát bộ nhớ sử dụng (new) , cũng dùng -> để truy suất

*/

struct SinhVien
{

    int ma;
    char ten[255];
};
int main()
{
    SinhVien teo;
    teo.ma=113;
    strcpy(teo.ten,"Teo");
    cout<<"Thon tin cua teo:\n";
    cout<<teo.ma<<"\t"<<teo.ten<<endl;
    SinhVien *pTeo=&teo;
    cout<<"Thon tin cua teo theo con Tro:\n";
    cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;
    pTeo->ma=103;
    strcpy(pTeo->ten,"Teo 2");
    cout<<"Thon tin cua teo sau khi con tro thay doi gia tri:\n";
    cout<<teo.ma<<"\t"<<teo.ten<<endl;

    teo.ma=203;
    strcpy(teo.ten,"Teo 203");
    cout<<"Thong tin cua teo theo con tro:\n:;
    cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;
    SinhVien *pTy;
    pTy=new SinhVien;
    pTy->ma=114;
    strcpy(pTy->ten,"Ty");
    cout<<"Thong Tin Cua Ty:\n";
    cout<<pTy->ma<<"\t"<<pTy->ten<<endl;

    return 0;
}
