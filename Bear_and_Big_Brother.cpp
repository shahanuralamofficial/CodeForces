#include <bits/stdc++.h>
using namespace std;

int main()
{

    int bear, bob;
    cin >> bear >> bob;

    int n = 0;

    while (bear <= bob)
    {
        bear *= 3;
        bob *= 2;
        n++;
    }

    cout << n << "\n";

    return 0;
}