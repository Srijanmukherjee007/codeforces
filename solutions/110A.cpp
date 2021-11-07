// https://codeforces.com/problemset/problem/110/A

#include <iostream>

using namespace std;

bool isLucky(long n) 
{
  if (n == 0) return false;
  int d;
  while (n != 0) {
    d = n % 10;
    if (d != 4 && d != 7) return false;
    n /= 10;
  }

  return true;
}

int main()
{
  long long n;

  cin >> n;

  long long luckyDigitCounter = 0;

  while (n) {
    if (n % 10 == 4 || n % 10 == 7) luckyDigitCounter++;
    n /= 10;
  }
  
  if (isLucky(luckyDigitCounter)) cout << "YES";
  else cout << "NO";

  return 0;
}
