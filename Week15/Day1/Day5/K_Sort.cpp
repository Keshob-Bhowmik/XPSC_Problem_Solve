#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> v1(n);
    int mx=v[0];
    for(int i=0;i<n;i++){
        mx=max(mx,v[i]);
        v1[i]=mx;
    }
    int mx2=INT_MIN;
    ll need=0;
    for(int i=0;i<n;i++){
        need+=(v1[i]-v[i]);
        mx2=max(mx2,(v1[i]-v[i]));
    }
    cout<<need+mx2<<'\n';
    }
}