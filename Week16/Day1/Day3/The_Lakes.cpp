#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxN=1005;
vector<vector<int>> v(maxN, vector<int>(maxN));
vector<vector<bool>> vis(maxN, vector<bool>(maxN));
vector<pair<int,int>> d={{0,1},{0,-1},{1,0},{-1,0}};

int cnt,n,m;

bool valid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m) return false;
    else return true;
}
void dfs(int si,int sj){
    cnt+=v[si][sj];
    vis[si][sj]=true;
    for(int i=0;i<4;i++){
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(valid(ci,cj) && vis[ci][cj]==false && v[ci][cj]!=0){
            dfs(ci,cj);
        }
    }
}


int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                vis[i][j]=false;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]!=0 && vis[i][j]==false){
                    cnt=0;
                    dfs(i,j);
                    ans=max(cnt,ans);
                }
            }
        }
        cout<<ans<<'\n';
    }
}