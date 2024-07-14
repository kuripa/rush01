/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:12:55 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/14 19:13:01 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "board.h"

void	init_board(char board[N][N])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
}

void	print_board(char board[N][N])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			ft_putchar(board[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
