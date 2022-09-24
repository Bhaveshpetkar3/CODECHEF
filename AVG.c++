//https://www.codechef.com/problems/AVG
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,v,sum=0;
        cin>>n>>k>>v;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(((v*(n+k)-sum)%k==0) && ((v*(n+k)-sum)/k)>0)cout<<((v*(n+k)-sum)/k)<<"\n";
        else {
            cout<<-1<<"\n";
        }
    }
    return 0;
}