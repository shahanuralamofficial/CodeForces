#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 4, greater<int>());

    int a = abs(arr[0] - arr[1]);
    int b = abs(arr[0] - arr[2]);
    int c = abs(arr[0] - arr[1] - arr[2]);

    cout << a << " " << b << " " << c << " ";
}

int main()
{
    solve();
    return 0;
}