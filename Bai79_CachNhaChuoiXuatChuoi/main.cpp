#include <iostream>
#include <stdio.h>

using namespace std;
/*Để nhập dữ liệu cho biến Chuỗi, ta dùng hàm gets():
char *gets(char *s);
Hàm gets() đọc các ký tự từ bàn phím vào trong mảng trỏ đến bởi s
cho đến khi nhấn Enter. Ký tự null sẽ được đặt sau ký tự cuối cùng của Chuỗi nhập vào trong mảng
không dùng cin
để khong bị ngắt khi gặp khoảng trắng
dùng gets(), hoặc cin.getline() thay hàm cin thông thường
Xuất chuối có thể dùng puts(const char*s) hoặc
cout
cout<<s;
*/

int main()
{
    char str1[25];
    cout<<"Moi ban nhap chuoi:";
    gets(str1);
    cout<<"Chuoi sau khi ban nhap:\n";
    puts(str1);
    char *str2=new char[25];
    cout<<"Moi ban nhap chuoi:";
    gets(str2);
    cout<<"Chuoi sau khi nhap:\n";
    puts(str2);
    char str3[255];
    cout<<"Moi thim nhap 1 chuoi:";
    cin.getline(str3,255);
    cout<<"Chuoi sau khi ban nhap";
    cout<<str3<<endl;
    return 0;
}
