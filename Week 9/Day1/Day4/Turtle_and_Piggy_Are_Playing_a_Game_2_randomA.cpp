#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        deque<int> d;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            d.push_back(x);
        }
        sort(d.begin(),d.end());
        // for(auto value:d)
        // {
        //     cout<<value<<" ";
        // }
        // cout<<'\n';
        int turn=1;
        int size=d.size();
        while(d.size()>2)
        {
            if((turn%2)!=0)
            {
                // cout<<"value-"<<d.front()<<" ";
                d.pop_front();
            }
            else if((turn%2)==0)
            {
                // cout<<"value-"<<d.back()<<" ";
                d.pop_back();
            }
            turn++;
            size--;
            // cout<<'\n';
            // cout<<"size-"<<d.size()<<" ";
        }
        // cout<<'\n';
        // cout<<d.front()<<'\n';
        if(turn%2!=0) cout<<d[d.size()-1]<<'\n';
        else cout<<d.front()<<'\n';
    }
    return 0;
}