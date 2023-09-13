// starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
void solve()
{

    long long int n, count = 0;
    cin >> n;

    string st = to_string(n);

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == '4' || st[i] == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
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
    solve();

    return 0;
}