#include <iostream>

using namespace std;
/*
Có 2 toán tử con trỏ là * và &
Toán tử & là toán tử 1 ngôi mà trả về địa chỉ bộ nhớ của toán hạng của nó.(Toán tử 1 ngôi
chỉ yêu cầu 1 toán hạng).
Ví dụ:
int count;
int *m;
m=&count;
Lệnh m=&count đặt địa chỉ bộ nhớ của biến count vào con trỏ m .
Lệnh trên có thể phát biểu:"Con trỏ m nhận địa chỉ của biến count.".





Các toán tử giả sử biến count được cấp phát tại đại chỉ bố nhớ 2000 để lưu trữ giá trị của nó. Giả sử rằng
count có giá trị 100.Như vậy, tại địa chỉ bộ nhớ 2000 có chứa giá trị 100. Sau lệnh m=&count; được thực hiện
thì m sẽ có giá trị là 2000.
Toán tử con trỏ * là toán tử một ngôi trả về giá trị tại đải chỉ con trỏ trỏ đến
Ví dụ :q=*m;
Lấy giá trị tại địa chỉ mà m trỏ đến và đặt vào biến q. Như bậy q sẽ có giá trị là 100(là giá trị của biến count)
*/
int main()
{
    int count=100;
    int *m=&count;
    cout<<"Dia chi cua bien count="<<&count<<endl;
    cout<<"Gia tri cua bien count="<<count<<endl;
    cout<<"Dia chi cua con tro m= "<<m<<endl;
    cout<<"Gia tri cua con tro m dang tro toi="<<*m<<endl;
    int p=*m;
    cout<<"gia tri cua p="<<p<<endl;
    int *x=m;//con trỏ có thể trỏ đến 1 con trỏ khác
    cout<<"Dia chi cua con tro x= "<<x<<endl;
    cout<<"Gia tri cua con tro m dang tro toi="<<*x<<endl;

    *x=15;
    cout<<"Gia tri cua con tro m dang tro toi="<<*m<<endl;
    cout<<"Gia tri cua bien count="<<count<<endl;
    return 0;
}
