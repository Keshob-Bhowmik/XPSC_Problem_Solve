#include<bits/stdc++.h>
#define ll long long int
using namespace std;


const int maxN=1e5+5;
vector<int> adj[maxN];
vector<bool> vis(maxN);
vector<int> ans(maxN);
map<pair<int,int>,int> mp;


void dfs(int u,int val){
    vis[u]=true;
    for(auto value:adj[u]){
        if(!vis[value]){
            if(val==2){
                ans[mp[{value,u}]]=val;
                dfs(value,val+1);
            }
            else{
                ans[mp[{value,u}]]=val;
                dfs(value,val-1);
            }
        }
    }
}



int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0;i<=n;i++){
            adj[i].clear();
            vis[i]=false;
        }
        mp.clear();
        for(int i=1;i<n;i++){
            int u,v; cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            mp[{u,v}]=i;
            mp[{v,u}]=i;
        }
        bool flag = true;
        for(int i=1;i<=n;i++){
            if(adj[i].size()>2){
                cout<<-1<<'\n';
                flag=false;
                break;
            }
        }
    
        if(flag){
            for(int i=1;i<=n;i++){
                if(adj[i].size()==1){
                    dfs(i,2);
                    break;
                }
            }
            
            for(int i=1;i<n;i++){
                cout<<ans[i]<<" ";
            }
        }
        cout<<'\n';
    }
}