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
#include "base.h"
#include "board.h"
#include "solver.h"
#include "utils.h"
/*char *hints = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";*/
/*char *hints = "2 1 3 2 1 2 2 3 2 3 3 1 2 1 2 4";*/
/*char *hints = "4 1 3 2 2 3 1 2 2 4 1 2 3 1 3 2";*/
int	main(int argc, char *argv[])
{
	char	hints_arr[N][N];
	char	board[N][N];
	char	*hints;

	(void)argc;
	(void)argv;
	hints = "3 3 2 1 2 1 3 3 4 3 1 2 1 2 2 2";
	parse_string(hints, hints_arr);
	init_board(board);
	if (!solve(board, hints_arr, 0, 0))
	{
		ft_putstr("Error");
		return (0);
	}
	print_board(board);
	return (0);
}
