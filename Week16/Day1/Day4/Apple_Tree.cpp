#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxN=2e5+5;
vector<int> adj[maxN];
vector<ll> cnt(maxN);

void dfs(int v,int parent){
    if(adj[v].size()==1 && adj[v][0]==parent){
        cnt[v]=1;
        return;
    }
    for(auto x:adj[v]){
        if(x!=parent){
            dfs(x,v);
            cnt[v]+=cnt[x];
        }
    }
}


int main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    for(int i=0;i<=n;i++){
        adj[i].clear();
        cnt[i]=0;
    }
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0);
    int q; cin>>q;
    while(q--){
        int x,y; cin>>x>>y;

        ll total=cnt[x]*cnt[y];
        
        cout<<total<<'\n';
    }
    }
}