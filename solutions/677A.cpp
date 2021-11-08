// https://codeforces.com/problemset/problem/677/A

#include <iostream>

#define LL long long

using namespace std;

int main()
{
  int n, h, w = 0, f;
  cin >> n >> h;

  while (n--) {
    cin >> f;
    w += 1;
    if (f > h) w += 1;
  }

  cout << w;

  return 0;
}
