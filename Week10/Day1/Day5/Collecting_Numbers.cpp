#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n; cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v[i].first=x;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());
    int rounds=1;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(v[i].second<idx) rounds++;
        idx=v[i].second;
    }
    cout<<rounds<<'\n';
    return 0;
}