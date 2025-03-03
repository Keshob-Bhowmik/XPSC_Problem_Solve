#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        int n; cin>>n;
        vector<int> g[n+1];   
        vector<int> bad(n+1); 
        vector<int> v(n+1);   
        int root;
        for(int i=1;i<=n;i++){
            int p,c; cin>>p>>c;
            if(p!=-1) g[p].push_back(i);   
            else root=i;
            if(c==1){
                bad[p]++;
                v[i]=1;    
            }
        }

        vector<int> dlt;

        for(int i=1;i<=n;i++){
            if(i==root) continue;   
            if(g[i].size()==bad[i] && v[i]==1){
                dlt.push_back(i);
            }
        }
        
        if(dlt.size()==0) {
            cout<<-1<<'\n';
        }
        else{
            for(int value:dlt) cout<<value<<" ";
            cout<<'\n';
        }
}