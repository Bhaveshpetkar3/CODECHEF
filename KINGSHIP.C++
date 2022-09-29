#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    vector <long long int> boo;
    int n;cin>>n;
    int min=INT_MAX;
    int indicator;
    long long int cost=0;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        boo.push_back(y);
        if(min>y)
        {
        min=y;
        indicator=i;
        }
    }
    //cout<<min<<" "<<indicator;
    for(int i=0;i<n;i++)
    {
        if(indicator==i)continue;
        cost+=min*boo[i];
    }
    cout<<cost<<"\n";
    }
return 0;
}