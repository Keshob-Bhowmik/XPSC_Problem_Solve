#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
    int n,m,k; cin>>n>>m>>k;
    multiset<int> ml,ml1;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        ml.insert(v);
    }
    for(int i=0;i<m;i++){
        int v;  cin>>v;
        ml1.insert(v);
    }
    for(int i=1;i<=min(50,k);i++){
        if(i%2==1){
            int a=*ml.begin();   
            int b=*ml1.rbegin();  
            if(a<b){
                auto it=ml.begin();
                ml.erase(it);
                ml.insert(b);

                auto it2=ml1.end();
                --it2;
                ml1.erase(it2);
                ml1.insert(a);
            }
        }
        else{
            int a=*ml.rbegin();  
            int b=*ml1.begin();   
            if(a>b){
                auto it=ml.end();
                --it;
                ml.erase(it);
                ml.insert(b);

                auto it2=ml1.begin();
                ml1.erase(it2);
                ml1.insert(a);
            }
        }
    }
    if(k>50){
        if((k-50) & 1){
            int a=*ml.begin();   
            int b=*ml1.rbegin();  
            if(a<b){
                auto it=ml.begin();
                ml.erase(it);
                ml.insert(b);

                auto it2=ml1.end();
                --it2;
                ml1.erase(it2);
                ml1.insert(a);
            }
        }
    }

    ll sum=0;

    for(int value:ml){
        sum+=value;
    }

    cout<<sum<<'\n';
    }
    
}