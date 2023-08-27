#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> carpet(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> carpet[i];
        }

        bool vFound = false, iFound = false, kFound = false, aFound = false;
        for (int col = 0; col < m; ++col)
        {
            for (int row = 0; row < n; ++row)
            {
                char letter = carpet[row][col];
                if (letter == 'v')
                    vFound = true;
                if (letter == 'i')
                    iFound = true;
                if (letter == 'k')
                    kFound = true;
                if (letter == 'a')
                    aFound = true;
            }
            if (vFound && iFound && kFound && aFound)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (!(vFound && iFound && kFound && aFound))
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}