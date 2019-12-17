#include "homework#4.h"


int main(int argc, const char** argv) {

  // 1st task
  int arr[H][W];
  int obstacle[H][W];

  obstacle[2][3] = -1;
  obstacle[3][2] = -1;
  obstacle[5][5] = -1;
  obstacle[6][7] = -1;

  for (int i = 0; i < H; i++)
	for (int j = 0; j < W; j++) arr[i][j] = routes(i, j, obstacle);

  for (int i = 0; i < H; i++)
  {
	for (int j = 0; j < W; j++) printf("%5d ", arr[i][j]);
	printf("\n");
  }

  // 2nd task
  int desk[H][W];
  int maxMoves = H * W - 1;

  printf("\n");
  fill_desk(desk);
  Horse(desk, 1,0,1);
  print_desk(desk);

  return 0;
}
