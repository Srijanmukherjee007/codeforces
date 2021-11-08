// https://codeforces.com/problemset/problem/96/A

#include <iostream>
#include <string>

#define LL long long

using namespace std;

int main()
{
  string a;
  cin >> a;
  
  int count = 1;

  for (size_t i = 1; i < a.length(); ++i) {
    if (a[i - 1] == a[i]) count++;
    else count = 0;

    if (count >= 7) {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";

  return 0;
}
