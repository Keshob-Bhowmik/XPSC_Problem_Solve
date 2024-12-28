#include <bits/stdc++.h>
#define ll long long
using namespace std;                
int main(){
     int t; cin>>t;
     while(t--)
     {
        int n; cin>>n;
    string s; cin>>s;
    int ans = 1e9;
    for(int i='a';i<='z';i++){
        int count=0;
        int l=0,r=n-1;
        while(l<=r){
            if(s[l]!=s[r]){
                if(s[l]==i){
                    l++;
                    count++;
                }
                else if(s[r]==i){
                    r--;
                    count++;
                }
                else{
                    count=1e9;
                    break;
                }
            }
            else{
                l++;
                r--;
            }
        }
        ans=min(ans,count);
    }
    if(ans == 1e9) cout<<-1<<"\n";
    else cout<<ans<<"\n";
     }
    return 0;
}