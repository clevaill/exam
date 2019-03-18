/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 14:42:20 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/11 15:15:00 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int         ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char        *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char        *ft_strdup(char *src)
{
    char    *str;

    str = malloc(sizeof(*str) * ft_strlen(src) + 1);
    if (str)
    {
        ft_strcpy(str, src);
        return (str);
    }
    return (NULL);
}
