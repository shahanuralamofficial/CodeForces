// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void result()
{
    int dot, sign;
    cin >> dot >> sign;
    for (int i = 1; i <= dot; i++)
    {
        for (int j = 0; j < sign; j++)
        {
            if (i % 4 == 2)
            {
                if (j == sign - 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            else if (i % 4 == 0)
            {
                if (j == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << "\n";
    }
}

int main()
{

    result();
    return 0;
}