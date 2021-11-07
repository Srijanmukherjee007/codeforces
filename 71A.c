// https://codeforces.com/problemset/problem/71/A

#include <stdio.h>
#include <string.h>


#define LONG_WORD_LIMIT 10
#define WORD_SIZE 100

int main(void)
{
  int n, wsize;
  char word[WORD_SIZE];

  scanf("%d", &n);

  while (n--) {
    scanf("%s", word);

    wsize = strlen(word);

    if (wsize > LONG_WORD_LIMIT) {
      printf("%c%d%c\n", word[0], wsize - 2, word[wsize - 1]);
    } else {
      printf("%s\n", word);
    }

  }



  return 0;
}
