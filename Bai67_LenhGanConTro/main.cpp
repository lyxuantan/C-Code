#include <iostream>

using namespace std;
/*Ta có thể dùng một con trỏ ở bên phải của câu lệnh gán (=) để gán giá trị của
1 con trỏ cho một con trỏ khác. ví dụ:
int x;
int *p1,*p2;
p1=&x;
p2=p1;

Chỉ có 2 phép toán số học ta có thể dùng trên con trỏ đó là cộng và trừ.
Giả sử p1 là một con trỏ nguyên với giá trij hiện tại là 2000.
Cũng giả sử rằng số nguyên chiếm 2 bytes bộ nhớ. Như vậy, sau khi thực hiện lệnh

p1++; thì p1 có giá trị là 2002 chứ không phải 2001. Tương tự , giả sử rằng số nguyên chiếm
2 bytes bộ nhớ. Như vậy, sau khi thực hiện lệnh p1--; thì p1 có giá trị là 1998 chứ không phải 1999
char thì +1

*/



int main()
{
    int a=20,b=15;
    int *pa,*pb,temp;
    pa=&a;
    pb=&b;
    temp=*pa;
    *pa=*pb;//khác pa=pb:nếu thế a và b cùng ra 15 cả 2 con trỏ pa và pb cùng quản lí 1 địa chỉ

    *pb=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"Dia chi cua con tro pa="<<pa<<endl;
    pa++;
    cout<<"Dia chi cua con tro pa="<<pa<<endl;


    return 0;
}
