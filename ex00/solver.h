#ifndef SOLVER_H 
#define SOLVER_H
typedef enum { TOP, BOTTOM, LEFT, RIGHT } Direction;

int solve(char board[4][4], char hints[4][4], int row, int col);
int count_visible(char board[4][4], Direction dir, int idx);
int is_valid(char board[4][4], char hints[4][4]);
int is_unique(char board[4][4], int idx);
int isSafe(char board[4][4], int row, int col, char num);
#endif // SOLVER_H
