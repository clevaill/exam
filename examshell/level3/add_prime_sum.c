/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 14:41:28 by clevaill          #+#    #+#             */
/*   Updated: 2018/05/07 15:00:54 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
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

int         ft_is_prim(int nbr)
{
    int     i;

    i = 2;
    while (i < nbr)
    {
        if (nbr % i == 0)
        return (0);
        i++;
    }
    return (1);
}

void        ft_add_prim_sum(int nbr)
{
    int     i;
    int     count;

    i = 2;
    count = 0;
    while (i <= nbr)
    {
        if (ft_is_prim(i))
            count = count + i;
            i++;
    }
    ft_putnbr(count);
}

int         main(int argc, char **argv)
{
    char    zero;
    char    rtn;

    zero = '0';
    rtn = '\n';
    if (argc == 2)
        ft_add_prim_sum(ft_atoi(argv[1]));
    else
        ft_putchar(zero);
        ft_putchar(rtn);
    return (0);
}

