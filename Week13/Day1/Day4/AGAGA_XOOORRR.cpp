#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int> v(n+1),v1(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    v1[0]=0;
    for(int i=1;i<=n;i++){
        v1[i]=(v1[i-1]^v[i]);
    }
    bool flag=false;
    for(int i=1;i<n;i++){
        int p=v1[i];
        int q=(v1[n]^v1[i]);
        if(p==q){
            cout<<"YES"<<'\n';
            return;
        }
    }
    for(int i=1;i<n-1;i++){
        int p=v1[i];
        for(int j=i+1;j<n;j++){
            int q=(v1[j]^v1[i]);
            int z=(v1[n]^v1[j]);
            if(p==q && q==z){
                cout<<"YES"<<'\n';
                return;
            }
        }
    }
    cout<<"NO"<<'\n';
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}