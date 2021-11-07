// https://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <cmath>

using namespace std;

int main(void) 
{
  int row, col, cell;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> cell;
      
      if (cell == 1) {
        row = i;
        col = j;
        break;
      }
    }

    if (cell == 1) break;
  }

  cout << abs(2 - row) + abs(2 - col);
  
  return 0;
}
