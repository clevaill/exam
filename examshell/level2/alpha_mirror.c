/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:15:52 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/13 18:31:11 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

char        ft_alpha_mirror(char *str)
{
    int     i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            ft_putchar('m' - (str[i] - 'n'));
        else if (str[i] >= 'A' && str[i] <= 'Z')
            ft_putchar('M' - (str[i] - 'N'));
        else
            ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
    return (*str);
}

int         main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_alpha_mirror(argv[1]);
    }
    else
    {
        ft_putchar('\n');
    }
    return (0);
}
