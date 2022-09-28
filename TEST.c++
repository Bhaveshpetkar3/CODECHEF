#include <iostream>
using namespace std;

 #define unum unsigned long long int 
 #define num long long int
 
 void solve(){
     int n,x;
     cin>>n>>x;
     if(x-n<0) cout<<"-1"<<endl;
     else if(x-n==0){
         for(int i=1;i<=n;i++){
             cout<<i<<" ";
         }
         cout<<endl;
     }
     else{
         cout<<x-n+1<<" ";
         for(int i=1;i<=x-n;i++){
             cout<<i<<" ";
         }
         for(int i=x-n+2;i<=n;i++){
             cout<<i<<" ";
         }
         cout<<endl;
     }
 }
 
int main() {
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}