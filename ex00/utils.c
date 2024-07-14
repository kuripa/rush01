/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:13:29 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/14 19:13:30 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (str)
	{
		while (*str)
		{
			ft_putchar(*str);
			str++;
		}
	}
}

void	parse_string(char *hints, char hints_arr[N][N])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (hints)
	{
		while (i < N && *hints)
		{
			j = 0;
			while (j < N)
			{
				if (*hints >= '0' && *hints <= '9')
				{
					hints_arr[i][j] = *hints;
					j++;
				}
				hints++;
			}
			i++;
		}
	}
}
