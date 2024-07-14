// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > b && a > c && a > d)
    {
        cout << "0\n";
    }
    else if (b > a && c > a && d > a)
    {
        cout << "3\n";
    }
    else if ((b > a && c > a) || (b > a && d > a) || (c > a && d > a))
    {
        cout << "2\n";
    }

    else
    {
        cout << "1\n";
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