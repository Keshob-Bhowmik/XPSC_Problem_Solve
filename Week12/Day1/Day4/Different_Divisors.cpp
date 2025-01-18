#include<bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ek for(ll i=1; i<=n; i++)
#define shunno for(ll i=0; i<n; i++)
#define pb push_back
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
using namespace std;
const long long int maxN=1e6;
vector<ll> allprime;
// vector<ll> divisor[maxN];
vector<bool> prime(maxN, true);
void seive(){
    
    for(ll i=2; i*i<=maxN; i++){
        if(prime[i]){
            for(ll j=i+i; j<=maxN; j+=i){
                prime[j]=false;
            }
        }
    }
    for(ll i=0; i<maxN; i++){
        if(prime[i]){
            allprime.pb(i);
        }
    }
    // for(ll i=1; i<maxN; i++){
    //     for(ll j=i; j<maxN; j+=i){
    //         divisor[j].pb(i);
    //     }
    // }

}
int main()
{
    duronto;
    seive();
    int t; cin>>t;
    while(t--){
        ll d; cin>>d;
    // vector<ll> v(maxN);
    // ll first=1+d;
    // ll second, third;
    // cout<<1<<" ";
    // ll result=1;
    // ll first = *lower_bound(allprime.begin(),allprime.end(), 1+d);
    // ll second = *lower_bound(allprime.begin(), allprime.end(), first+d);
    // cout<<first*second<<'\n';
        ll l=1, r=allprime.size();
        ll ans1,mid1;
        while(l<=r){
            mid1=l+(r-l)/2;
            if(allprime[mid1]>=1+d){
                ans1=allprime[mid1];
                r=mid1-1;
            }
            else{
                l=mid1+1;
            }
        }
        ll l2=1, r2=allprime.size();
        ll ans2,mid2;
        while(l2<=r2){
            mid2=l2+(r2-l2)/2;
            if(allprime[mid2]>=ans1+d){
                ans2=allprime[mid2];
                r2=mid2-1;
            }
            else{
                l2=mid2+1;
            }
        }
        cout<<ans1*ans2<<'\n';
    }
    
    return 0;
}