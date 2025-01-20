#include<bits/stdc++.h>
#define ll long long int
#define duronto ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ek for(ll i=1; i<=n; i++)
#define shunno for(ll i=0; i<n; i++)
#define pb push_back
#define oy cout<<"YES"<<'\n'
#define na cout<<"NO"<<'\n'
using namespace std;
int main()
{
    duronto;
    int n; cin >> n;
    unordered_map<int,int> mp;
    mp.clear();
	while(n--)
	{
		int x;
		cin >> x;
		int k = sqrt(x);
		for(int i = 2; i <= k; i++)
		{
			if(x%i == 0)
				mp[i]++;
			while(x%i == 0)
					x /= i;
		}
		if(x > 1) 
		    mp[x]++; 
	}
	int ans = 1;
	for(auto it = mp.begin(); it != mp.end(); it++){
		ans = max(ans, (*it).second);
	}
	cout<<ans;
    return 0;
}