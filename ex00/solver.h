/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:14:21 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/14 19:14:22 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

# include "base.h"

int	solve(char board[N][N], char hints[N][N], int row, int col);
int	count_visible(char board[N][N], t_direction dir, int idx);
int	is_valid(char board[N][N], char hints[N][N]);
int	is_unique(char board[N][N], int idx);
int	is_safe(char board[N][N], int row, int col, char num);

#endif // SOLVER_H
