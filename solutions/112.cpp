// https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string a, b;
  char x, y;
  int v = 0;

  getline(cin, a);
  getline(cin, b);
  
  for (size_t i = 0; i < a.length(); ++i) {
    x = a[i];
    y = b[i];
    if (a[i] >= 97) x -= 32;
    if (b[i] >= 97) y -= 32;

    if (x > y) { v = 1; break; }
    if (x < y){ v = -1; break; }
  }

  cout << v;

  return 0;
}
