/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:33:46 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/13 16:53:07 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char        *ft_strcpy(char *s1, char *s2)
{
    int     i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int main(void) {
        
            
            char src1[] = "Hello world";
                
                char dest1[8];
                    
                    ft_strcpy(dest1, src1);
                        
                        printf("%s", dest1);
                            
                                
                                return 0;
}
