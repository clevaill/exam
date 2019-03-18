/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 17:40:28 by clevaill          #+#    #+#             */
/*   Updated: 2017/11/29 17:43:34 by clevaill         ###   ########.fr       */
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

    a = 'a';
    b = 'B';
    while (a <= 'z' && b<= 'Z')
    {
        ft_putchar(a);
        ft_putchar(b);
        a += 2;
        b += 2;
    }
    ft_putchar('\n');
    return (0);
}
