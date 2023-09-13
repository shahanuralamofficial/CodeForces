#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long  int n, result = 0;
    cin >> n;

    result = (n / 5);

    if (n % 5!= 0)
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
