#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int p=n-k;
        for(int i=p; i<=n; i++){
            cout<<i<<" ";
        }
        for(int i=p-1; i>0; i--){
            cout<<i<<" ";
        }
        cout<<'\n';
    }
    return 0;
}