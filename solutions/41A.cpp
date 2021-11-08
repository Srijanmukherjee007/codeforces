// https://codeforces.com/problemset/problem/41/A

#include <iostream>
#include <string>

#define LL long long

using namespace std;

int main()
{
  string t, s;
  cin >> t;
  cin >> s;
  string output = "YES";

  if (t.length() != s.length()) {
    output = "NO";
  } else {
    size_t len = t.length();
    for (size_t i = 0; i < len; i++) {
      if (s[i] != t[len - i - 1]) {
        output = "NO";
        break;
      }
    }
  }

  cout << output;

  return 0;
}
