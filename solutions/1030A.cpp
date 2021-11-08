// https://codeforces.com/problemset/problem/1030/A

#include <iostream>
#include <string>

#define LL long long

using namespace std;

int main()
{
  int n, res; 
  string ans = "EASY";
  
  cin >> n;

  while (n--) {
    cin >> res;

    if (res == 1) {
      ans = "HARD";
      break;
    }
  }

  cout << ans;

  return 0;
}
