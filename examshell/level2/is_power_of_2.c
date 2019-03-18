/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clevaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 18:16:58 by clevaill          #+#    #+#             */
/*   Updated: 2017/12/13 18:19:09 by clevaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n % 2 == 0)
        n /= 2;
    return ((n == 1) ? 1 : 0);
}
