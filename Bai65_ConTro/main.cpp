#include <iostream>

using namespace std;



/* Khái niệm Con Trỏ:
Một con trỏ là 1 biến chứa một địa chỉ bộ nhớ. địa chỉ này là vị trí của một đối tượng khác
(thường là một biến) trong bộ nhớ. Nếu một biến chứa địa chỉ của một biến khác,
biến thứ nhất được gọi là trỏ đến biến thứ 2
*/
/*
DataType *PointerVariable
Cấp phát:
PointerVariable=new DataType;
Hủy bộ nhớ:
delete PointerVariable:
*/
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
    int *p;
    p=new int;// cap phat bo nho cho con tro p
    *p=100;//gan gia tri =100 tai o nho ma p dang tro toi
    cout<<"Dia chi tai con tro p="<<p<<endl;
    cout<<"Gia tri tai dia chi ma con tro p tro toi="<<*p<<endl;
    delete p;//bi loi memory leak neu khong thu hoi bo nho


    return 0;
}
