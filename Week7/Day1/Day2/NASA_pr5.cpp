#include<bits/stdc++.h>
using namespace std;
const int B = (1LL << 15);
vector<int> allPalindrome;
bool isPalindrome(int x)
{
    string s=to_string(x);
    int len = s.size();
    for(int i=0; i<len/2; i++)
    {
        if(s[i]!=s[len-i-1]) 
        {
            return false;
        }
    }
    return true;
}
void markPalindrome()
{
    for(int i=0; i<B; i++)
    {
        if(isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}
int main()
{
    markPalindrome();
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n),cnt(B+1);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
        }
       long long ans=n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<allPalindrome.size(); j++)
            {
                int cur=(v[i]^allPalindrome[j]);
                ans+=cnt[cur];
            }
        }
        cout<<ans/2<<'\n';
    }
    return 0;
}
