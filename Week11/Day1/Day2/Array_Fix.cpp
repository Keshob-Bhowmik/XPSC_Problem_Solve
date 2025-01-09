#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        vector<int> v2;
        bool flag = false;
        v2.push_back(v[n-1]);
        int c=v2.front();
        for(int i=n-2; i>=0; i--)
        {
            if(v[i]>c)
            {
                if(v[i]>=10)
                {
                    int first = v[i]/10;
                    int last = v[i]%10;
                    v2.push_back(last);
                    v2.push_back(first);
                    c=v2.back();
                }
                else{
                    v2.push_back(v[i]);
                    c=v2.back();
                }
            }
            else{
                v2.push_back(v[i]);
                c=v2.back();
            }
        }
        // for(auto value:v2)
        // {
        //     cout<<value<<" ";
        // }
        reverse(v2.begin(),v2.end());
        if(is_sorted(v2.begin(),v2.end()))
        {
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}