#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        string s1,s2; cin>>s1>>s2;
        int l=0;
        int count=0;
        bool flag=false;
        int check=0;
        for(int i=0; i<n; i++){
            for(int j=l; j<m; j++){
                if(s1[i]==s2[j]){
                    // cout<<i<<" "<<j<<'\n';
                    count++;
                    l=j+1;
                    break;
                }
                else{
                    if(j==m-1){
                        flag=true;
                    }
                }
            }
            if(flag){
                break;
            }
        }
        // cout<<'\n';
        cout<<count<<'\n';
    }
    return 0;
}