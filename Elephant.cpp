#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, result = 0;
    cin >> n;

    result = (n / 5);

    if (result > 1)
    {
        result++;
    }
    cout << result << "\n";
}

int main()
{
    solve();

    return 0;
}