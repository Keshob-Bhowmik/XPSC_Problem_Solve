#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        priority_queue<int> pq;
        vector<int> v;
        for(int i=1; i<=n; i++)
        {
            pq.push(i);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            int sum=(x+y);
            int z;
            if((sum%2)!=0){
                z=(sum/2)+1;
            }
            else{
                z=(sum/2);
            }
            pq.push(z);
            v.push_back(x);
            v.push_back(y);
        }
        cout<<pq.top()<<'\n';
        for(auto it=v.begin(); it!=v.end(); it++)
        {
            cout<<*it<<" "<<*(it+1)<<'\n';
            it++;
        }
    }
    return 0;
}