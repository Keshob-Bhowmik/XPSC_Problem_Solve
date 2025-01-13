#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        ll sum=n*(2*k+(n-1))/2;
        ll l=1, r=n; 
        ll ans=INT_MAX;
        ll mid;
        while(l<=r){
             mid=l+(r-l)/2;
            ll left_sum=mid*(2*k+(mid-1))/2;
            ll right_sum=abs(sum-left_sum);
            ll main_diff=abs(left_sum-right_sum);
            ans=min(ans,main_diff);
            if(left_sum<right_sum){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
            // cout<<sum<<" "<<left_sum<<" "<<right_sum<<'\n';
        }
           cout<<ans<<'\n';
        
    }
    return 0;
}