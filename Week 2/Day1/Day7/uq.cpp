#include<bits/stdc++.h>
using namespace std;
int main()
{   int t; cin>>t;
    while(t--){
    int n,m; cin>>n>>m;
    string a,b;
    cin>>a;
    set<int> s;
    priority_queue<char,vector<char>, greater<char>> s2;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        s.insert(x-1);
    }
    cin>>b;
    for(int i=0; i<b.size(); i++){
        s2.push(b[i]);
    }
    for(auto it:s){
        a[it]=s2.top();
        s2.pop();
    }
    cout<<a<<'\n';
    }
    // for(auto it:s){
    //     cout<<it<<" ";
    // }
    return 0;
}