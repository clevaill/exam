/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 17:42:59 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/11 18:08:06 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char        *ft_wdmatch(char *str1, const char *str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 == *str2)
            str1++;
        str2++;
    }
    if (*str1 == '\0')
        return (str1);
    return (NULL);
}

int                 main(int argc, char **argv)
{
    char            *tmp;

    if (argc == 3)
    {
        tmp = ft_wdmatch(argv[1], argv[2]);
        if (tmp != NULL)
            write(1, argv[1], tmp - argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}
