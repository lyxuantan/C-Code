#include <iostream>

using namespace std;
int fib(int n);
void xuatdayfib(int n);

int main()
{
    int n=8;
    cout<<fib(n)<<endl;
    xuatdayfib(n);
    return 0;
}
int fib(int n)
{
    if(n<=2) return 1;
    return fib(n-1)+fib(n-2);
}
void xuatdayfib(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<fib(i)<<" ";
    }
}
