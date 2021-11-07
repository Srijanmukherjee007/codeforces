// https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <string>

using namespace std;

int main()
{

  string s;
  getline(cin, s);

  for (size_t i = 0; i < s.length(); ++i) {
    if (s[i] >= 97 && i == 0) cout << (char) (s[i] - 32);
    else cout << s[i];
  }

  return 0;
}
