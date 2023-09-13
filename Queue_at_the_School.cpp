// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int size, second;
    string boyAndgirl;

    cin >> size >> second >> boyAndgirl;

    for (int i = 0; i < second; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (boyAndgirl[j] == 'B' && boyAndgirl[j + 1] == 'G')
            {
                swap(boyAndgirl[j], boyAndgirl[j + 1]);
                j++;
            }
        }
    }

    cout << boyAndgirl << "\n";
}

int main()
{
    solve();

    return 0;
}