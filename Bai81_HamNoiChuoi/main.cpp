#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
/*
Nỗi chuỗi s2 vào cuối chuỗi s1
strcat(s1,s2)
Nối n ký tự đầu tiên của chuỗi s2 vào chuỗi s1
strncat(char s1[],chả s2[],int n)

*/
int main()
{
    char str1[25],str2[25];
    strcpy(str1,"Obama");
    strcpy(str2,"ali33");
    strcat(str1,str2);
    puts(str1);
    char ho[25],ten[25],hovaten[50];
    cout<<"Nhap ho:";
    gets(ho);
    cout<<"Nhap ten:";
    gets(ten);
    strcpy(hovaten,"");

    strcat(hovaten,ho);
    strcat(hovaten," ");
    strcat(hovaten,ten);
    puts(hovaten);
    char str3[25],str4[25];
    strcpy(str3,"To be ");
    strcpy(str4,"Or Not To Be");
    strncat(str3,str4,6);
    cout<<"\nChuoi sau khi noi 1 phan:\n";
    puts(str3);
    return 0;
}
