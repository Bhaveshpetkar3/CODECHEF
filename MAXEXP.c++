#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1=0,c2=0;
        vector <char> g1;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {//cout<<s[i];
            int y=s[i];
            if(s[i]=='+')c1++;
            else if(s[i]=='-')c2++;
            else {g1.push_back(y);};
        }
        int sizee=g1.size();
        
        sort(g1.begin(),g1.end(),greater<char>());
        int b=sizee-(c1+c2);
        
        for(int i=0;i<b;i++)
        {
            cout<<g1.at(i);
        }
        for(int i=b;i<sizee;i++)
        {
            if(c1)
            {
                cout<<'+';
                c1--;
            }
            else if(c2)
            {
                cout<<'-';
                c2--;
            }
            cout<<g1.at(i);
        }
        cout<<"\n";

    }
    return 0;
}