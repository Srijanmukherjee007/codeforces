// https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  int distinctchar = 1;
  string s;
  cin >> s;

  sort(s.begin(), s.end());

  for (size_t i = 1; i < s.length(); ++i) {
    if (s[i - 1] != s[i]) distinctchar++;
  }
  
  if (distinctchar % 2 == 0) cout << "CHAT WITH HER!";
  else                       cout << "IGNORE HIM!";

  return 0;
}
