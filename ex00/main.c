/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:33:52 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/14 21:14:51 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "base.h"
#include "board.h"
#include "solver.h"
#include "utils.h"

int	main(int argc, char *argv[])
{
	char	hints[N][N];
	char	board[N][N];

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	parse_string(argv[1], hints);
	init_board(board);
	if (!solve(board, hints, 0, 0))
	{
		ft_putstr("Error\n");
		return (0);
	}
	print_board(board);
	return (0);
}
