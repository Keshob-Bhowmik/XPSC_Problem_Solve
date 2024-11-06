#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        set<int> s;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }
        int l=0;
        int r=n-1;
        int L,R;
        bool flag = false;
        while(r>l)
        {
            if((v[l]!=*s.begin() && v[l]!=*s.rbegin()) && (v[r]!=*s.begin() && v[r]!=*s.rbegin())){
                L=l;
                R=r;
                flag=true;
                break;
            }
            else if(v[l]==*s.begin() || v[l]==*s.rbegin()){
                s.erase(v[l]);
                l++;
            }
            else if(v[r]==*s.begin() || v[r]==*s.rbegin()){
                s.erase(v[r]);
                r--; 
            }
        }
        if(flag==true){
            cout<<l+1<<" "<<r+1<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
    return 0;
}