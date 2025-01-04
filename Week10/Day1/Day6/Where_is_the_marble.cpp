#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    int k=1;
    while(n>0 && q>0){
        cin>>n>>q;
        if(n==0 && q==0)
        {
            break;
        }
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(),v.end());
        cout<<"CASE# "<<k<<":"<<'\n';
        for(int i=0; i<q; i++)
        {
            int key; cin>>key;
            int l=0, r=n-1, ans=-1, mid;
            while(l<=r){
                mid=l+(r-l)/2;
                if(key==v[mid])
                {
                    ans=mid;
                    r=mid-1;
                }
                else if(key<v[mid]){
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            if(ans==-1)
            {
                cout<<key<<" not found"<<'\n';
            }
            else
            {
                cout<<key<<" found at "<<ans+1<<'\n';
            }
        }
        k++;
    }
    return 0;
}