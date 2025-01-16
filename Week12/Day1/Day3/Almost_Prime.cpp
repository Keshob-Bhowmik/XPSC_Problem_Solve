#include<bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ek for(int i=1; i<=n; i++)
#define shunno for(int i=0; i<n; i++)
#define pb push_back
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
using namespace std;
const int maxN=3001;
vector<int> allPrime;
void Sieve(){
    vector<bool> prime(maxN+1,true);
    for(int i=2;i*i<=maxN;i++){
        if(prime[i]){
            for(int j=i+i;j<=maxN;j+=i){   
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=maxN;i++){
        if(prime[i]){
            allPrime.push_back(i);
        }
    }
    
}
int main()
{
    duronto;
    Sieve();
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int x=i,count=0;
        for(int j=0;j<allPrime.size();j++){
            if(x<allPrime[j]) break;
            if(x%allPrime[j]==0) count++;
        }
        if(count==2) ans++;
    }
    cout<<ans<<'\n';
    return 0;
}