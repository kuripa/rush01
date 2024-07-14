#include "solver.h"

int solve(char board[4][4], int row, int col) 
{
    char num = '1';
    // Check if we are at the end of the row 
    if (row == 4) return is_valid();
    // Check if we are at the end if the column
    if (col == 4) return solve(board, row, col);
    
    while(num <= '4')
    {
        board[row][col] = num;
        if(solve(board, row, col + 1)) return 1;
        board[row][col] = '0'; // Resert the cell
        num++;
    }

    return 0;
}

int count_visible(int line[4]) {
  int result = 0;
  int max_height = 0;
  int i = 0;
  while (i < 4) {
    if (line[i] > max_height) {
      max_height = line[i];
      result++;
    }
    i++;
  }
  return result;
}


int is_valid(char board[4][4], int idx)
{
    int i = 0;

    int line[4]; 
    // Go trough each row and check if numbers are unique
    for (int i = 0; i < 4; i++) {
        
        for (int j = 0; j < 4; j++) {
            line[j] = board[i][j];
        }
        if (!count_visible(line) ) return 0;


    } 

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            line[j] = board[j][i];
        }
        if (!count_visible(line)) return 0;
    } 
    
    return 1;
}

