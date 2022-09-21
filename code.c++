#include<iostream>
using namespace std;

int fact(int n)
{
    if(n>0)
    {
        return fact(n-1)*n;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int a=fact(n);
    cout<<a;
    return 0;
}