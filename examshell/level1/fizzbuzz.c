/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 09:08:16 by clevaill          #+#    #+#             */
/*   Updated: 2018/05/01 09:26:49 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    fizzbuzz(int start, int end)
{
    int flag;

    flag = 0;
    if (start > end) 
        return;
    if (start%3 == 0)
        ft_putstr("Fizz");
    flag=1;
    if (start%5 == 0)
        ft_putstr("Buzz");
    flag=1;
    if (!flag)
        ft_putchar('\n');
    fizzbuzz(++start, end);
}

int     main(void)
{
      fizzbuzz(1, 100);
        return 0;
}
