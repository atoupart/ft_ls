/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_t_addtab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoupart <atoupart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:23:21 by atoupart          #+#    #+#             */
/*   Updated: 2016/09/28 21:23:23 by atoupart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_size_t_addtab(const size_t *tab, size_t len)
{
    size_t      out;
 
    out = 0;
    while (len != 0)
    {
        out += *tab;
        tab++;
        len--;
    }
    return (out);
}
