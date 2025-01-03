#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        vector<int> v(n);
        vector<ll> prefix(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i==0) prefix[i]=v[i];
            else prefix[i]=prefix[i-1]+v[i];
        }
        int MX=INT_MIN;
        vector<int> mx(n);
        for(int i=0;i<n;i++){
            MX=max(MX,v[i]);
            mx[i]=MX;
        } 
        while(q--){
            int k; cin>>k;
            int l=0,r=n-1,mid;
            ll ans=0;
            while(l<=r){
                mid=(l+r)/2;
                if(mx[mid]<=k){
                    ans=prefix[mid];
                    l=mid+1;
                }
                else r=mid-1;
            }
            cout<<ans<<" ";
        }
        cout<<'\n';
    }
    return 0;
}