// Starting by the mercy of Almighty Allah.

#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int room;
  cin >> room;
  int people, roomCapacity, count = 0;

  for (int i = 0; i < room; i++)
  {
    cin >> people >> roomCapacity;

    if ((roomCapacity - people) >= 2)
    {
        count++;
    }
    
  }
  
  cout << count << "\n";

}

int main()
{
    solve();

    return 0;
}