// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int numberOffriend, heightOffrence;
    int heightOffriend;
    int count = 0, count1 = 0;

    cin >> numberOffriend >> heightOffrence;

    while (numberOffriend--)
    {
        cin >> heightOffriend;

        if (heightOffriend <= heightOffrence)
        {
            count++;
        }

        else
        {
            count1 += 2;
        }
    }

    int ans = count + count1;

    cout << ans << "\n";
}

int main()
{
    solve();

    return 0;
}