/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 12:56:22 by clevaill          #+#    #+#             */
/*   Updated: 2018/05/07 13:10:14 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_putnbr(int n)
{
    long    nb;

    nb = n;
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int         main(int argc, char **argv)
{
    int     x;

    argv[1] = "0";
    x = argc - 1;
    if (x >= 0)
        ft_putnbr(x);
    ft_putchar('\n');
    return (0);
}
