#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--){
    string s; cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int ans=INT_MAX;
    for(auto [x,y]:mp){
        int d=0;
        int largest=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]!=x){
                d++;
            }
            else{
                largest=max(largest,d);
                d=0;
            }
        }
        largest=max(largest,d);
        int op=0;
        while(largest>0){
            op++;
            largest/=2;
        }
        ans=min(op,ans);
    }
    cout<<ans<<'\n';
    }
}