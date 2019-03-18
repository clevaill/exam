/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:30:04 by clevaill          #+#    #+#             */
/*   Updated: 2017/11/30 17:47:09 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
int         ft_strlen(char *str)
{
    int     len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}

int         main(void)
{
    char    *string = "1234567890";
    
    printf("%lu\n", (unsigned long)ft_strlen(string));
    return (0);
}
