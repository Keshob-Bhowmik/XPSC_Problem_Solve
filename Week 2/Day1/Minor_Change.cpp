#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    ll count = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=t[i])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}