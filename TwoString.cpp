// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s, x;

    int n;
    cin >> n;
    while (n--)
    {
        cin >> s >> x;
        string ans = "";
        for (int i = 0; i < s.size();)
        {
            if (s[i] == x[0] && i + x.size() <= s.size())
            {
                bool ok = true;
                for (int j = 0; j < x.size(); j++)
                {
                    if (s[i + j] != x[j])
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                {
                    ans += "#";
                    i += x.size();
                    continue;
                }
            }
            ans += s[i];
            i++;
        }
        cout << ans << "\n";
    }
}

int main()
{
    solve();
    return 0;
}
