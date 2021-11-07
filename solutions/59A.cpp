// https://codeforces.com/problemset/problem/59/A

#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  int lc = 0, uc = 0;

  for (size_t i = 0; i < s.length(); ++i) {
    if (s[i] < 97) uc++;
    else lc++;
  }

  if (uc > lc) {
    for (size_t i = 0; i < s.length(); ++i) cout << (char) toupper(s[i]);
  } else {
    for (size_t i = 0; i < s.length(); ++i) cout << (char) tolower(s[i]);
  }
  return 0;
}
