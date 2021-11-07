// https://codeforces.com/problemset/problem/791/A

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  int a, b;
  cin >> a >> b;
  
  double y = log(b / (double) a) / log((double) 1.5);
  
  if ((int) y == (int) ceil(y)) cout << (int) y + 1;
  else cout << (int) ceil(y);

  return 0;
}
