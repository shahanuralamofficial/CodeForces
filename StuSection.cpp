// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void result()
{
    int n;
    cin >> n;

    string names[100];
    char sections[100];
    int cls[100], id[100];

    for (int i = 0; i < n; ++i)
    {
        cin >> names[i] >> cls[i] >> sections[i] >> id[i];
    }

    char temp = 0;
    for (int i = 0; i < n / 2; ++i)
    {
        temp = sections[i];
        sections[i] = sections[n - i - 1];
        sections[n - i - 1] = temp;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << names[i] << " " << cls[i] << " " << sections[i] << " " << id[i] << "\n";
    }
}

int main()
{
    result();
    return 0;
}
