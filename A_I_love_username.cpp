// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if (t <= 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int point, worst, best, amazing = 0;
    cin >> point;
    worst = best = point;

    while (t--)
    {
        cin >> point;

        if (point > best || point < worst)
        {
            amazing++;
            best = max(best, point);
            worst = min(worst, point);
        }
    }

    cout << amazing << "\n";
    return 0;
}
