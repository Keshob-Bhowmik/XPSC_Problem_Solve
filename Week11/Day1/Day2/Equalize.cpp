#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        set<int> s;
        vector<int> v;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            v.push_back(x);
        }

    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    int l=0, r=0;
    int ans=0;
    int k;
    while(r<v.size())
    {
        k=abs(v[l]-v[r]);
        if(k<=n-1)
        {
            // cout<<l<<" "<<r<<'\n';
            ans=r-l+1;
            // cout<<"v"<<" "<<ans<<'\n';
        }
        else
        {
            l++;
        }
        r++;
    }
    cout<<ans<<'\n';
    }
    return 0;
}
//prothomei ekta observation hocche equal bante hole subtraction must be less then or eqaul to n-1. karon permutation a kunu distinct value nai tai sub n er shoman hoile ta achieve kora possible na.