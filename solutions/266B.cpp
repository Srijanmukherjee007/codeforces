// https://codeforces.com/problemset/problem/266/B

#include <iostream>

using namespace std;

void swap(string& s, int i, int j) 
{
  char temp = s[i];
  s[i] = s[j];
  s[j] = temp;
}

int main()
{
  int n, t;
  cin >> n >> t;

  string queue;
  cin >> queue;

  while (t--) {
    for (size_t i = 0; i < queue.length() - 1; i++) {
      if (queue[i] == 'B' && queue[i + 1] == 'G') { swap(queue, i, i + 1); i++; }
    }
  }

  cout << queue;

  return 0;
}
