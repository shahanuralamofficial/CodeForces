#include <bits/stdc++.h>
using namespace std;

void answer()
{
    int n, k, w, i, add = 0;
    cin >> n >> k >> w;
    int result;
    for (i = 1; i <= w; i++)
    {
        add += i * n;
    }
    if (add <= k) {
        result = 0;
    } else {
        result = add - k;
    }
    cout << result << "\n";
}
int main()
{

    answer();

    return 0;
}