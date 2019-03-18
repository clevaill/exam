/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thescriv <thescriv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:37:50 by thescriv          #+#    #+#             */
/*   Updated: 2018/11/27 16:08:36 by thescriv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int usage(char *mess)
{
	int j = -1;
	while (mess[++j])
		ft_putchar(mess[j]);
	ft_putchar('\n');
	return(0);
}

int main(int ac, char **av)
{
	int octet[26];
	int i;
	int k = 0;
	int l = 6;
	int n;

	if (ac >= 2)
	{
		i = -1;
		while (++i != 26)
			octet[i] = 0;
		while (av[++k])
		{
			i = 0;
			if (av[k][i] == '-')
			{
				n = 0;
				if (av[k][0] == '-' && av[k][1] == 'h')
					return (usage("options: abcdefghijklmnopqrstuvwxyz"));
				while (av[k][++n])
				{
					if (av[k][n] >= 97 && av[k][n] <= 122)
						;
					else
						return(usage("Invalid Option"));
				}
				i = 0;
				while (av[k][++i])
					octet[122 - av[k][i]] = 1;
			}
		}
		i = -1;
		write(1, "000000", 6);
		while (++i < 26)
		{
			if (l == 8)
			{
				ft_putchar(' ');
				l = 1;
			}
			else
				l++;
			ft_putchar(octet[i] + 48);
		}
	}
	else
		return (usage("options: abcdefghijklmnopqrstuvwxyz"));
	ft_putchar('\n');
	return (0);
}
