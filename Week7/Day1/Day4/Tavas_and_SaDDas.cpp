#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0, size = 0;
    while (true)
    {
        if (n % 10 == 7)
        {
            ans += (1 << size);
        }
        n /= 10;
        size++;
        if(n<=0)
        {
            break;
        }
    }
    for (int i = 1; i < size; i++)
    {
        ans += (1 << i);
    }
    ans++;
    cout << ans << '\n';
    return 0;
}
