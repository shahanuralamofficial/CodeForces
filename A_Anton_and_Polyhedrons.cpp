// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void result()
{
    string name;
    int n, sum = 0;
    cin >> n;
  
    while (n--)
    {
        cin >> name;
        if (name == "Tetrahedron")
        {
            sum = sum + 4;
        }
        else if (name == "Cube")
        {
            sum = sum + 6;
        }
        else if (name == "Icosahedron")
        {
            sum = sum + 20;
        }
        else if (name == "Octahedron")
        {
            sum = sum + 8;
        }
        else if (name == "Dodecahedron")
        {
            sum = sum + 12;
        }
    }

    cout << sum << "\n";
}

int main()
{

    result();
    return 0;
}