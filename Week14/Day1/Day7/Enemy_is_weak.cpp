#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> sec;
    pbds<int> p;
    for(int i=n-1;i>=0;i--){
        sec.push_back(p.order_of_key(v[i]));
        p.insert(v[i]);
    }
    reverse(sec.begin(),sec.end());
    ll ans=0;
    pbds<int> p2;
    for(int i=0;i<n;i++){
        if(i==0){
            p2.insert(v[i]);
        }
        else{
            ll less=p2.order_of_key(v[i]);
            ll big=(1LL*p2.size())-less;
            ans+=(big*sec[i]*1LL);
            p2.insert(v[i]);
        }
    }
    cout<<ans<<'\n';
}
