#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]=b[i];
    }
    for(auto [x,y]:mp){
        cout<<x<<" ";
    }
    cout<<'\n';
    for(auto [x,y]:mp){
        cout<<y<<" ";
    }
    cout<<'\n';
    }
}