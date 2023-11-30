// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, i, countAnton = 0, countDanik = 0;
    string st;
    cin >> n >> st;
    for (i = 0; i < n; i++)
    {
        if (st[i] == 'A')
        {
            countAnton++;
        }
        else if (st[i] == 'D')
        {
            countDanik++;
        }
    }

    if (countAnton == countDanik)
    {
        cout << "Friendship\n";
    }
    else if (countAnton > countDanik)
    {
        cout << "Anton\n";
    }
    else
    {
        cout << "Danik\n";
    }
}

int main()
{
    solve();
    return 0;
}