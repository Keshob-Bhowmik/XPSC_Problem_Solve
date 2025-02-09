#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ln '\n'
#define cyes cout<<"YES"<<ln
#define cno cout<<"NO"<<ln
#define yes cout<<"Yes"<<ln
#define no cout<<"No"<<ln
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void keshob(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string r=s;
    reverse(r.begin(),r.end());
    map<char,vector<int>> pos_s,pos_r;
    for(int i=0;i<n;i++){
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }
    vector<int> permutation(n);
    for(char c='a';c<='z';c++){
        for(int i=0;i<pos_s[c].size();i++){
            permutation[pos_r[c][i]]=pos_s[c][i];
        }
    }
    pbds<int> p;
    ll ans=0;
    for(int i=n-1;i>=0;i--){
        ans+=p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    cout<<ans<<ln;
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