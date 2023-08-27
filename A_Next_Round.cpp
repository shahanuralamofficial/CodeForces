#include <bits/stdc++.h>
using namespace std;
int main()
{
    int player, contest, result = 0;
    cin >> player >> contest;
    int point;
    for (int i = 1; i <= player; i++)
    {

        cin >> point;
        if (point > contest)
        {
            result++;
        }
        else if (point < contest)
        {
            result = 0;
        }
    }
    cout << result << endl;
    return 0;
}