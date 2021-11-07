// https://codeforces.com/problemset/problem/282/A

#include <stdio.h>

int main(void)
{
  int x = 0, n;
  char op[4]; // to accomodate '\0'

  scanf("%d", &n);

  while (n--) {
    scanf("%3s", op);

    if (op[1] == '+') x++;
    else x--;
  }

  printf("%d\n", x);

  return 0;
}
