#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,a,b; cin>>n>>a>>b;
        int x =n/2;
            vector<int> v;
            v.push_back(a);
            for(int i=n; i>=1; i--){
                if(i==a || i==b){
                    continue;
                }
                v.push_back(i);
            }
            v.push_back(b);
            // for(auto value:v){
            //         cout<<value<<" ";
            //     }
                // cout<<'\n';
            int mx = INT_MIN;
            int mn = INT_MAX;
            for(int i=0; i<n/2; i++){
               if(v[i]<mn){
                mn=v[i];
               }
            }
            for(int i=n/2; i<n; i++){
               if(v[i]>mx){
                mx=v[i];
               }
            }
            // cout<<mn<<" "<<mx<<'\n';
            if(mn==a && mx==b){
                for(auto value:v){
                    cout<<value<<" ";
                }
                cout<<'\n';
            }
            else{
                cout<<-1<<'\n';
            }
        }
       
    return 0;
}