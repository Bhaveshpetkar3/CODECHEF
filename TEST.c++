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
        int a[n];
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++)
        {
         cin>>a[i];
         mp[a[i]] += 1;
        }
        int count=0;
       for (auto it = mp.begin(); it != mp.end(); it++) {
        if ((*it).second > 1)
            count += (*it).second-1;
    }
        
    
    //cout<<count;
    cout<<count<<"\n";
    }
	// your code goes here
	return 0;
}
