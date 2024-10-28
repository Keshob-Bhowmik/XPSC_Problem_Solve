#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f[26]={0};
    for(int i=0; i<s.size(); i++)
    {
        int a = s[i]-97;
        f[a]++;
    }
    int index;
    bool flag = false;
    for(int i=0; i<26; i++)
    {
        if(f[i]==0)
        {
            index = i;
            flag = true;
            break;
        }
    }
    if(flag) cout<<char(index+97);
    else cout<<"None";
    return 0;
}