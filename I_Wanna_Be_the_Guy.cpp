// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int level, n, m;

    cin >> level;

    vector<bool> canPass(level + 1, false);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int passedLevel;
        cin >> passedLevel;
        canPass[passedLevel] = true;
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int passedLevel;
        cin >> passedLevel;
        canPass[passedLevel] = true;
    }

    bool canPassAllLevels = true;

    for (int i = 1; i <= level; i++)
    {
        if (!canPass[i])
        {
            canPassAllLevels = false;
            break;
        }
    }

    if (canPassAllLevels)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}

int main()
{
    solve();
    return 0;
}
