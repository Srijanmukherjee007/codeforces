// https://codeforces.com/problemset/problem/136/A

#include <iostream>

#define LL long long

using namespace std;

int main()
{
  int n;
  cin >> n;

  int p;
  int result[n]; 
  for (int i = 0; i < n; ++i) {
    cin >> p;
    result[p - 1] = i + 1;
  }
  
  for (int i = 0 ; i < n; ++i) {
    cout << result[i] << " ";
  } 

  return 0;
}
