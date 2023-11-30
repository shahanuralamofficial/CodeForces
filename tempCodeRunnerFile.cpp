// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, x;
    cin >> s >> x;
    int n;
    cin >> n;

    while (n--)
    {
        for (int i = 0; i < s.size() - x.size(); ++i)
        {
            if (s.substr(i, x.size()) == x)
            {
                s.replace(i, x.size(), "#");
                i = i + (x.size() - 1);
            }
        }
        cout << s << "\n";
    }

    return 0;
}