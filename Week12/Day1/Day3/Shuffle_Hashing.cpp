#include<bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
using namespace std;
int main()
{
    duronto;
    int t; cin>>t;
    while(t--){
        string s1,s2; cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        int x=s1.size();
        int y=s2.size();
        bool flag = false;
        for(int i=0; i<=y-x; i++){
            string s3 = s2.substr(i,x);
            sort(s3.begin(),s3.end());
            if(s1==s3){
                flag = true;
                break;
            }
        }
        if(flag) oy;
        else na;
    }
    return 0;
}