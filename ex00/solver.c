#include "solver.h"

int isSafe(char board[4][4], int row, int col, char num) {
    for (int x = 0; x < 4; x++) {
        if (board[row][x] == num || board[x][col] == num) {
            return 0;
        }
    }
    return 1;
}

int solve(char board[4][4], char hints[4][4], int row, int col) {
  char num = '1';
  // Check if we are at the end of the row
  if (row == 4)
    return is_valid(board, hints);
  // Check if we are at the end of the column
  if (col == 4)
    return solve(board, hints, row + 1, 0);

  while (num <= '4') {
    if (isSafe(board, row, col, num)) {
        board[row][col] = num;
        if (solve(board, hints, row, col + 1))
          return 1;
        board[row][col] = '0'; // Reset the cell
    }
    num++;
  }

  return 0;
}

int count_visible(char board[4][4], Direction dir, int idx) {
  int max_height = 0;
  int visible_count = 0;

  if (dir == TOP) {
    for (int row = 0; row < 4; row++) {
      int height = board[row][idx] - '0';
      if (height > max_height) {
        max_height = height;
        visible_count++;
      }
    }
  } else if (dir == BOTTOM) {
    for (int row = 3; row >= 0; row--) {
      int height = board[row][idx] - '0';
      if (height > max_height) {
        max_height = height;
        visible_count++;
      }
    }
  } else if (dir == LEFT) {
    for (int col = 0; col < 4; col++) {
      int height = board[idx][col] - '0';
      if (height > max_height) {
        max_height = height;
        visible_count++;
      }
    }
  } else if (dir == RIGHT) {
    for (int col = 3; col >= 0; col--) {
      int height = board[idx][col] - '0';
      if (height > max_height) {
        max_height = height;
        visible_count++;
      }
    }
  }

  return visible_count;
}

int is_unique(char board[4][4], int idx) {
  int seen[4 + 1] = {0};  // Array to track seen numbers

  for (int row = 0; row < 4; row++) {
    char num = board[row][idx];  // Use char directly

    if (num == '0') continue;  // Skip empty cells (assuming '0' denotes an empty cell)
    if (seen[num - '0']) return 0;  // If number has been seen, return false
    seen[num - '0'] = 1;  // Mark the number as seen
  }

  return 1;  // If all numbers are unique, return true
}
  
int is_valid(char board[4][4], char hints[4][4]) {
  for (int i = 0; i < 4; i++) {
    if (!is_unique(board, i)) 
      return 0;
    if (count_visible(board, TOP, i) != hints[TOP][i] - '0')
      return 0;
    if (count_visible(board, BOTTOM, i) != hints[BOTTOM][i] - '0')
      return 0;
    if (count_visible(board, LEFT, i) != hints[LEFT][i] - '0')
      return 0;
    if (count_visible(board, RIGHT, i) != hints[RIGHT][i] - '0')
      return 0;
  }
  return 1;
}
