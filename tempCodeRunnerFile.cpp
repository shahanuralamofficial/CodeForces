// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void result()
{
    string players;
    cin >> players;
    int len = players.length();
    int zero = 0, one = 0;

    for (size_t i = 0; i < len; i++)
    {
        if (players[i] = '0')
        {
            zero = zero + 1;
            one = 0;
        }
        else
        {
            one = one + 1;
            zero = 0;
        }
    }
     cout<<one <<"\n"<<zero<<"\n";

    if (zero >= 7 || one >= 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{

    result();
    return 0;
}