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

#include <unistd.h>


/*TODO: remove this and create a dynamic array*/
#define ROW 4
#define COLUMN 4

void solve(char *board[ROW][COLUMN])
{
    (void)board;
}

void ft_putchar(char c)
{
    write(1, &c, 1); 
}

void ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nbr);
    }
    else if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        ft_putchar(nbr + '0');
    }
}

void print_board(char board[ROW][COLUMN])
{
    int i = 0;
    int j = 0;
    //(void)board;
    while(i < COLUMN)
    {
        j = 0;
        while (j < ROW)
        {
            ft_putchar(board[i][j]);
            ft_putchar(' ');
            j++;
        }
       
        ft_putchar('\n');
        i++;
    }
}

int main(int argc, char* argv[])
{	
    (void)argc;
    (void)argv;
    
    
    //char *hints = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
    char board[ROW][COLUMN];

    int i = 0;
    int j = 0;
    while(i < ROW)
    {
        j = 0;
        while (j < COLUMN)
        {
            board[i][j] = '0';
            j++;
        }
        
        i++;
    }
    
    print_board(board);


    return 0;
}
