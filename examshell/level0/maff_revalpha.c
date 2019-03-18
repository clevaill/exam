/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:48:05 by clevaill          #+#    #+#             */
/*   Updated: 2017/11/30 16:00:11 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

int         main(void)
{
    char    a;
    char    b;

    a = 'z';
    b = 'Y';
    while (a >= 'a' && b >= 'A')
    {
        ft_putchar(a);
        ft_putchar(b);
        a -= 2;
        b -= 2;
    }
    ft_putchar('\n');
    return (0);
}
