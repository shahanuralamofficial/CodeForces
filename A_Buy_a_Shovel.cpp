// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 10; i++)
    {
        int price = k * i;
        if (price % 10 == 0 || price % 10 == r)
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}