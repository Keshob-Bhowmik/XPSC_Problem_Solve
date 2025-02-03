#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    mp[-1]=0;
    bool flag = true;
    int ans=-1;
    for(int i=0; i<n; i++){
        cin>>v[i];
         if(mp.find(v[i]-1)==mp.end() && flag){
            flag=false;
            ans=i+1;
        }
        mp[v[i]]++;
    }
    
    // for(int i=0; i<n; i++){
    //     if(mp.find(v[i]-1)==mp.end()){
    //         cout<<i+1;
    //         flag=false;
    //         break;
    //     }
    // }
    if(flag) cout<<-1;
    else cout<<ans;
    return 0;
}