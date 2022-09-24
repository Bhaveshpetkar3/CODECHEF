#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int max=INT_MIN;
        int r=9999999;
        int hsh[r]={-1};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            hsh[a[i]]++;
        }
        for(int z=0;z<n;z++)
        {
            if(hsh[a[z]]>max)max=hsh[a[z]];
        }
        if(max<=n/2+1)
        {
            cout<<"yes"<<"\n";
        }
        else cout<<"no"<<"\n";

    }
    return 0;
}