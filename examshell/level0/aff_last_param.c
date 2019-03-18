/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 17:57:16 by clevaill          #+#    #+#             */
/*   Updated: 2017/11/29 18:13:01 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

char        ft_aff_last_param(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
    return (*str);
}

int         main(int argc, char **argv)
{
    if (argc < 2)
    {
        ft_putchar('\n');
    }
    else    
    {
        ft_aff_last_param(argv[argc - 1]);
    }
    return (0);
}
