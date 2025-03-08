#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
    int n;
    string s,f;
    cin>>n>>s>>f;

    int x=0,y=0;

    for(int i=0;i<n;i++){
        if(s[i]==f[i]) continue;
        else if(s[i]=='1') x++;
        else if(f[i]=='1') y++;
    }
    
    cout<<max(x,y)<<'\n';
    }
}