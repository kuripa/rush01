/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:14:17 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/14 21:03:30 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"

int	is_safe(char board[N][N], int row, int col, char num)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (board[row][i] == num || board[i][col] == num)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	solve(char board[N][N], char hints[N][N], int row, int col)
{
	char	num;

	num = '1';
	if (row == N)
		return (is_valid(board, hints));
	if (col == N)
		return (solve(board, hints, row + 1, 0));
	while (num <= '4')
	{
		if (is_safe(board, row, col, num))
		{
			board[row][col] = num;
			if (solve(board, hints, row, col + 1))
				return (1);
			board[row][col] = '0';
		}
		num++;
	}
	return (0);
}

/*int	count_visible(char board[N][N], t_direction dir, int idx)*/
/*{*/
/*	int	max_height;*/
/*	int	visible_count;*/
/*	int	row;*/
/*	int	col;*/
/*	int	height;*/
/**/
/*	max_height = 0;*/
/*	visible_count = 0;*/
/*	if (dir == TOP)*/
/*	{*/
/*		row = 0;*/
/*		while (row < N)*/
/*		{*/
/*			height = board[row][idx] - '0';*/
/*			if (height > max_height)*/
/*			{*/
/*				max_height = height;*/
/*				visible_count++;*/
/*			}*/
/*			row++;*/
/*		}*/
/*	}*/
/*	else if (dir == BOTTOM)*/
/*	{*/
/*		row = 3;*/
/*		while (row >= 0)*/
/*		{*/
/*			height = board[row][idx] - '0';*/
/*			if (height > max_height)*/
/*			{*/
/*				max_height = height;*/
/*				visible_count++;*/
/*			}*/
/*			row--;*/
/*		}*/
/*	}*/
/*	else if (dir == LEFT)*/
/*	{*/
/*		col = 0;*/
/*		while (col < N)*/
/*		{*/
/*			height = board[idx][col] - '0';*/
/*			if (height > max_height)*/
/*			{*/
/*				max_height = height;*/
/*				visible_count++;*/
/*			}*/
/*			col++;*/
/*		}*/
/*	}*/
/*	else if (dir == RIGHT)*/
/*	{*/
/*		col = 3;*/
/*		while (col >= 0)*/
/*		{*/
/*			height = board[idx][col] - '0';*/
/*			if (height > max_height)*/
/*			{*/
/*				max_height = height;*/
/*				visible_count++;*/
/*			}*/
/*			col--;*/
/*		}*/
/*	}*/
/*	return (visible_count);*/
/*}*/

int	is_unique(char board[N][N], int idx)
{
	int		seen[N + 1];
	int		row;
	char	num;
	int		i;

	row = 0;
	i = 0;
	while (i <= N)
	{
		seen[i] = 0;
		i++;
	}
	while (row < N)
	{
		num = board[row][idx];
		if (num == '0')
			continue ;
		if (seen[num - '0'])
			return (0);
		seen[num - '0'] = 1;
		row++;
	}
	return (1);
}

int	is_valid(char board[N][N], char hints[N][N])
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (!is_unique(board, i))
			return (0);
		if (count_visible(board, TOP, i) != hints[TOP][i] - '0')
			return (0);
		if (count_visible(board, BOTTOM, i) != hints[BOTTOM][i] - '0')
			return (0);
		if (count_visible(board, LEFT, i) != hints[LEFT][i] - '0')
			return (0);
		if (count_visible(board, RIGHT, i) != hints[RIGHT][i] - '0')
			return (0);
		i++;
	}
	return (1);
}
