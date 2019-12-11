#include "header.h"

int main() {
  // 1st task
  printf("%f\n", mass_index(WEIGHT, HEIGHT));
  //2nd task
  printf("%d %d -> ", a, b);
  swap(&a, &b);
  printf("%d %d\n", a, b);

  //3rd task
  printf("Given equation: root2 + 2x - 3 = 0\n");
  D = 2 * 2 - 4 * 1 * (-3);
  if (D > 0)
  {
    root1 = ((-2) + sqrt(D)) / (2 * 1);
    root2 = ((-2) - sqrt(D)) / (2 * 1);
    printf("First root is: %f\nSecond root is: %f\n", root1, root2);
  }else if (D == 0)
  {
    root1 = ((-2) + sqrt(D)) / (2 * 1);
    printf("D == 0, so there's only one root: %f\n", root1);
  }else
  {
    printf("D < 0, so there's no roots in this equation!\n");
  }
  //4th task
  printf("Тебе %d ", AGE);
  if (t1 == 1 && t2 != 11) printf("год!\n");
  if (t1 >= 2 && t1 <= 4 && (t2 < 10 || t2 >= 20)) printf("года!\n");
  else printf("лет!\n");

  //5th task
  matching_tiles(x_1, y_1, x_2, y_2);

  //6th task
  for (int i = 0; i < size(NUMBER) - 1; i++)
  {
    divisor *= 10;
  }
  printf("%d\n", divisor);
  printf("Number %d has next automorphic numbers:\n", NUMBER);
  for (int i = 0; i < NUMBER; i++)
  {
    if((i * i) % divisor == i) printf("%d\n", i);
  }
  return 0;
}
