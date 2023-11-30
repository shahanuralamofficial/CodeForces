// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s2.begin(), s2.end());

    if (s1 == s2)
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