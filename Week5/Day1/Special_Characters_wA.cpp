#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n%2!=0){
            cout<<"NO"<<'\n';
        }
        else{
            vector<char> v;
            cout<<"YES"<<'\n';
            for(int i=0; i<n/2; i++)
            {
                v.push_back(65+i);
                v.push_back(65+i);
            }
            for(auto value:v){
                cout<<value;
            }
            cout<<'\n';
        }
    }
    return 0;
}