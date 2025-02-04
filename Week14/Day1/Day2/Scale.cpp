#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    int p=n/k;
    vector<vector<char>> v(n,vector<char>(n)),v1(p,vector<char>(p));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i+=k){
        for(int j=0;j<n;j+=k){
            v1[i/k][j/k]=v[i][j];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<p;j++){
            cout<<v1[i][j];
        }
        cout<<'\n';
    }
    }
}