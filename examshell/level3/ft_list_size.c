/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 15:16:27 by clevaill          #+#    #+#             */
/*   Updated: 2018/05/07 15:26:37 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int         ft_list_size(t_list *begin_list)
{
    int     size;
    t_list  *list;

    size = 0;
    list = begin_list;
    if (list)
    {
        while (!(list->next))
        {
            list = list->next;
            size += 1;
        }
    }
    return (size - 1);
}
