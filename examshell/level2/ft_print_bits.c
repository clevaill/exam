/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:58:52 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/11 17:19:19 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_print_bits(unsigned char octet)
{
    int     oct;
    int     div;

    div = 128;
    oct = octet;
    while (div != 0)
    {
        if (div <= oct)
        {
            ft_putchar('1');
            oct = oct % div;
        }
        else
        {
            ft_putchar('0');
        }
        div = div / 2;
    }


}
