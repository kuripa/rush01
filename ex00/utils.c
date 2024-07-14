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

void	ft_remove_spaces(char *str)
{
	char	*dst;

	dst = str;
	while (*str)
	{
		if (*str != ' ')
		{
			*dst++ = *str;
		}
		str++;
	}
	*dst = '\0';
}

int	validate_string(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		if ((str[len] < '1' && str[len] > '9'))
		{
			return (0);
		}
		len++;
	}
	return (len == N * N);
}

void	parse_string(char *hints, char hints_arr[N][N])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_remove_spaces(hints);
	if (validate_string(hints))
	{
		while (i < N && *hints)
		{
			j = 0;
			while (j < N)
			{
				hints_arr[i][j] = *hints;
				hints++;
				j++;
			}
			i++;
		}
	}
	else
	{
	}
}
