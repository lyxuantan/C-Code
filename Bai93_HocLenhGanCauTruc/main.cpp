#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;


struct Book
{
    char title[50];
    char author[50];
    int pages;
    float price;
};



int main()
{
    Book b;
    cout<<"Nhap ten sach:";
    gets(b.title);
    cout<<"Nhap tac gia:";
    gets(b.author);
    cout<<"Nhap so trang:";
    cin>>b.pages;
    cout<<"Nhap Gia:";
    cin>>b.price;


    Book a=b;
    cout<<"Ten sach="<<a.title<<endl;
    cout<<"Tac gia="<<a.author<<endl;
    cout<<"So Trang="<<a.pages<<endl;
    cout<<"Ten Sach="<<a.price<<endl;
    a.price=999;
    cout<<"Gia cua b.price="<<b.price<<endl;
    return 0;
}
