#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        map<int,int> msb;
        for(int i=0;i<n;i++){
            cin>>v[i];
            msb[__lg(v[i])]++;
        }
        ll p=0;
        for(auto &it:msb){
            if(it.second==2) 
            {
                p++;
            }
            else if(it.second>2)
            {
                p+=((1LL*it.second*(it.second-1))/2);
            }
        }
        cout<<p<<endl;
    }
    return 0;
}



