// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s = "I hate ";
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s += "that I love ";
        }
        else
        {
            s += "that I hate ";
        }
    }
    s += " it";
    cout << s << endl;
}
int main()
{
    solve();
    return 0;
}