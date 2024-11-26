#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s,s1;
        cin>>s;
        s1=s;
        reverse(s1.begin(),s1.end());
        if(s<=s1) cout<<s<<'\n';
        else cout<<s1.append(s)<<'\n';
    }
    return 0;
}