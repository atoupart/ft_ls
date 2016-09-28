/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <atoupart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:12:08 by atoupart          #+#    #+#             */
/*   Updated: 2016/09/28 21:12:10 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
void    ft_free_2d_size(char **str, size_t len)
{
    while (len)
    {
        if (*str != NULL)
            free(*str);
        *str = NULL;
        str++;
        len--;
    }
}
