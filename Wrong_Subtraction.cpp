// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;

    for (size_t i = 1; i <= k; i++)
    {
        if (n % 10 == 0)
        {

            n /= 10;
        }

        else
        {
            n--;
        }
        
    }

    cout << n << endl;
}

int main()
{
    solve();
    return 0;
}