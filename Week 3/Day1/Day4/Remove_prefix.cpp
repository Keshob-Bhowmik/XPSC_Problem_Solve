#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int ans=0;
        for(int i=v.size()-1; i>=0; i--){
            mp[v[i]]++;
            if(mp[v[i]]>1){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}