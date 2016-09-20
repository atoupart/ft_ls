/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dim_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuzeau <cybercrep@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 01:54:28 by tifuzeau          #+#    #+#             */
/*   Updated: 2015/12/01 03:21:43 by tifuzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_dim_x(char const *s, char c)
{
	size_t x;

	x = 1;
	while (*s != c && *s)
	{
		s++;
		x++;
	}
	return (x);
}