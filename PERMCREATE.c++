//https://www.codechef.com/problems/PERMCREATE
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<4)cout<<-1<<"\n";
        else if(n==4)cout<<3<<" "<<1<<" "<<4<<" "<<2<<" ";
        else{
        int i=1;
        int j=2;
        while(i<=n)
        {
            cout<<i<<" ";
            i+=2;
        }
        while(j<=n)
        {
            cout<<j<<" ";
            j+=2;
        }
        }
    }
    return 0;
}