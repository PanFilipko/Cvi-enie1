#include <stdio.h>

void hanoi(int n, int a, int b)
{
  if (n == 1) 
    printf("posun kamen 1 z %d na %d\n", a, b);
  else
  {
    hanoi(n - 1, a, 3 - a);
    printf("posun jablko %d z %d na %d\n", n, a, b);
    hanoi(n - 1, 3 - a - b, b);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}
