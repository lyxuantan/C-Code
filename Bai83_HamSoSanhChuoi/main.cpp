#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
/*
So sánh 2 chuỗi s1 và s2 theo nguyên tắc thứ tự từ điển. Phân viên
chữ hoa và thương.Trả về:
0:nếu s1 bằng s2.
>0:nếu s1 lớn hơn s2.
<0:nếu s1 nhỏ hơn s2
strcmp(char s1[],char s2[])

Hàm strncmp
int strncmp(const char*str1,const char *str2,size_tn)
n the maximum number of characters to be compared
*/

int main()
{
    char s1[25];
    char s2[25];
    strcpy(s1,"Xịn Chao!");
    strcpy(s2,"Obama!");
    int kq=strcmp(s1,s2);
    cout<<"Ket qua="<<kq<<endl;
    if(kq==0)
    {
        cout<<"s1==s2"<<endl;
    }
    else if(kq<0)
    {

        cout<<"s1<s2"<<endl;
    }
    else{
        cout<<"s1>s2"<<endl;
    }
    char s3[25],s4[25];
    strcpy(s3,"Cha me thoi doi an o bac");
    strcpy(s4,"Co chong ho hung cun nhu khong");
    int kq2=strncmp(s3,s4,3);
    if(kq2==0)
    {
        cout<<"s3==s4";

    }
    else if(kq2>0)
    {

        cout<<"s3>s4";

    }
    else
    {
        cout<<"s3<s4";
    }
    return 0;
}
