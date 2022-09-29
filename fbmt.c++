//https://www.codechef.com/problems/FBMT
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n == 0){
            cout<<"Draw"<<"\n";
            
        }
        else
        {
        string s,s1,s2;
        int countA=1;
        cin>>s;
        for(int i=0;i<n-1;i++)
        {
            
            cin>>s1;
            if(s1==s)countA++;
            else 
            {
                
                s2=s1;
            }
        }
        
        if(countA<n-countA)cout<<s2<<"\n";
        else if(countA>n-countA)cout<<s<<"\n";
        else cout<<"Draw"<<"\n";
        }
    }
    return 0;
}