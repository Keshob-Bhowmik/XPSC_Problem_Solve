#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    int c=1;
    while(t--){
        // cout<<c<<'\n';
        string a,b;
        cin>>a>>b;
        int a_s=a.size()-1;
        int b_s=b.size()-1;
        if(a[a_s]=='S' && b[b_s]=='S'){
            if(a_s>b_s){
                cout<<'<'<<'\n';
            }
            else if(a_s<b_s){
                cout<<'>'<<'\n';
            }
            else if(a_s==b_s){
                cout<<'='<<'\n';
            }
        }
        else if(a[a_s]=='L' && b[b_s]=='L'){
            if(a_s>b_s){
                cout<<'>'<<'\n';
            }
            else if(a_s<b_s){
                cout<<'<'<<'\n';
            }
            else if(a_s==b_s){
                cout<<'='<<'\n';
            }
        }
        else if(a[a_s]=='L'){
            if(b[b_s]=='M'){
                cout<<'>'<<'\n';
            }
            else if(b[b_s]=='S'){
                cout<<'>'<<'\n';
            }
        }
        else if(a[a_s]=='S'){
            if(b[b_s]=='M'){
                cout<<'<'<<'\n';
            }
            else if(b[b_s]=='L'){
                cout<<'<'<<'\n';
            }
        }
        else if(a[a_s]=='M'){
            if(b[b_s]=='M'){
                cout<<'='<<'\n';
            }
            else if(b[b_s]=='L'){
                cout<<'<'<<'\n';
            }
            else if(b[b_s]=='S'){
                cout<<'>'<<'\n';
            }
        }
    }
    return 0;
}