#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void keshob(){
    ll n,k;
    cin>>n>>k;
    if(n==1 && k==1){
        cout<<0<<'\n';
        return;
    }
    auto ok=[&](ll x){
        ll a=(x*(x+1))/2;
        ll b=n-x;
        if((a-b)<k) return -1;
        else if((a-b)>k) return 1;
        else return 0;
    };
    ll l=0,r=n,mid,ans;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)==0){
            ans=n-mid;
            break;
        }
        else if(ok(mid)==1){
            r=mid-1;
        }
        else if(ok(mid)==-1){
            l=mid+1;
        }
    }
    cout<<ans<<'\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    t=1;
    while(t--){
        keshob();
    }
}