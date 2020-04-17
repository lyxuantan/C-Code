#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
/*
Để sử dụng các hàm này, ta phải khai báo dòng lệnh sau:
#include<string.h>
Sao chép nội dung chuỗi nguồn vào chuỗi đích, nội dung của chuỗi đích
sẽ bị xóa
strcpy(char *đích, char *nguồn);

Chép n ký tự từ chuỗi nguồn sang chuỗi đích. Nếu chiều dài nguồn <n
 thì hàm sẽ điền khoảng trắng cho đủ n ký tự vào đích

strncpy(char *đích, char *nguồn,int n)

*/

int main()
{
    char str1[25],str2[25];
    cout<<"Nhap chuoi 1:";
    gets(str1);
    cout<<"Chuoi 2:";
    strcpy(str2,str1);
    cout<<str2<<endl;
    char str3[6];
    strncpy(str3,str1,4);
    cout<<"Chuoi str3="<<str3<<endl;



    return 0;
}
