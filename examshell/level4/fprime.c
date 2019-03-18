/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 09:31:38 by clevaill          #+#    #+#             */
/*   Updated: 2018/10/29 09:38:32 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int         main(int argc, char **argv)
{
    int     n;
    int     nb;

    if (argc == 2)
    {
        if (argv[1][0] == '\0')
        {
            printf("\n");
            return (0);
        }
        nb = atoi(argv[1]);
        if (nb == 1)
        {
            printf("1\n");
            return (0);
        }
        while (1)
        {
            n = 1;
            while (++n <= nb)
            {
                if (nb % n == 0)
                {
                    printf("%d", n);
                    nb = nb / n;
                    break ;
                }
            }
            if (nb == 1)
                break ;
            else
                printf("*");
        }
    }
    printf("\n");
    return (0);
}
