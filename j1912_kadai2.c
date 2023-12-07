#include <stdio.h>

int main()
{
  for (int i = 1; i <= 30; i++)
  {
    if (i % 3 == 0 && i % 5 == 0)
      printf("fizzbuzz\n");
    else
      printf("%d is not zz\n", i);
  }
  return 0;
}
