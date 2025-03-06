#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    bool flag=false;
    for(int i=1;i<=n;i++){
        if(v[1]!=v[i]){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<'\n';
        int city=-1;
        for(int i=2;i<=n;i++){
            if(v[1]!=v[i]){
                cout<<1<<" "<<i<<'\n';
                city=i;
            }
        }
        for(int i=2;i<=n;i++){
            if(v[1]==v[i]){
                cout<<city<<" "<<i<<'\n';
            }
        }
    }
    else cout<<"NO"<<'\n';
    }
}