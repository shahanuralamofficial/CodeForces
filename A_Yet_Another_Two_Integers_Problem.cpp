// Starting by the mercy of Almighty Allah.


#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m, n, result = 0;
    cin >> m >> n;
    if (m >= n)
    {
        result = (m - n);
    }
    else
    {
        result = (n - m);
    }

    if (result % 10 != 0)
    {
        int ans = (result / 10) + 1;
        cout << ans << "\n";
    }
    else
    {
        int ans = (result / 10);
        cout << ans << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }

    return 0;
}