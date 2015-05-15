/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 04:32:23 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/03 05:10:25 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstappend(t_list *lst, void *data)
{
	t_list	*new;
	t_list	*tmp;

	if ((new = ft_lstnew(data, ft_strlen(data))))
	{
		if (lst == NULL)
			return (new);
		else
		{
			tmp = lst;
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = new;
			return (lst);
		}
	}
	return (new);
}
