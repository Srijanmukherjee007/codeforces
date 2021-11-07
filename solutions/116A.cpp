// https://codeforces.com/problemset/problem/116/A

#include <iostream>

using namespace std;

int main()
{
  int stops;
  cin >> stops;
  
  int cap = 0;
  int enter, exit;
  int curr = 0;

  while (stops--) {
    cin >> exit >> enter;
    
    curr += enter - exit;

    if (curr > cap) cap = curr;
  }

  cout << cap;

  return 0;
}
