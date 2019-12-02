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

int even(int x)
{
  if (x % 2 == 0) return 0;
  else return 1;
}

int black_or_white(int x, int y)
{
  if (even(x) == even(y)) return 1;
  else return 0;
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