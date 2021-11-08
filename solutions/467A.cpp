// https://codeforces.com/problemset/problem/467/A

#include <iostream>

#define LL long long

using namespace std;

int main()
{
  int n, p, q, roomsAvailable = 0;
  cin >> n;

  while (n--) 
  {
    cin >> p >> q;
    if (q - p >= 2) roomsAvailable++;
  }

  cout << roomsAvailable;

  return 0;
}
