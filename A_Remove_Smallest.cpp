// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int index;
    while (t--)
    {
        cin >> index;
        int arr[index];
        for (int i = 0; i < index; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + index);

        bool ok = true;
        for (int i = 0; i + 1 < index; i++)
        {
            if (abs(arr[i] - arr[i + 1]) > 1) {
                ok = false;
            }
        }
        if (ok) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }

    }

    return 0;
}
