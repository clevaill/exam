/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:08:26 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/13 17:44:13 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t      ft_strcspn(const char *s1, const char *s2)
{
    const char  *ss1;
    const char  *ss2;

    ss1 = s1;
    while (*ss1)
    {
        ss2 = s2;
        while (*ss2)
        {
            if (*ss1 == *ss2++)
                return (ss1 - s1);
        }
        ss1++;
    }
    return (ss1 - s1);
}
