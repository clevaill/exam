/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 09:27:49 by clevaill          #+#    #+#             */
/*   Updated: 2018/05/07 09:42:16 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(const char *str)
{
    int i;
    int num;
    int sign;

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

int     main(int argc, char const *argv[])
{
    int nbr1;
    int nbr2;

    if (argc == 3)
    {
        if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
        {
            while (nbr1 != nbr2)
            {
                if (nbr1 > nbr2)
                    nbr1 -= nbr2;
                else
                    nbr2 -= nbr1;
            }
            printf("%d", nbr1);
        }
    }
    printf("\n");
    return (0);
}
