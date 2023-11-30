// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void result()
{
    int n, bills = 0;
    cin >> n;
    int fee[5] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {

        bills = bills + (n / fee[i]);
        n = n % fee[i];
    }

    cout << bills << "\n";
}

int main()
{
    result();
    return 0;
}