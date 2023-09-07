#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;

    set<char> cs;

    for (char c : s)
    {
        cs.insert(c);
    }

    if (cs.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}