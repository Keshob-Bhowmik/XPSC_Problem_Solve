#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int x=1;
        int count=0;
        for(int i=0; i<n; i++){
            if(v[i]==x)
            {
                count++;
                x++;
            }
        }
        if(count==n){
            cout<<0<<'\n';
        } else{
            count=n-count;
            int ans = ceil(1.0*count/k);
            cout<<ans<<'\n';
        }
    }
    return 0;
}