// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void result()
{
    int n;
    int n1, n2;

    cin >> n;
    while (n--)
    {

        cin >> n1 >> n2;

        int count = 0;
        if (n1 % n2 == 0)
        {
            count = 0;
        }
        else
        {
            count = n2 - (n1 % n2);
        }

        cout << count << "\n";
    }
}

int main()
{
    result();
    return 0;
}