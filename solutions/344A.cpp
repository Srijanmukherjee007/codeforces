// https://codeforces.com/problemset/problem/344/A

#include <iostream>

#define LL long long

using namespace std;

int main()
{
  int n, mag, prevMag = 0, grps = 0;

  cin >> n;

  while (n--) {
    cin >> mag;
    if (mag != prevMag) grps += 1;
    prevMag = mag;
  }

  cout << grps;

  return 0;
}
