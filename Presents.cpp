// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

     for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i + 1)
            {
                count = j + 1;
                break;
            }
        }

        cout << count << " ";
    }

}

int main()
{
    solve();

    return 0;
}
