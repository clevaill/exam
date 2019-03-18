/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:15:41 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/11 15:43:34 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int         ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void        ft_swap(char *a, char *b)
{
    int     tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

char        *ft_strrev(char *str)
{
    int     i;
    int     len;

    i = 0;
    len = ft_strlen(str);
    while (i < len / 2)
    {
        ft_swap(&str[i], &str[len - i - 1]);
        i++;
    }
    return (str);
}
