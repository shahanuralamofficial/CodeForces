#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int place = 1;
        int roundNumbers[10] = {0}; 
        int count = 0;

        while (n > 0) {
            int digit = n % 10;
            n /= 10;

            if (digit != 0) {
                roundNumbers[count++] = digit * place;
            }

            place *= 10;
        }

        cout << count << "\n";
        for (int i = 0; i < count; i++) {
            cout << roundNumbers[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
