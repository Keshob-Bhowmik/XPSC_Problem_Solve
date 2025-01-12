#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    multiset<int> ml;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        ml.insert(x);
    }
        auto ok = [&](int k){
            multiset <int> m = ml;
            for(int i=1; i<=k; i++){
                if(m.empty()){ 
                    return false;
                }
                int x = k - i + 1;
                auto it = m.upper_bound(x);
 
                if(it == m.begin()){
                    return false;
                }
                m.erase(--it);
 
                if(!m.empty()){
                    int s = *m.begin();
                    m.erase(m.begin());
                    m.insert(s + x);
                }
            }
            return true;
        };
        int l=1, r=100;
        int ans=0, mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        } 
        cout<<ans<<'\n';
    }
    return 0;
}