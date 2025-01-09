#include<bits/stdc++.h>
using namespace std;
int main()
{

        string s1,s2; cin>>s1>>s2;
        int t=s1.size(), p=s2.size();
        vector<int> v(t);
        for(int i=0; i<t; i++){
            cin>>v[i];
            v[i]--;
        }
        bool found = false;
        auto ok=[&](int del){
            vector<bool> bad(t);
            for(int i=0; i<=del; i++){
                bad[v[i]]=true;
            }
            int j=0;
            for(int i=0; i<t; i++){
                if(!bad[i] && s1[i]==s2[j]){
                    j++;
                }
                if(j==p)
                {
                    found=true;
                    return true;
                }
            }
            return false;
        };
        int l=0, r=t-1;
        int ans=0, mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout << (found ? ans + 1 : ans) << '\n';
    return 0;
}