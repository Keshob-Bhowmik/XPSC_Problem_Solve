#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,left,right;
        cin>>n>>left>>right;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll ans=0;
        for(int i=0;i<n;i++){
            auto it1 = lower_bound(v.begin()+i+1,v.end(),left-v[i]) - v.begin();
            auto it2 = upper_bound(v.begin()+i+1,v.end(),right-v[i]) - v.begin();
            int final_dis=it2-it1;
            ans+=final_dis;
        }
        cout<<ans<<'\n';
    }
    return 0;
}