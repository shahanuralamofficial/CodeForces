// Starting by the mercy of Almighty Allah

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int sereja = 0, dima = 0, n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0, right = n - 1;
    int move = 1;
    while (left <= right) {
        int mx = 0;
        if (arr[left] > arr[right]) {
            mx = arr[left];
            left++;
        } else {
            mx = arr[right];
            right--;
        }

        if (move % 2 != 0) {
            sereja += mx;
        } else {
            dima += mx;
        }
        move++;
    }

    cout << sereja << " " << dima << '\n';
}


int main()
{
    solve();
    return 0;
}