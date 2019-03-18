/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 11:25:37 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/11 11:45:06 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

char        ft_rotone(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] < 'Z')
        {
            ft_putchar(str[i] + 1);
        }
        else if (str[i] >= 'a' && str[i] < 'z')
        {
            ft_putchar(str[i] + 1);
        }
        else if (str[i] == 'Z')
        {
            ft_putchar('A');
        }
        else if (str[i] == 'z')
        {
            ft_putchar('a');
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
        ft_rotone(argv[1]);
    }
    else
    {
        ft_putchar('\n');
    }
    return (0);

}
