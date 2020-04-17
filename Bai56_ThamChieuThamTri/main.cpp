#include <iostream>

using namespace std;
void ham1(int x);
void ham2(int &x);
int main()
{
    int x=5;
    cout<<"x truoc khi vao ham 1 = "<<x<<endl;
    ham1(x);//Tuyen tham tri gia tri ben ngoai ham khong thay doi
    cout<<"\nx sau khi vao ham 1 = "<<x<<endl;
    x=5;
    cout<<"x truoc khi vao ham 2 = "<<x<<endl;
    ham2(x);
    cout<<"\nx sau khi vao ham 2 = "<<x<<endl;

    return 0;
}
void ham1(int x)//Ham truyen tham tri,x tham so thuc
{
    x=10;
    cout<<"x trong ham 1 = "<<x;


}
void ham2(int &x)//Ham truyen tham chieu, x la tham so hinh thuc
{
    x=10;
    cout<<"x trong ham 2 = "<<x;
}
