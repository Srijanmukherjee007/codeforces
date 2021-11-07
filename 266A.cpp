// https://codeforces.com/problemset/problem/266/A

#include <iostream>
#include <string>

using namespace std;

int main()
{

  int n, minRemove = 0;
  cin >> n;
  string s;
  cin >> s;
  
  for (int i = 1; i < n; ++i) {
    if (s[i - 1] == s[i]) {
      minRemove++;
    }
  }

  cout << minRemove;

  return 0;
}
