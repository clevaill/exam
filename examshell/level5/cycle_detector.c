/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thescriv <thescriv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:50:40 by thescriv          #+#    #+#             */
/*   Updated: 2018/11/27 16:54:05 by thescriv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

int 	cycle_detector(const t_list *list)
{
	const t_list *tortue;
	const t_list *lapin;
	tortue = list;
	lapin = list;
	
	if (list == NULL)
		return (1);
	while (1)
	{
		tortue = tortue->next;
		if (lapin->next)
			lapin = lapin->next->next;
		else
			return (0);
		if (tortue == NULL || lapin == NULL)
			return (0);
		if (tortue == lapin)
			return (1);
	}
}
