#include <iostream>

using namespace std;

int main()
{
    int a[]={4,5,6,24,0,12};
    for(int i=0;i<6;i++)
    {

        cout<<a[i]<<"\t";
    }
    cout<<endl;
    int *p=a;
    for(int i=0;i<6;i++)
    {

        cout<<*(p+i)<<"\t";
    }
    *(p+3)=113;
    cout<<endl;
    for(int i=0;i<6;i++)
    {

        cout<<a[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<6;i++)
    {

        cout<<p[i]<<"\t";
    }
    return 0;
}
