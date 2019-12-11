#include <stdio.h>

const int N = 15;

int dec_to_bin(int num)
{
    if (num == 0)  return 0;
    else return (num % 2 + 10 * dec_to_bin(num / 2));
}

int pow_rec(int a, int b)
{
  if (b != 0) return pow_rec(a, b - 1) * a;
  else return 1;
}

int pow_rec_second(int a, int b)
{
  if (b != 0) return (b % 2) ? pow_rec_second(a, b - 1) * a : pow_rec_second(a * a, b / 2);
  else return 1;
}

int program(int a, int b)
{
  if (a < b) return program(a + 1, b) + program(a * 2, b);
  else if (a == b) return 1;
  else return 0;
}
