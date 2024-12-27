#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1);
        map<int,int> mp;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            mp[v[i]]=i;
        }
        int mx=INT_MIN;
        bool flag = false;
        for(auto it:mp){
            for(auto it2:mp){
                if(__gcd(it.first,it2.first)==1)
                {
                    mx=max(mx,it.second+it2.second);
                    flag = true;
                }
            }
        }
        if(!flag) cout<<-1<<'\n';
        else cout<<mx<<'\n';
    }
    return 0;
}