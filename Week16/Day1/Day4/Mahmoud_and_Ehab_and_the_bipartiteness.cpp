#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxN=1e5+5;
vector<int> g[maxN];
vector<bool> vis(maxN);
vector<ll> sets(2);


void dfs(int u,int v,int mark){
    vis[u]=true;
    sets[mark]++;
    for(auto value:g[u]){
        if(!vis[value]){
            dfs(value,u,!mark);
        }
    }
    
}


int main(){
    int n; cin>>n;

    for(int i=1;i<n;i++){
        int u,v; cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1,0,0);

    ll total =sets[0]*sets[1];

    total-=(n-1);
    
    cout<<total<<'\n';
}