#include <bits/stdc++.h>
using namespace std;
int main()
{

    string st;
    cin >> st;

    if (st[0] >= 'a' && st[0] <= 'z')

    {
        st[0] = st[0] - 32;
        cout << st << "\n";
        
    }

    else
    {
        cout << st << "\n";
    }

    return 0;
}