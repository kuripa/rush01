/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:26:10 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/14 20:38:44 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISIBLE_H
# define VISIBLE_H

# include "base.h"

int	count_visible_top_to_bottom(char board[N][N], int idx);
int	count_visible_bottom_to_top(char board[N][N], int idx);
int	count_visible_left_to_right(char board[N][N], int idx);
int	count_visible_right_to_left(char board[N][N], int idx);
int	count_visible(char board[N][N], t_direction dir, int idx);
#endif // VISIBLE_H
