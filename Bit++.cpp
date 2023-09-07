#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    string s;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;

        for (int j = 0; j < s.size(); j++)
        {
            if (j + 1 < s.size() && s[j] == '+' && s[j + 1] == '+')
            {
                ans++;
            }
            else if (j + 1 < s.size() && s[j] == '-' && s[j + 1] == '-')
            {
                ans--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}