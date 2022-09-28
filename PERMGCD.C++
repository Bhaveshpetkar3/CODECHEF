//https://www.codechef.com/problems/PERMGCD
#include<bits/stdc++.h>
using namespace std;
void perm(int n,int x)
{
    if(x<n)
    {
        cout<<-1<<"\n";
        return ;
    }
    int t=(x-(n-1));
    cout<<t<<" ";
    for(int i=1;i<=n;i++)
    {
        if(i==t)continue;
        cout<<i<<" ";
    }
    cout<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        perm(n,x);
    }
    return 0;
}