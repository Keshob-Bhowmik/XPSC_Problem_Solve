#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool Possible(vector<ll> v,ll n,ll d,ll c,ll k){
    if(k==0){
        return (v[0]*d>=c);
    }
    ll sum=0,gain=0;
    if(k>=n){
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
    }
    else{
        for(int i=0;i<k;i++){
            sum+=v[i];
        }
    }
 
    ll times=d/k;
 
    gain=times*sum;
 
    ll rem=d%k;
 
    if(rem>=n){
        for(int i=0;i<n;i++){
            gain+=v[i];
        }
    }
    else{
        for(int i=0;i<rem;i++){
            gain+=v[i];
        }
    }
 
    return (gain>=c);
}
int main()
{
    ll t; cin>>t;
    while(t--){
        ll n,c,d; cin>>n>>c>>d;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(), greater<ll>());
        ll sum=0;
        for(int i=0; i<min(n,d); i++){
            sum+=v[i];
        }
        if(sum>=c){
            cout<<"Infinity"<<'\n';
            continue;
        }
        ll ans=-1,low=0,high=(ll)1000000000000;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(Possible(v,n,d,c,mid+1)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
 
        if(ans==-1){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}