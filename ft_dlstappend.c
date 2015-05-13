/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 04:32:23 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/12 07:30:50 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_dlst	*ft_dlstappend(t_dlst *lst, void *data)
{
	t_dlst	*new;
	t_dlst	*tmp;

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
