#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string a;
        cin>>a;
        int l=0, r=n-1, ans=n;
        while(l<=r){
            if(a[l]==a[r]){
                break;
            } else{
                ans-=2;
                l++; r--;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}