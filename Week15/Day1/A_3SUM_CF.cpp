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
        map<int,int> frq;
        vector<int> v;
        while(n--){
            int x;
            cin>>x;
            frq[x%10]++;
        }
        for(auto [x,y]:frq){
            if(y>3) y=3;
            for(int i=1;i<=y;i++){
                v.push_back(x);
            }
        }
        bool flag=false;
        for(int i=0;i<v.size()-2;i++){
            for(int j=i+1;j<v.size()-1;j++){
                for(int k=j+1;k<v.size();k++){
                    if((v[i]+v[j]+v[k])%10==3){
                        // cout<<"YES"<<'\n';
                        
                        flag=true;
                        break;
                    }
                }
                if(flag){
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}
