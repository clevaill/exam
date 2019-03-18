/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:29:24 by clevaill          #+#    #+#             */
/*   Updated: 2017/11/30 16:54:11 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

int         main(int argc, char **argv)
{
    int     i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            i++;
        }
        while (argv[1][i] != '\0' && argv[1][i] != ' '&& argv[1][i] != '\t')
        {
            ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}
