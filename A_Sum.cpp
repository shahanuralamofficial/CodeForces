// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, num1, num2, num3;
    cin >> t;
    while (t--)
    {
        cin >> num1 >> num2 >> num3;
        if (num1 + num2 == num3 || num2 + num3 == num1 || num1 + num3 == num2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}