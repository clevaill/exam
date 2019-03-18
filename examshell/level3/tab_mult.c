/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 13:19:48 by clevaill          #+#    #+#             */
/*   Updated: 2018/05/07 13:39:30 by clevaill         ###   ########.fr       */
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

int         ft_atoi(const char *str)
{
    int     i;
    int     num;
    int     sign;

    i = 0;
    num = 0;
    sign = 1;
    while (str[i] == '\0' || str[i] == '\t' || str[i] == ' ')
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
    {
        num = (num * 10) + str[i] - '0';
        i++;
    }
    return (sign * num);
}

int         main(int argc, char *argv[])
{
    int     i;
    int     nbr;

    if (argc != 2)
        ft_putchar('\n');
    else
    {
        i = 1;
        nbr = ft_atoi(argv[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr(i * nbr);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}
