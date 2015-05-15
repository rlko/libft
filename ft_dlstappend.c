/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 04:32:23 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/15 06:19:40 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_dlist	*ft_dlstappend(t_dlist *lst, void *data)
{
	t_dlist	*new;
	t_dlist	*tmp;

	if ((new = ft_dlstnew(data, ft_strlen(data))))
	{
		if (lst == NULL)
			return (new);
		else
		{
			tmp = lst;
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (lst);
		}
	}
	return (new);
}
