#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        map<char,int>mp;
        int l=0,r=0,u=0,d=0;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
            if(s[i]=='L') l++;
            else if(s[i]=='R') r++;
            else if(s[i]=='U') u++;
            else d++;
        }
        // cout<<mp.size()<<" "<<l<<" "<<r<<" "<<u<<" "<<d<<'\n';
        if(mp.size()==1){
            cout<<0;
        }
        else if(mp.size()==2){
            if(l>0 && r>0){
                cout<<2<<'\n';
                cout<<"LR";
            }
            else if(u>0 && d>0){
                cout<<2<<'\n';
                cout<<"UD";
            }
            else if(l>0 && u>0){
                cout<<0;
            }
            else if(l>0 && d>0){
                cout<<0;
            }
            else if(r>0 && d>0){
                cout<<0;
            }
            else if(r>0 && u>0){
                cout<<0;
            }
        }
        else if(mp.size()==3){
            if(l>0 && r>0){
                cout<<2<<'\n';
                cout<<"LR";
            }
            else if(u>0 && d>0){
                cout<<2<<'\n';
                cout<<"UD";
            }
        }
        else if(mp.size()==4){
            if(l-r<0){
                int p = abs(l-r);
                r=r-p;
            }
            else{
                int p=abs(l-r);
                l=l-p;
            }
            if(u-d<0){
                int p=abs(u-d);
                d=d-p;
            }
            else{
                int p=abs(u-d);
                u=u-p;
            }
            int size=d+u+l+r;
            cout<<size<<'\n';
            bool lb=false, rb=false, ub=false, db= false;
            while(l>0 || r>0 || u>0 || d>0){
                if(d>0){
                    cout<<"D";
                    d--;
                }
                else if(l>0){
                    cout<<"L";
                    l--;
                }
                else if(u>0){
                    cout<<"U";
                    u--;
                }
                else if(r>0){
                    cout<<"R";
                    r--;
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}