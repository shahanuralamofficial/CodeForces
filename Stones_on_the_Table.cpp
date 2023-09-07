#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, ans = 0;
    cin >> n;
    string st;
    cin >> st;
    for (i = 0; i < n; i++)
    {

        if (st[i] == st[i + 1])
        {
            st[i]--;
            ans++;
        }
    }

    cout << ans << "\n";
}

int main()
{
    solve();

    return 0;
}