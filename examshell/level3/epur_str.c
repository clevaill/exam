/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 15:04:40 by clevaill          #+#    #+#             */
/*   Updated: 2018/05/07 15:08:36 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int argc, char const *argv[])
{
    int i;
    int flg;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                flg = 1;
                if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
                {
                    if (flg)
                        write(1, " ", 1);
                    flg = 0;
                    write(1, &argv[1][i], 1);
                }
                i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
