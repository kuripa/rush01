/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:33:52 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/13 12:34:10 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include "dbg.h"
#include <stdio.h>
#include "utils.h"
#include "solver.h"

/*TODO: remove this and create a dynamic array*/

#define ROW 4
#define COLUMN 4

int grid[4][4];

int main(int argc, char *argv[]) {
  // TODO: check if the input is valid
  (void)argc;
  (void)argv;


  char *hints = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
  char hints_arr[ROW][COLUMN];
  char board[ROW][COLUMN];

  int i = 0;
  int j = 0;

  // This should be in the main.c
  while (i < ROW) {
    j = 0;
    while (j < COLUMN) {
      board[i][j] = '0';
      j++;
    }

    i++;
  }


  split_string(hints, hints_arr);


  solve(board, 0, 0);


  //printf("%d", count_visible(line));

  print_board(board);
  print_board(hints_arr);

  return 0;
}
