//https://www.codechef.com/problems/STICKBREAK
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        if(n%k)cout<<1<<"\n";
        else cout<<0<<"\n";
    }
    return 0 ;
}