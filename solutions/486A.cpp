// https://codeforces.com/problemset/problem/486/A

#include <iostream>

#define LL long long

using namespace std;

int main()
{
  LL n;
  cin >> n;

  if (n % 2 == 0) cout << n / 2;
  else cout << (-n - 1) / 2;

  return 0;
}
