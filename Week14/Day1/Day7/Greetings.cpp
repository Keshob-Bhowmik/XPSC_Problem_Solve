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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            pq.push({x,y});
        }
        vector<int> v;
        while(!pq.empty()){
            auto x=pq.top();
            pq.pop();
            v.push_back(x.second);
        }
        pbds<int> p;
        ll g=0;
        for(int i=n-1;i>=0;i--){
            g+=p.order_of_key(v[i]);
            p.insert(v[i]);
        }
        cout<<g<<'\n';
    }
}