#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    int l=1,r=n;
    vector<int> v(n+1,-1);
    for(int i=1;i<=k;i++){
        if(i%2==1){
            v[i]=l;
            l++;
            int j=i+k;
            while(j<=n){
                v[j]=l;
                l++;
                j+=k;
            }
        }
        else{
            v[i]=r;
            r--;
            int j=i+k;
            while(j<=n){
                v[j]=r;
                r--;
                j+=k;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        cout<<v[i]<<" ";
    }
    cout<<'\n';
    }
}