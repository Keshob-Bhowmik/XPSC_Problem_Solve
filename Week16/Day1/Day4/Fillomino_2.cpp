#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxN=505;
vector<vector<int>> v(maxN, vector<int>(maxN));
vector<vector<bool>> vis(maxN, vector<bool>(maxN));
vector<int> d[maxN];

int n;

bool isValid(int i,int j){
    if(i>=n || j<0) return false;
    else return true;
}

void dfs(int x,int y,int val){
    if(d[val].size()==val) return;
    v[x][y]=val;
    vis[x][y]=true;
    d[val].push_back(val);
    if(isValid(x,y-1) && !vis[x][y-1]){
        dfs(x,y-1,val);
    }
    else if(isValid(x+1,y) && !vis[x+1][y]){
        dfs(x+1,y,val);
    }
}


int main(){
        cin>>n;

        for(int i=0;i<n;i++){
            fill(v[i].begin(),v[i].end(),-1);
            fill(vis[i].begin(),vis[i].end(),false);
        }

        vector<int> v1(n);

        for(int i=0;i<n;i++){
            cin>>v1[i];
        }

        for(int i=0;i<n;i++){
            int j=i;
            dfs(i,j,v1[i]);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]!=-1){
                    cout<<v[i][j]<<" ";
                }
                else cout<<" ";
            }


            cout<<'\n';
        }
    
}