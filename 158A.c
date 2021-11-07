// https://codeforces.com/problemset/problem/158/A

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b) 
{
  return * (int *) b - * (int *) a;
}

int main(void)
{
  int n, k, p = 0, s, minscore;
  scanf("%d %d", &n, &k);
  
  int scores[n];

  for (int i = 0; i < n; ++i) {
    scanf("%d", &s);
    scores[i] = s;
  }

  minscore = scores[k - 1];

  qsort(scores, n, sizeof(int), cmpfunc);

  for (int i = 0; i < n; ++i) {
    if (scores[i] > 0 && scores[i] >= minscore) p++;
  }
  
  printf("%d", p);

  return 0;
}
