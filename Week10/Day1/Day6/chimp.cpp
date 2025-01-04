#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; 
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int q; cin>>q;
    vector<int> qury(q);
    for(int i=0; i<q; i++)
    {
        cin>>qury[i];
    }
    for(int i=0; i<q; i++)
    {
        int key=qury[i];
        int l1=0, l2=0;
        int r1=n-1, r2=n-1;
        int ans1=-1, ans2=n;
        int mid1,mid2;
        while(l1<=r1){
            mid1=l1+(r1-l1)/2;
            // cout<<key<<" "<<v[mid1]<<'\n';
            if(key>v[mid1])
            {
                ans1=mid1;
                l1=mid1+1;
            }
            else
            {
                r1=mid1-1;
            }
        }
        if(ans1==-1) cout<<"X"<<" ";
        else cout<<v[ans1]<<" ";
        while(l2<=r2){
            mid2=l2+(r2-l2)/2;
            if(key<v[mid2]){
                ans2=mid2;
                r2=mid2-1;
            }
            else{
                l2=mid2+1;
            }
        }
        if(ans2==n) cout<<"X"<<'\n';
        else cout<<v[ans2]<<'\n';
        // cout<<ans1<<'\n';
    }
    return 0;
}