#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        double length;
        cin >> word;
        length = word.length();

        cout << fixed << setprecision(0);
        if (length > 10)
        {
            cout << word[0] << length - 2 << word[length - 1] << endl;
        }

        else
        {
            cout << word << endl;
        }
    }

    return 0;
}