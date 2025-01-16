#include<bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ek for(int i=1; i<=n; i++)
#define shunno for(int i=0; i<n; i++)
#define pb push_back
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
using namespace std;
int main()
{
        int n,m; cin>>n>>m;
        vector<string> v(n);
        shunno{
            cin>>v[i];
        }
        vector<bool> check(1001, false);
        // cout<<check.size();
        vector<string> shamner,pichoner;
        int size=0;
        for(int i=0; i<n-1; i++){
            string x = v[i];
            reverse(x.begin(),x.end());
            for(int j=i+1; j<n; j++){
                if(x==v[j]){
                    check[i]=true;
                    check[j]=true;
                    shamner.pb(v[i]);
                    pichoner.pb(v[j]);
                    size+=(m*2);
                    break;
                }
            }
        }
        vector<string> single;
        for(int i=0; i<n; i++){
            if(!check[i]){
                string x = v[i];
                reverse(x.begin(),x.end());
                if(x==v[i]){
                    single.pb(v[i]);
                    size+=m;
                    break;
                }
            }
        }
        // int size = shamner.size()+pichoner.size()+single.size();
        // cout<<size<<'\n';
        if(size==0){
            cout<<size;
        }
        else{
            cout<<size<<'\n';
        reverse(pichoner.begin(),pichoner.end());
        for(auto value:shamner){
            cout<<value;
        }
        for(auto value:single){
            cout<<value;
        }
        for(auto value:pichoner){
            cout<<value;
        }
        }
        cout<<'\n';
    
    return 0;
}