// Starting by the mercy of Almighty Allah.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int friendOne, friendTwo, friendThree;
    cin >> friendOne >> friendTwo >> friendThree;

    int sortDistance[] = {friendOne, friendTwo, friendThree};

    sort(begin(sortDistance), end(sortDistance));

    int distance = sortDistance[2] - sortDistance[0];
    cout << distance << "\n";

    return 0;
}