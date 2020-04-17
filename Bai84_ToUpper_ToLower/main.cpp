#include <iostream>
#include <stdio.h>
#include <string.h>
/*
Chuyển ký tự thương sang ký tự hoa
toupper(int ch);
Chuyển ký tự hoa sang ký tự thường
tolower(int ch);
*/

using namespace std;

int main()
{
    char str1[]="OBAMA hahaaha ali33";
    int n1=strlen(str1);
    for(int i=0;i<n1;i++)
    {
        char c=str1[i];
        putchar(toupper(c));
    }
    cout<<"\n";
    char str2[]="OBAMA HAHAHA ALI33";
    int n2=strlen(str2);
    for(int i=0;i<n2;i++)
    {
        char c=str2[i];
        putchar(tolower(c));
    }
    return 0;
}
