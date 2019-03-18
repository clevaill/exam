/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:53:37 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/11 13:09:25 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

char        ft_ulstr(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            ft_putchar(str[i] + (97 - 65));
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            ft_putchar(str[i] - (97 - 65));
        }
        else
        {
            ft_putchar(str[i]);
        }
        i++;
    }
    ft_putchar('\n');
    return (*str);
}

int         main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_ulstr(argv[1]);
    }
    else
    {
        ft_putchar('\n');
    }
    return (0);
}
