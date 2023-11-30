// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int shoeColor[4], count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> shoeColor[i];
    }

    sort(shoeColor, 4 + shoeColor);

    for (int i = 0; i < 4; i++)
    {
        if (shoeColor[i] == shoeColor[i + 1])
        {
            count++;
        }
    }

    cout << count << "\n";
}

int main()
{
    solve();
    return 0;
}