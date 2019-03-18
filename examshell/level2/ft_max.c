/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:40:31 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/11 16:58:18 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int                 max(int *tab, unsigned int len)
{
    unsigned int    cmp;
    int             cpy;

    cmp = 0;
    cpy = tab[0];
    while (cmp < len)
    {
        if (cpy < tab[cmp])
            cpy = tab[cmp];
        cmp++;
    }
    if (cmp == len)
        return (cpy);
    return (0);
}
