#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        vector<ll> v(k);
        for(int i=0; i<k; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        auto ok=[&](ll saved_mice){
            ll sum=0;
            for(int i=0; i<saved_mice; i++){
                sum+=(n-v[i]);
            }
            return sum<n;
        };
        int l=1,r=k;
        int mid,ans;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}