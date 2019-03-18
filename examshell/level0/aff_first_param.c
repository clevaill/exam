/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 17:44:18 by clevaill          #+#    #+#             */
/*   Updated: 2017/11/29 17:51:48 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

char        ft_aff_first_param(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
    return(*str);
}

int         main(int argc, char **argv)
{
    if (argc >= 2)
    {
        ft_aff_first_param(argv[1]);
    }
    else
    {
        ft_putchar('\n');
    }
    return (0);
}
