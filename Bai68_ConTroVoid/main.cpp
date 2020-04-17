#include <iostream>

using namespace std;


/*Con trỏ void là một loại con trỏ đặc biệt mà có thể trỏ đến bất kì kiểu dữ
liệu nào.Cú pháp khai báo con tro void như sau:
void *pointerVariable;
Nếu ta khai báo con trỏ void sau:
p=&a;
p=&f;
Tuy nhiên,tùy thuộc con trỏ void đang trỏ đến kiểu dữ liệu nào, ta phải ép về đúng
kiểu tương ứng khi dùng trong các biểu thức.
Ví dụ p đang trỏ đến biến nguyên a, để tăng giá trị của biến a lên 10 ta
phải dùng lệnh sau:(int*)*p+10;
Nếu p đang trỏ đến biến thực f, để tăng giá trị của biến f lên 10 ta phải dùng lệnh sau:(float*)*p+10;
Null chưa tồn tại trong bộ nhớ
*/

int main()
{
    int a=5;
    float f=5.5;
    int *pa=&a;
    float *pf=&f;
    void *p;
    p=&a;
    (*(int*)p)=10;
    cout<<"a="<<a<<endl;
    p=&f;
    (*(float*)p)=20.5;
    cout<<"f="<<f<<endl;
    int *y=new int;
    *y=113;
    cout<<"gia tri ma o nho ma y quan ly="<<*y<<endl;

    return 0;
}
