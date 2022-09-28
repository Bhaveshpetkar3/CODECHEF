#include <bits/stdc++.h>
using namespace std;
void solve(long long int n, long long int x){
    vector <long long int> intprm(n);
    for(int i=1; i<=n;i++){
        	intprm[i] = i;
    }
    if(x<n || x>(n+(n-1))){
        cout<<"-1";
    }
    //else if(n==1 && x==1){
        //cout<<"1";
    //}
    else{
    for(int i=1; i<=n;i++){
       
       if(x==(n+i)){
          swap(intprm[1],intprm[i+1]);
          
      }
    }
    for(int i=1; i<=n;i++){
        cout<<intprm[i]<<" ";
    }
  }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n, x;
	    cin>>n>>x;
	    solve(n, x);
	    cout<<endl;
	}
	return 0;
}