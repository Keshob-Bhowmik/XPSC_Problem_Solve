#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> dif(200002,0);
    for(int i=1;i<=n;i++){
        int l,r;
        cin>>l>>r;
        dif[l]++;
        dif[r+1]--;
    }
    vector<int> ans(200002,0);
    for(int i=1;i<=200000;i++){
        dif[i]=dif[i-1]+dif[i];
        ans[i]=ans[i-1]+(dif[i]>=k);
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<ans[b]-ans[a-1]<<'\n';
    }
}