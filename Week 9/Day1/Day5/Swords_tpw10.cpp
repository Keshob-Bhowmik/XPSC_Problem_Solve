#include <bits/stdc++.h>
#define ll long long
const int N=200010;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll mx = 0, sum = 0;
    ll ar[N];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        mx = max(mx, ar[i]);
    }
    ll a=0;
    for (int i = 1; i <= n; i++){
        a = __gcd(a, mx - ar[i]);
        sum += mx - ar[i];
    }
    cout << sum / a << " " << a;
}