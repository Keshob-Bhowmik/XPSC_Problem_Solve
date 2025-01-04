#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int mx1=INT_MAX,mx2=0;
        int c=0;
        bool f1=false, f2=false;
        vector<int> ans,ans1;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]<=v[i+1])
            {
                ans.push_back(v[i]);
            }
            else{
                ans.push_back(v[i]);
                c=i+1;
            }
        }
        for(int i=c; i<n; i++)
        {
            ans1.push_back(v[i]);
        }
       for(int i=0; i<c; i++)
       {
            ans1.push_back(ans[i]);
       }
       if(is_sorted(ans1.begin(), ans1.end()))
       {
            cout<<"Yes"<<'\n';
       }
       else 
       {
        cout<<"No"<<'\n';
       }
    }
    return 0;
}