#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t; cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		if (n == 1 && k == 1)
		{
			cout << 1 << '\n' << 1 << '\n';
		}
		else if (n == k)
		{
			cout << -1 << '\n';
		}
		else if (k == 1)
		{
			cout << -1 << '\n';
		}
		else
		{
			if ((k % 2) != 0)
			{
				cout << 3 << '\n';
				// for(int i=1; i<k-1; i++)
				// {
				//     cout<<i<<" ";
				// }
				cout << 1 << " " << k - 1 << " " << k + 2 << '\n';
				// for(int i=k-1; i<=k+1; i++)
				// {
				//     cout<<i<<" ";
				// }
				// for(int i=k+2; i<=n; i++)
				// {
				//     cout<<i<<" ";
				// }

			}
			else if ((k % 2) == 0)
			{
				cout << 3 << '\n';
				// for(int i=1; i<k; i++)
				// {
				//     cout<<i<<" ";
				// }
				cout << 1 << " " << k << " " << k + 1 << '\n';
				// for(int i=k+1; i<=n; i++)
				// {
				//     cout<<i<<" ";
				// }
				// cout<<'\n';
			}
		}
	}
	return 0;
}