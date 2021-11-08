// https://codeforces.com/problemset/problem/61/A

#include <iostream>
#include <string>

#define LL long long

using namespace std;

int main()
{
  string a;
  string b;

  cin >> a;
  cin >> b;
  
  for (size_t i = 0; i < a.length(); ++i) {
    if ((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')) cout << '1';
    else cout << '0';
  }

  return 0;
}
