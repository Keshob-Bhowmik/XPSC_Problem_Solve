#include<bits/stdc++.h>
using namespace std;
const int n = 1e6+1;
int main()
{
    string s; cin>>s;
    string s1="";
    map<char,int> mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    if(mp.size()==1)
    {
        cout<<s<<'\n';
        return 0;
    }
    int count_odd=0;
    for(auto &it:mp)
    {
        if((it.second%2)!=0) count_odd++;
    }
    if(count_odd>1)
    {
        cout<<"NO SOLUTION"<<'\n';
    }
    else if(count_odd<=1)
    {
        char x='#';
        for(auto &it:mp)
        {
            for(int i=0; i<it.second/2; i++)
            {
                s1.push_back(it.first);
                // cout<<s1.back()<<'\n';
            }
            if(it.second%2)
            {
                x=it.first;
            }
        }
        for(auto c:s1)
        {
            cout<<c;
        }
        if(x!='#') cout<<x;
        reverse(s1.begin(),s1.end());
        for(auto c:s1)
        {
            cout<<c;
        }
        
    }
    // cout<<count_odd<<'\n';
    return 0;
}