#include <stdio.h>
#include <math.h>

const float HEIGHT = 1.75;
const int WEIGHT = 80;
const int AGE = 25;
const unsigned int NUMBER = 125;

int t1 = AGE % 10;
int t2 = AGE % 100;
int a = 8;
int b = 5;
float D, root1, root2;
int x_1 = 1;
int y_1 = 2;
int x_2 = 3;
int y_2 = 4;
int divisor = 1;

float mass_index(int w, float h)
{
  return (WEIGHT / (HEIGHT * HEIGHT));
}

void swap(int *a, int *b)
{
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;
}

int even(int x)
{
  if (x % 2 == 0) return 0;
  else return 1;
}

void matching_tiles(int x_1, int y_1, int x_2, int y_2)
{
  if ((even(x_1) == even(y_1)) == (even(x_2) == even(y_2))) printf("Tiles are matching!\n");
  else printf("Tiles aren't matching!\n");
}

int size(int x)
{
  int count = 1;
  while(x >= 10)
  {
    count += 1;
    x /= 10;
  }
  return count;
}
