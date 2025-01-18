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
        int n; cin>>n;
        vector<int> v;
        map<int,int> mp;
        for(int i=2; i<=n+1; i++){
            if(prime[i]){
                v.pb(1);
                mp[1]++;
            }
            else{
                v.pb(2);
                mp[2]++;
            }
        }
        cout<<mp.size()<<'\n';
        for(auto value:v){
            cout<<value<<" ";
        }
        cout<<'\n';
    
    return 0;
}