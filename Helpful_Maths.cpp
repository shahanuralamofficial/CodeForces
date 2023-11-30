#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    istringstream iss(s);
    vector<int> numbers;
    char op;

    int num;
    while (iss >> num >> op)
    {
        numbers.push_back(num);
    }
    numbers.push_back(num);

    sort(numbers.begin(), numbers.end());

    for (size_t i = 0; i < numbers.size(); ++i)
    {
        if (i != 0)
        {
            cout << "+";
        }
        cout << numbers[i] << endl;
    }

    return 0;
}