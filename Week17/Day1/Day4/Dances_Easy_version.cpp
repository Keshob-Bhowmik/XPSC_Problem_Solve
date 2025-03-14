#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<int> v(n),v1(n);
        for(int i=1;i<n;i++){
            cin>>v[i];
        } 
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        v[0]=m;
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        int l=0,r=0;
        int cnt=0;
        while(r<n){
            if(v[l]<v1[r]){
                l++,r++;
            }
            else{
                r++;
                cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
}
