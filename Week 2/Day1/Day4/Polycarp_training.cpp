#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    int k=1;
    while(!pq.empty())
    {
        int p = pq.top();
        if(p>=k) k++;
        pq.pop();
    }
    cout<<k-1;
    return 0;
}