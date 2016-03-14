/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 04:32:23 by rliou-ke          #+#    #+#             */
/*   Updated: 2016/03/14 21:14:40 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		ft_lstappend(t_list **begin, t_list *new)
{
	t_list	*current;
	t_list	*prev;

	prev = NULL;
	current = *begin;
	while (current != NULL)
	{
		prev = current;
		current = current->next;
	}
	new->next = NULL;
	if (prev == NULL)
		*begin = new;
	else
		prev->next = new;
}
