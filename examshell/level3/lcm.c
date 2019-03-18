/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 09:50:57 by clevaill          #+#    #+#             */
/*   Updated: 2018/05/07 09:54:57 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
    int         gcd;         
    int         old_a;
    int         old_b;

    gcd = 0;
    old_a = a;
    old_b = b;
    while (1)
    {
        if (a == 0)
            break ;
        b %= a;
        if (b == 0)
            break ;
        a %= b;
    }
    gcd = (!b) ? a : b;
    return (gcd ? (old_a / gcd * old_b) : 0);
}
