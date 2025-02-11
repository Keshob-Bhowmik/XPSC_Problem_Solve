#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    pbds<int> p;
    ll ans=0;
    for(int i=n-1;i>=0;i--){
        ans+=p.order_of_key(a[i]-b[i]);
        p.insert(b[i]-a[i]);
    }
    cout<<ans<<'\n';
}