#include<bits/stdc++.h>
using namespace std;
int main()
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
        int max=g1[0];//cout<<max;
        
        
        int min=g1[n-1];//cout<<min;
        int maxloc,minloc,flag1=0,flag2=0;
        for(int i=0;i<n;i++)
        {
            
            if(g2[i]==max){
            maxloc=i;
            
            
            break;
            }
           
            
        }
        for(int i=n-1;i>0;i--)
        {
             if(g2[i]==min){minloc=i;
             break;}
        }
        //cout<<maxloc;
        int no_of_swaps=maxloc+(n-minloc-1);
        if(maxloc<minloc)cout<<no_of_swaps<<"\n";
        else cout<<no_of_swaps-1<<"\n";

    
    return 0;
}