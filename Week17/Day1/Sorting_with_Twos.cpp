#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    } 

    vector<int> d(n+1);

    for(int i=1;i<n;i++){
        d[i]=v[i+1]-v[i];
    }

    bool flag = true;

    for(int i=1;i<n;i++){
        if(d[i]<0){
            if((i&(i-1))!=0){   
                cout<<"NO"<<'\n';
                flag = false;
                break;
            }
        }
    }

    if(flag) cout<<"YES"<<'\n';
    
    }
}