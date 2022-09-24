#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    pair<int, int> p[n+1];
	    for(int i=1; i<=n; i++){
	        p[i]={i,i};
	        cout<<p[i].first<<" "<<p[i].second<<"\n";
	    }
	    if(n<4){
	        cout<<-1<<endl;
	    }
	    else if(n==4){
	        cout<<3<<" "<<1<<" "<<4<<" "<<2<<" ";
	    }
	    else{
	        int range;
	        if(n%2){
	            range=(n/2)+1;
                //cout<<range;
	        }
	        else{
	            range=(n/2);
                //cout<<range;
	        }
	        for(int i=1;i<=range;i++){
	            cout<<p[i].first<<" "<<p[range+i-1].second<<" ";
	        }
	        
	        
	    }
	    cout<<endl;
	}
	return 0;
}
//1 3 5 7 2 4 6