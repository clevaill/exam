/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 14:02:35 by clevaill          #+#    #+#             */
/*   Updated: 2018/05/07 14:34:21 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,    &c, 1);
}

int     ft_maj(char c)
{
    if (c >= 65 && c <= 90)
        return (1);     
    else
        return (0);
}

int     ft_min(char c)
{
    if (c >= 97 && c <= 122)        
        return (1);
    else
        return (0);
}

void    ft_str_cap(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i + 1] == ' ' || str[i + 1] == '\0') && ft_maj(str[i]) == 1)
            ft_putchar(str[i]);
        else if ((str[i + 1] == ' ' || str[i + 1] == '\0') && ft_min(str[i]) == 1)
            ft_putchar(str[i] - 32);
        else if (ft_maj(str[i]) == 1 && str[i + 1] != ' ')
            ft_putchar(str[i] + 32);
        else
            ft_putchar(str[i]);
            i++;
        }
}

int     main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (i < (argc))
        {
            ft_str_cap(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
    else
        ft_putchar('\n');
    return (0);
}
