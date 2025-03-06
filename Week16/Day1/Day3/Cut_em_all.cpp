#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxN=1e5+5;
vector<int> g[maxN];
vector<int> cnt(maxN);    
int ans=0;
void dfs(int u,int parent){
    cnt[u]=1;
    for(auto v:g[u]){
        if(v==parent) 
        {
            continue;  
        }
        dfs(v,u);
        if(cnt[v]%2==0){    
            ans++;      
            cnt[v]=0;   
        }
        cnt[u]+=cnt[v]; 
    }
}


int main(){
    int n; cin>>n;

    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    if(n%2==1){
        cout<<-1<<'\n';
        return 0;
    }

    if(n==2){
        cout<<0<<'\n';
        return 0;
    }

    dfs(1,-1);  
    cout<<ans<<'\n';
}
