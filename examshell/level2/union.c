/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 17:19:30 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/11 17:42:43 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_union(char *str, char *str2)
{
    int     tab[256] = {0};
    int     a;

    while (str[a])
    {
        if (tab[(int)str[a]] == 0)
        {
            tab[(int)str2[a]] = 1;
            ft_putchar(str[a]);
        }
        a++;
    }
    a = 0;
    while (str2[a])
    {
        if (tab[(int)str2[a]] == 0)
        {
            tab[(int)str2[a]] = 1;
            ft_putchar(str2[a]);
        }
        a++;
    }
}

int         main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    ft_putchar('\n');
    return (0);
}
