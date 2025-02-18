#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') a++;
        else b++;
    }
    if(k==0 && b==n){
        cout<<1<<'\n';
        cout<<n<<" A"<<'\n';
        continue;
    }
    if(k==b){
        cout<<0<<'\n';
        continue;
    }
    if(k>b){
        int target=k-b;
        int cnt=0;
        int i;
        for(i=0;i<n;i++){
            if(s[i]=='A') cnt++;
            if(cnt==target) break;
        }
        cout<<1<<'\n';
        cout<<i+1<<" B"<<'\n';
    }
    else{
        int target=b-k;
        int cnt=0;
        int i;
        for(i=0;i<n;i++){
            if(s[i]=='B') cnt++;
            if(cnt==target) break;
        }
        cout<<1<<'\n';
        cout<<i+1<<" A"<<'\n';
    }
    }
}