#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Petya, Vasya, Tonya;
    int n;
    cin >> n;

    int count = 0, result = 0;

    for (int i = 1; i <= n; ++i)
    {

        cin >> Petya >> Vasya >> Tonya;
        count = Petya + Vasya + Tonya;
        if (count >= 2)
        {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}
