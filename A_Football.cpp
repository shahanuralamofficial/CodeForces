// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void result()
{
    string players;
    cin >> players;
    int zero = 0, one = 0;
    for (int i = 0; i < players.size(); i++)
    {
        if (players[i] == '0')
        {
            zero = zero + 1;
            one = 0;
        }
        else
        {
            one = one + 1;
            zero = 0;
        }
        if (zero >= 7 || one >= 7)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main()
{

    result();
    return 0;
}