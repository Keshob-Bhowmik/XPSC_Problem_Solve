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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,ll> mp;
    ll cnt=0;
    for(int i=0;i<n;i++){
        cnt+=mp[v[i]-i];
        mp[v[i]-i]++;
    }
    cout<<cnt<<'\n';
    }
}