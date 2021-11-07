// https://codeforces.com/problemset/problem/546/A

#include <iostream>

using namespace std;

int main()
{
  int k, n, w, cost;
  cin >> k >> n >> w;

  cost = k * (w + 1) * w / 2;

  if (cost <= n) cout << 0;
  else cout << cost - n;

  return 0;
}
