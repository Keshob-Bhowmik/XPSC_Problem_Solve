#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    if(n==3){
        cout<<"2 1 3"<<'\n';
        continue;
    }
    if(n%4==0){                 
        ll add=(1LL<<30);        
        ll cur=1;
        for(int i=1;i<=(n/2);i++){
            cout<<cur<<" "<<cur+add<<" "; 
            cur++;
        }
        cout<<'\n';
    }
    else{
        if(n%2==1){
            ll addf=(1LL<<30);
            ll adds=(1LL<<29);
            cout<<addf<<" ";
            ll cur=1;
            for(int i=1;i<n/2;i++){
                cout<<cur<<" "<<cur+adds<<" ";
                cur++;
            }
            if((n/2)%2==0){  
                cout<<cur<<" "<<cur+addf+adds<<'\n';
            }
            else{
                cout<<cur<<" "<<cur+addf<<'\n';
            }
        }
        else{
            ll addf=(1LL<<30);
            ll adds=(1LL<<29);
            cout<<0<<" "<<addf<<" ";
            ll cur=1;
            for(int i=1;i<=(n/2)-2;i++){
                cout<<cur<<" "<<cur+adds<<" ";
                cur++;
            }
            cout<<cur<<" "<<cur+addf+adds<<'\n';
        }
    }
    }
}