/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 11:46:51 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/11 12:52:48 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

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

char        *ft_search_and_replace(char *s1, char *s2, char *s3)
{
    int     i;

    i = 0;
    while (s1[i] != '\0')
    {
       if (s1[i] == s2[0])
           s1[i] = s3[0];
       i++;
    }
    return (s1);
}

int         main(int argc, char **argv)
{
    char    *tmp;

    if (argc == 4)
    {
        if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
        {
            tmp = ft_search_and_replace(argv[1], argv[2], argv[3]);
            ft_putstr(tmp);
        }
    }
    ft_putchar('\n');
    return (0);
}
