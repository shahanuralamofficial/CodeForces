// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;


void solve() {

    int n;
    cin >> n;
    int people[n];
    string result="" ;

    for(int i = 0; i < n; i++) {
        cin >> people[i];

        if(people[i]==1) {
            result= "HARD";
            break;
            
        }

        else
        {
            result= "EASY";
        }
    }
    cout << result <<"\n";
}

int  main()
{
    solve();

    return 0;
}