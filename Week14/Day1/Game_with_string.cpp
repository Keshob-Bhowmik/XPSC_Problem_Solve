#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int len = s.size();
    int count=0;
    deque<char> d;
    for(char c:s){
        if(!d.empty() && d.back()==c){
            count++;
            d.pop_back();
        }
        else{
            d.push_back(c);
        }
    }
    // cout<<count<<'\n';
    if(count%2) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}