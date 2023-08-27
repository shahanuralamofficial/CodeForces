#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    if (number % 2 == 0 && number != 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}