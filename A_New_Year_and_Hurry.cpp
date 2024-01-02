// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int totalTime = 240 - k, solved = 0, timeSpent = 0;

    for (int i = 1; i <= n; ++i)
    {
        timeSpent += 5 * i;
        if (timeSpent > totalTime)
        {
            break;
        }
        solved++;
    }

    cout << solved << "\n";
    return 0;
}
