/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 17:19:38 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/18 15:06:28 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

int         main(int argc, char **argv)
{
    int     i;

    if  (argc != 2)
    {
        ft_putchar('\n');
    }
    else
    {
        while (argv[1][i] != '\0')
        {
            i++;
        }
        i--;
        while (i >= 0)
        {
            ft_putchar(argv[1][i]);
            i--;
       }
        ft_putchar('\n');
    }
    return (0);
}
