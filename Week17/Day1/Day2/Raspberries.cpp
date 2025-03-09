#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void keshob(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(k==2 || k==3 || k==5){
        for(int i=0;i<n;i++){
            if(v[i]%k==0){
                cout<<0<<'\n';
                return;
            }
        }
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            int top=ceil((v[i]*1.0)/k);
            mn=min(mn,(top*k)-v[i]);
        }
        cout<<mn<<'\n';
    }
    else{
        for(int i=0;i<n;i++){
            if(v[i]%k==0){
                cout<<0<<'\n';
                return;
            }
        }
        int mn=INT_MAX;
        int even=0;
        for(int i=0;i<n;i++){
            if(v[i]%2==0) even++;
            int top=ceil((v[i]*1.0)/k);
            mn=min(mn,(top*k)-v[i]);
        }
        int mn1=max(0,2-even);
        cout<<min(mn,mn1)<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        keshob();
    }
}