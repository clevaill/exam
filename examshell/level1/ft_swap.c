/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:47:41 by clevaill          #+#    #+#             */
/*   Updated: 2017/11/30 18:00:52 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void        ft_swap(int *a, int *b)
{
    int     tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

}

int         main(int argc, const char *argv[])
{
    int     a;
    int     b;
    int     *pa;
    int     *pb;

    a = 0;
    b = 1;
    pa = &a;
    pb = &b;
    printf("%d %d \n", a, b);
    ft_swap(pa, pb);
    printf("%d %d \n", a, b);
    return (0);
}
