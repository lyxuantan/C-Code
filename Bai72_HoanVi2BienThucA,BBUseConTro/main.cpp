#include <iostream>

using namespace std;
void swap(double *&pa,double *&pb);
int main()
{
   double a=5.5;
   double b=6.5;
   swap(a,b);
   cout<<"a="<<a<<";b="<<b<<endl;
    return 0;
}
void swap(double *&pa,double *&pb)
{

    double temp=*pa;
    *pa=*pb;
    *pb=temp;
}
