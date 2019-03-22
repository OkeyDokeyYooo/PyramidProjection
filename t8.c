#include <stdio.h>

int main(void)
{
  int x;
  int y;
  int z;

  scanf("%d %d %d", &x, &y, &z);
  for(int i = 0; i < x; i++)
  {
    printf("#");
  }
  printf("\n");

  for(int a = 0; a < y-2; a++)
  {
    printf("#");
    for(int b =0; b < x-2; b++)
    {
      printf(".");
    }
    printf("#\n");
  }
  if(x == 1)
  {
    return 0;
  }

  for(int c = 0; c < x; c++)
  {
      printf("#");
  }
  printf("\n");

  return 0;
}
