// Starting by the mercy of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string st;
    cin >> st;
    int lowercase = 0, uppercase = 0, i;

    for (i = 0; i < st.size(); i++)
    {
        if (islower(st[i]))
        {
            lowercase++;
        }
        else
        {
            uppercase++;
        }
    }

    if (lowercase >= uppercase)
    {
        for (i = 0; i < st.size(); i++)
        {
            cout << (char)tolower(st[i]);
        }
    }

    else
    {
        for (i = 0; i < st.size(); i++)
        {
            cout << (char)toupper(st[i]);
        }
    }
    cout << endl;
}

int main()
{
    solve();
    return 0;
}
