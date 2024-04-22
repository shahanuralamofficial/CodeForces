// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toast1 = (k * l) / nl;
    int toast2 = (c * d);
    int toast3 = (p / np);

    if (toast1 <= toast2 && toast1 <= toast3)
    {
        cout << toast1 / n << "\n";
    }

    else if (toast1 >= toast2 && toast2 <= toast3)
    {
        cout << toast2 / n << "\n";
    }
    else
    {
        cout << toast3 / n << "\n";
    }

    return 0;
}