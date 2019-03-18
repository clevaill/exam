/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 11:35:32 by clevaill          #+#    #+#             */
/*   Updated: 2018/05/07 11:38:52 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *range;
    int i;                       

    if (start > end)
        range = (int *)malloc(sizeof(int) * (start - end) + 1);
    else
        range = (int *)malloc(sizeof(int) * (end - start) + 1);
    i = 0;
    while (start != end)
    {
        range[i++] = start;
        start += (start > end) ? -1 : 1;
    }
    range[i] = start;
    return (range);
}
