// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin >> n;
    string magnet[n];
    int group = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> magnet[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (magnet[i] != magnet[i - 1])
        {
            group++;
        }
    }

    cout << group << "\n";
}

int main()
{
    solve();
    return 0;
}