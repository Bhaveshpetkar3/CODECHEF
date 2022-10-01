#include <bits/stdc++.h>
using namespace std;
#define const 1e9+7
int pow(int m, int n)
{
    if (n==0)
        return 1;
    if(n%2==0)
        return pow(m*m,n/2);
    return m*pow(m*m,(n-1)/2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long int val=pow(2,n);
        val-=1;
        val/=2;
        cout<<val+1<<"\n";
    }
    return 0;
}