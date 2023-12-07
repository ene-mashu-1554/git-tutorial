#include <stdio.h>

int main()
{
  printf("fizzbuzz and git checked start!\n");
  for (int i = 1; i <= 30; i++)
  {
    if (i % 3 == 0 && i % 5 == 0)
      printf("fizzbuzz\n");
    else if (i % 7 == 0)
      printf("git\n");
    else if (i % 3 == 0)
      printf("fizz\n");
    else if (i % 5 == 0)
      printf("buzz\n");
    else
      printf("%d is not zz\n", i);
  }
  printf("fizzbuzz and git checked cleared all!\n");
  return 0;
}
