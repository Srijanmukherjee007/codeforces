// https://codeforces.com/problemset/problem/50/A

#include <stdio.h>

int main(void)
{
  int m, n;
  scanf("%d %d", &m, &n);

  printf("%d", (m / 2) * n + (m % 2) * (n / 2));
  
  return 0;
}
