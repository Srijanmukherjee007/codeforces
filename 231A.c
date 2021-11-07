// https://codeforces.com/problemset/problem/231/A

#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);

  int a, b, c, questions = 0;

  while (n--) {
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c > 1) questions++;
  }

  printf("%d", questions);
  return 0;
}
