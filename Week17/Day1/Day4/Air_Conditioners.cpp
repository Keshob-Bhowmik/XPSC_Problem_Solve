#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++) {
        v[i]=INT_MAX;
    }
    vector<int> indx;
    for(int i=0;i<k;i++){
        int x; cin>>x;
        indx.push_back(x-1);
    }
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        v[indx[i]]=x;
    }
    ll mn=INT_MAX;

    for(int i=0;i<n;i++){      
        mn=min(mn+1,v[i]);
        v[i]=mn;
    }

    for(int i=n-1;i>=0;i--){   
        mn=min(mn+1,v[i]);
        v[i]=mn;
    }

    for(int value:v) cout<<value<<" ";
    
    cout<<'\n';
    }
}