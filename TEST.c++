#include<bits/stdc++.h>
using namespace std;
int time(vector <int> &arr){
    pair <int, int> max = {0,0};
    pair <int, int> min= {101, 0};
    for(int i=0; i<arr.size();i++){
        if(max.first<arr[i]){
            max={arr[i], i};
        }
    }
    for(int i=arr.size()-1;i>=0;i--){
        if(min.first<arr[i]){
            min={arr[i],i};
        }
    }
    int ans= max.second+((arr.size()-1)-min.second);
    if(max.second>min.second){
        return ans-1;
    }
    else{
        return ans;
    }

}
int main(){
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int ans=time(arr);
    cout<<ans<<endl;
 return 0;

}