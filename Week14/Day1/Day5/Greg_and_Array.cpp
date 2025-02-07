#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(n+2);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<pair<pair<int,int>,ll>> store(m+2);
    for(int i=1;i<=m;i++){
        int l,r;
        ll d;
        cin>>l>>r>>d;
        store[i]={{l,r},d};
      
    }
    vector<ll> s(m+2);
    while(k--){
        int x,y;
        cin>>x>>y;
        s[x]++;
        s[y+1]--;
    }
    for(int i=1;i<=m;i++){
        s[i]=s[i-1]+s[i];
    }
    for(int i=1;i<=m;i++){
        (store[i].second)*=s[i];
    }
    vector<ll> v1(n+2);
    for(int i=1;i<=m;i++){
        v1[store[i].first.first]+=store[i].second;
        v1[store[i].first.second+1]-=store[i].second;
    }
    for(int i=1;i<v1.size();i++){
        v1[i]=v1[i-1]+v1[i];
    }

    for(int i=1;i<=n;i++){
        v[i]+=v1[i];
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}