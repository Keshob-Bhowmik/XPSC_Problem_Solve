#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n),pre(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i==0) pre[i]=v[i];
        else pre[i]=pre[i-1]+v[i];
    }
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        int l=0,r=n-1,mid,ans;
        while(l<=r){
            mid=(l+r)/2;
            if(pre[mid]>=k){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<ans+1<<'\n';
    }
    return 0;
}