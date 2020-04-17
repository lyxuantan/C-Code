#include <iostream>
#include <math.h>

using namespace std;
void ptb2(int a,int b,int c);
int main()
{
    cout <<"5x^2+7x-12=0\n";
    ptb2(5,7,-12);
    return 0;
}

void ptb2(int a,int b,int c)
{
    if(a==0)
    {

        if(b==0 && c==0)
            cout<<"PT Vo So Nghiem";
        else if(b==0&& c!=0)
            cout<<"PT Vo Nghiem";
        else{
            double x=-c*1.0/b;
            cout<<"PT co 1 nghiem x="<<x<<endl;

        }
    }
    else
    {
        double delta=pow(b,2)-4*a*c;
        if(delta<0)
            cout<<"PT Vo Nghiem";
        else if(delta==0)
        {
            double x=-b/(2*a);
            cout<<"PT Co Nghiem Kep x1=x2="<<x<<endl;

        }
        else
        {
            double x1=(-b-sqrt(delta))/(2*a);
            double x2=(-b+sqrt(delta))/(2*a);
            cout<<"PT Co 2 Nghiem Phan Biet!";
            cout<<"\nx1="<<x1<<endl;
            cout<<"x2="<<x2<<endl;

        }
    }
}
