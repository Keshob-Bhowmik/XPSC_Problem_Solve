#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
    int n; cin>>n;

    string s; cin>>s;

    vector<int> v;

    for(int i=0;i<n;i++){
        if(s[i]=='0') v.push_back(i);
    }

    ll ans=0;
    
    for(int i=n-1;i>=0;i--){

        if(s[i]=='1'){
            if(ans==-1 || v.size()==0) ans=-1;
            else{
                ans+= (i-v.back());
                s[v.back()]='1';
                v.pop_back();
            }
        }

        else if(v.size()!=0 && v.back()==i){
            v.pop_back();
        }

        cout<<ans<<" ";
    }

    cout<<'\n';

    }

}
