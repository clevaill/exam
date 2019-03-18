/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 15:50:49 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/18 16:07:16 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_hex(unsigned int n)
{
    if (n >= 16)
        print_hex(n / 16);
    if (n % 16 < 10)
        ft_putchar((n % 16) + 48);
    else
        ft_putchar((n % 16) - 10 + 97);
}

int         ft_atoi_for_printhex(const char *str)
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

int     main(int ac, char **av)
{
    int     nb;

    if (ac == 2)
    {
        if ((nb = ft_atoi_for_printhex(av[1])) != -1)
            print_hex(nb);
    }
    ft_putchar('\n');
    return (0);
}
