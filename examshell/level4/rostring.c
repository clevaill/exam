/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:54:07 by clevaill          #+#    #+#             */
/*   Updated: 2018/10/29 14:58:36 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


void	ft_strsub(char *str, int s, int e, int ind)
{
  int	i;

  i = 0;
  while (s + i < e)
    {
      write(1, &str[s + i], 1);
      i++;
    }
  if (ind != 1)
    ft_putstr(" ");
}

void	rostring(char *str, int pass)
{
  int	i;
  int	p;
  int	c;

  i = -1;
  c = 0;
  p = -1;
  while (((i = i + 1) || 1) && (i == 0 || str[i - 1]))
    {
      if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
	{
	  if (p != -1 && (c = c + 1))
	    {
	      if ((c == 1 && pass == 1) || (c != 1 && pass == 0))
		ft_strsub(str, p, i, c);
	      p = -1;
	    }
	}
      else if (p == -1)
	p = i;
    }
  if (pass == 0)
    rostring(str, 1);
}

int	main(int argc, char **argv)
{
  if (argc > 1)
    rostring(argv[1], 0);
  ft_putstr("\n");
  return (0);
}
