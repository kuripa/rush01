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

/*TODO: remove this and create a dynamic array*/
#define ROW 4
#define COLUMN 4

int count_visible(int line[ROW])
{
    int result = 0;
    int max_height = 0;
    int i = 0;
    while(i < ROW)
    {
        if(line[i] > max_height)
        {
            max_height = line[i];
            result++;
        }
        i++;
    }
    return result;
}

/*int is_valid( )*/
/*{*/
/**/
/*    return 0;*/
/*}*/

void solve(char *board[ROW][COLUMN]) { (void)board; }


void print_board(char board[ROW][COLUMN]) {
  int i = 0;
  int j = 0;
  //(void)board;
  while (i < COLUMN) {
    j = 0;
    while (j < ROW) {
      ft_putchar(board[i][j]);
      ft_putchar(' ');
      j++;
    }

    ft_putchar('\n');
    i++;
  }
}


int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;

  // TODO: check if the input is valid

  char *hints = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
  char hints_arr[ROW][COLUMN];
  char board[ROW][COLUMN];

  int i = 0;
  int j = 0;
  while (i < ROW) {
    j = 0;
    while (j < COLUMN) {
      board[i][j] = '0';
      j++;
    }

    i++;
  }

  split_string(hints, hints_arr);

   int line[4];
  for (int i = 0; i < 4; i++) {
    line[i] = board[0][i]; 
  }
   printf("%d", count_visible(line));
  

  print_board(board);
  print_board(hints_arr);

  return 0;
}
