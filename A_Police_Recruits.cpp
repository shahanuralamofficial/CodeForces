// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int officer = 0, untreated = 0;
    int crime;

    while (t--)
    {
        cin >> crime;
        if(crime == -1)
        {
            if (officer == 0)
            {
                untreated++;
            }
            else
            {
                officer--;
            }
        }
        else
        {
            officer += crime;
        }
    }

    cout << untreated << "\n";

    return 0;
}