// Starting by the mercy of Almighty Allah.
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int idx;
    cin >> idx;
    vector<int> arr(idx);
    for (int i = 1; i <= idx; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < idx - 1; i++)
    {

        if (arr[i] != arr[i + 1])
        {
            max = i + 1;
        }
    }
    cout << max << '\n';
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