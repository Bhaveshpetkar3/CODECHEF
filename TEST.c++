//https://codeforces.com/contest/144/problem/A
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
        vector <int> g1;
        vector <int> g2;
        for(int i=0;i<n;i++)
        {
            int h;
            cin>>h;
            g1.push_back(h);
            g2.push_back(h);
        }
        sort(g1.begin(),g1.end(),greater<char>());
        int max=g1.begin();
        int min=g1.end();
        int size=g2.size();
        int maxloc,minloc,flag1=0,flag2=0;
        for(int i=0;i<size;i++)
        {
            if(flag1==0)
            {
            if(g2[i]==max)maxloc=g2[i];
            flag1=1;
            }
            if(flag2==0)
            {
            if(g2[i]==mmin)minloc=g2[i];
            flag2=1;
            }
        }
        int no_of_swaps=maxloc+(n-minloc-1);
        if(maxloc<minloc)cout<<no_of_swaps<<"\n";
        else cout<<no_of_swaps-1<<"\n";

    }
    return 0;
}