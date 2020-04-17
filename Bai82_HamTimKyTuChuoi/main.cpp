#include <iostream>
#include <string.h>
#include <stdio.h>
/*strchr(s1,ch):Trả về con trỏ đến vị trí xuất hiện đầu tiên của ký tựu ch
trong chuỗi s1
strstr(s1,s2):Trả về con trỏ đến vị trí xuất hiện dầu tiên của chuỗi
s2 trong s1.
*/

using namespace std;

int main()
{
    char str1[25];
    strcpy(str1,"Hello");
    char *p=strchr(str1,'l');
    if(p!=NULL)
    {

        cout<<"Tim thay 'l' o vi tri ="<<p-str1<<endl;

    }
    else
    {
        cout<<"Khong tim thay 'l' trong chuoi "<<endl;
    }
    char str2[250];
    strcpy(str2,"Quanh nam buon ban o non song, bat ca o song");
    char *p2=strstr(str2,"song");
    if(p2==NULL)
    {
        cout<<"Khong thay \"song\" trong chuoi\n";

    }
    else
    {

        cout<<"Thay \"song\" o vi tri="<<p2-str2<<"\n";
    }


    return 0;
}
