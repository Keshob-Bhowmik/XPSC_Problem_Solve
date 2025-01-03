#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) 
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q; cin>>q;
    while(q--){
        int key1,key2; cin>>key1>>key2;
        int l1=0,r1=n-1,mid1,ans1=n;
        while(l1<=r1){
            mid1=(l1+r1)/2;
            if(v[mid1]>=key1){
                ans1=mid1;
                r1=mid1-1;
            }
            else l1=mid1+1;
        }
        int l2=0,r2=n-1,mid2,ans2=-1;
        while(l2<=r2){
            mid2=(l2+r2)/2;
            if(v[mid2]<=key2){
                ans2=mid2;
                l2=mid2+1;
            }
            else r2=mid2-1;
        }
        if((ans1>ans2) || (ans1==n || ans2==-1)) cout<<0<<" ";
        else cout<<ans2-ans1+1<<" ";
    }
    return 0;
}