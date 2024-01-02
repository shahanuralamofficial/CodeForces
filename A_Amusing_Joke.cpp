// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string firstName, secondName, lastName;
    cin >> firstName >> secondName >> lastName;
    string fullName = firstName + secondName;

    sort(fullName.begin(), fullName.end());
    sort(lastName.begin(), lastName.end());

    if (fullName == lastName)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}