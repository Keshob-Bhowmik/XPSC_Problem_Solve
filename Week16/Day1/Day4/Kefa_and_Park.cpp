#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxN=2e5+5;
vector<int> adj[maxN];
vector<int> v(maxN);


int limit,ans;

void dfs(int u,int parent,int cnt){
    if(v[u]==1){
        cnt++;
        if(cnt>limit) return;
    }
    else cnt=0;

    if(adj[u].size()==1 && adj[u][0]==parent){
        
        if(cnt>limit){
            return;
        } 
        else{
            ans++;
            return;
        }
    }

    for(auto x:adj[u]){
        if(x!=parent){
            dfs(x,u,cnt);
        }
    }
}


int main(){
    int n; cin>>n>>limit;

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ans=0;
    dfs(1,0,0);

    cout<<ans<<'\n';
}
