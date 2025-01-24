#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    bool flag=true;
    while(x--){
        if(n<=(10*y)){
            cout<<"YES"<<'\n';
            flag=false;
            break;
        }
        n/=2;
        n+=10;
    }
    if(!flag){
        continue;
    }
    n-=(10*y);
    
    if(n>0) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
    }
}