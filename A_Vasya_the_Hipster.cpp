// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int red, blue;
    cin >> red >> blue;
    if (red > blue)
    {
        cout << blue << " " << (red - blue) / 2 << "\n";
    }
    else if (blue > red)
    {
        cout << red << " " << (blue - red) / 2 << "\n";
    }

    else
    {
        cout << red << " " << "0" << "\n";
    }

    return 0;
}