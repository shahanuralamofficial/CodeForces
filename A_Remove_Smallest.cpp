// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int index, arr[index];
    while (t--)
    {
        cin >> index;
        for (int i = 0; i < index; i++)
        {
            cin >> arr[i];
            if (arr[0] > arr[i] && arr[i] != arr[i + 1])
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}