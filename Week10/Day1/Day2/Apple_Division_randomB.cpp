#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    int ans=INT_MAX;
    for(int i=0; i<(1<<n); i++)
    {
        int sub_sum1=0, sub_sum2=0;
        for(int k=0; k<n; k++)
        {
            if((i>>k)&1) sub_sum1+=v[k];
        }
        sub_sum2=abs(sum-sub_sum1);
        ans=min(ans,abs(sub_sum1-sub_sum2));
    }
    cout<<ans<<'\n';
    return 0;
}