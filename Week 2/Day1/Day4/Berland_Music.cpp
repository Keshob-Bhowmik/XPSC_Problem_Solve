#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        vector<int> v1;
        set<int> s;
        set<int> sL;
        set<int> sS;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }
        string a;
        cin>>a;
        // cout<<*s.lower_bound(2);
        int zero=0, one=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='0') zero++;
            else one++;
        }
            while(zero--)
        {
            sS.insert(*s.begin());
            s.erase(*s.begin());
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]=='0'){
                // v1.push_back(*s.begin());
                // s.erase(*s.begin());
                if(sS.lower_bound(v[i])!=sS.end())
                {
                    v1.push_back(*sS.lower_bound(v[i]));
                    sS.erase(*sS.lower_bound(v[i]));
                }
                else{
                    if(v[i]<*sS.begin()){
                        v1.push_back(*sS.begin());
                        sS.erase(*sS.begin());
                    }
                    else{
                        v1.push_back(*sS.rbegin());
                        sS.erase(*sS.rbegin());
                    }
                }
            }
            else{
                // v1.push_back(*s.rbegin());
                // s.erase(*s.rbegin());
                if(s.lower_bound(v[i])!=s.end()){
                    v1.push_back(*s.lower_bound(v[i]));
                    s.erase(*s.lower_bound(v[i]));
                }
                else{
                    if(v[i]<*s.begin()){
                        v1.push_back(*s.begin());
                        s.erase(*s.begin());
                    }
                    else{
                        v1.push_back(*s.rbegin());
                        s.erase(*s.rbegin());
                    }
                }
            }
        }
            for(auto value:v1){
                cout<<value<<" ";
            }
            cout<<'\n';
    }
    return 0;
}
