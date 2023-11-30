#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int tramStop, seatCapacity = 0, ans = 0;
    cin >> tramStop;

    int outputPassenger, inputPassenger;

    for (int i = 1; i <= tramStop; i++)
    {
        cin >> outputPassenger >> inputPassenger;
        seatCapacity = seatCapacity + (inputPassenger - outputPassenger);

        if (seatCapacity > ans)
        {
            ans = seatCapacity;
        }
    }

    cout << ans << "\n";
}

int main()
{
    solve();
    return 0;
}
