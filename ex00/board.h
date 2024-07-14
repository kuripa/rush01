/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:13:14 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/14 19:13:15 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_H
# define BOARD_H

# include "base.h"
# include "utils.h"

void	init_board(char board[N][N]);
void	print_board(char board[N][N]);

#endif // !BOARD_H
