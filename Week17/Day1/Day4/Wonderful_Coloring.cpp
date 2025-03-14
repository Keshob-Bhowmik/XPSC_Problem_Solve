#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    vector<int> v(n);
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]].push_back(i);
    }
  
    vector<int> indx;
    vector<int> ans(n);
    for(auto [value,y]:mp){
        int a=1;
        if(y.size()>=k){
            for(int i=0;i<k;i++){
                ans[y[i]]=a;
                a++;
            }
            for(int i=k;i<y.size();i++){
                ans[y[i]]=0;
            }
        }
        else{
            for(int i=0;i<y.size();i++){
                indx.push_back(y[i]);
            }
        }
    }
    int col=1;
    for(int i=0;i<indx.size()-(indx.size()%k);i++){
        if(col>k) col=1;
        ans[indx[i]]=col;
        col++;
    }
    for(int value:ans) cout<<value<<" ";
    cout<<'\n';
    }
}
