#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
    int k,n,m;
    cin>>k>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    for(int i=0;i<m;i++){
        cin>>b[i];
    } 
    vector<int> v;
    int i=0,j=0;
    while(i<n || j<m){
        if(i==n){
            if(b[j]==0){
                k++;
                v.push_back(0);
            }
            else{
                if(b[j]>k){
                    cout<<-1<<'\n';
                    return;
                }
                else v.push_back(b[j]);
            }
            j++;
        }
        else if(j==m){
            if(a[i]==0){
                k++;
                v.push_back(0);
            }
            else{
                if(a[i]>k){
                    cout<<-1<<'\n';
                    return;
                }
                else v.push_back(a[i]);
            }
            i++;
        }
        else{
            int x=min(a[i],b[j]);
            if(x==a[i]){
                if(a[i]==0){
                    k++;
                    v.push_back(0);
                }
                else{
                    if(a[i]>k){
                        cout<<-1<<'\n';
                        return;
                    }
                    else v.push_back(a[i]);
                }
                i++;
            }
            else{
                if(b[j]==0){
                    k++;
                    v.push_back(0);
                }
                else{
                    if(b[j]>k){
                        cout<<-1<<'\n';
                        return;
                    }
                    else v.push_back(b[j]);
                }
                j++;
            }
        }
    }
    for(int x:v){
        cout<<x<<" ";
    } 
    cout<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}