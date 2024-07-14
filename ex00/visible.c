/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:34:56 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/14 20:36:42 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visible.h"

int	count_visible_top_to_bottom(char board[N][N], int idx)
{
	int	max_height;
	int	visible_count;
	int	height;
	int	row;

	max_height = 0;
	visible_count = 0;
	row = 0;
	while (row < N)
	{
		height = board[row][idx] - '0';
		if (height > max_height)
		{
			max_height = height;
			visible_count++;
		}
		row++;
	}
	return (visible_count);
}

int	count_visible_bottom_to_top(char board[N][N], int idx)
{
	int	max_height;
	int	visible_count;
	int	height;
	int	row;

	max_height = 0;
	visible_count = 0;
	row = N - 1;
	while (row >= 0)
	{
		height = board[row][idx] - '0';
		if (height > max_height)
		{
			max_height = height;
			visible_count++;
		}
		row--;
	}
	return (visible_count);
}

int	count_visible_left_to_right(char board[N][N], int idx)
{
	int	max_height;
	int	visible_count;
	int	height;
	int	col;

	max_height = 0;
	visible_count = 0;
	col = 0;
	while (col < N)
	{
		height = board[idx][col] - '0';
		if (height > max_height)
		{
			max_height = height;
			visible_count++;
		}
		col++;
	}
	return (visible_count);
}

int	count_visible_right_to_left(char board[N][N], int idx)
{
	int	max_height;
	int	visible_count;
	int	height;
	int	col;

	max_height = 0;
	visible_count = 0;
	col = N - 1;
	while (col >= 0)
	{
		height = board[idx][col] - '0';
		if (height > max_height)
		{
			max_height = height;
			visible_count++;
		}
		col--;
	}
	return (visible_count);
}

int	count_visible(char board[N][N], t_direction dir, int idx)
{
	if (dir == TOP)
	{
		return (count_visible_top_to_bottom(board, idx));
	}
	else if (dir == BOTTOM)
	{
		return (count_visible_bottom_to_top(board, idx));
	}
	else if (dir == LEFT)
	{
		return (count_visible_left_to_right(board, idx));
	}
	else if (dir == RIGHT)
	{
		return (count_visible_right_to_left(board, idx));
	}
	else
	{
		return (0);
	}
}
