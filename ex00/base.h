/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:15:26 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/14 19:15:27 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

# include <unistd.h>

# define N 4

typedef enum t_direction
{
	TOP,
	BOTTOM,
	LEFT,
	RIGHT
}	t_direction;

#endif // !BASE_H
