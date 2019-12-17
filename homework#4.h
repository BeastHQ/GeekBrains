
#include <stdio.h>

const int H = 8;
const int W = 8;

int routes(int r, int c, int map[H][W])
{
  if (r == 0 || c == 0) return 1;
  else return (map[r][c] == -1) ? 0 : routes(r - 1, c, map) + routes(r, c - 1, map);
}

void fill_desk(int desk[H][W])
{
  for (int i = 0; i < H; i++)
	for(int j = 0; j < W; j++)
	  desk[i][j] = 0;
}

void print_desk(int desk[H][W])
{
  for (int i = 0; i < H; i++)
  {
	for(int j = 0; j < W; j++)
	  printf("%3d ", desk[i][j]);
	printf("\n");
  }
}
int possible(int desk[H][W], int x, int y)
{
  return x >= 0 && x < H && y >= 0 && y < W && desk[x][y] == 0;
}
int possible_move[8][2] = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1},
{2, -1}, {1, -2}, {-1, -2}, {-2, -1}};

int Horse(int desk[H][W], int current_x, int current_y, int move)
{
  int next_x, next_y;
  int maxMoves = H * W - 1;
  desk[current_x][current_y] = move;
  if (move > maxMoves) return 1;
  for (int i = 0; i < 7; i++)
  {
	  next_x = current_x + possible_move[i][1];
	  next_y = current_y + possible_move[i][0];
	  if (possible(desk, next_x, next_y) && Horse(desk, next_x,next_y, move + 1)) return 1;
  }
  desk[current_x][current_y] = 0;
  return 0;
}