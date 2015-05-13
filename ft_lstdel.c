/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 17:20:02 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/03/01 14:31:47 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
** {
** void *i;
** i = alst;
** if (alst && del)
** {
** while (*alst && i)
** {
** (del)((*alst)->content, (*alst)->content_size);
** free(*alst);
** (*alst) = (*alst)->next;
** }
** i = NULL;
** }
** }
*/

static void	del_list(t_list *list)
{
	t_list	*next;

	while (list != NULL)
	{
		next = list->next;
		free(list);
		list = next;
	}
}

void		ft_lstdel(t_list **begin, t_list *elem)
{
	t_list		*cur;
	t_list		*last;

	cur = *begin;
	if (elem == NULL || *begin == NULL || begin == NULL)
		return ;
	if (cur == elem)
	{
		*begin = NULL;
		del_list(elem);
	}
	last = cur;
	cur = cur->next;
	while (cur != NULL)
	{
		if (cur == elem)
		{
			last->next = NULL;
			del_list(cur);
			return ;
		}
		last = cur;
		cur = cur->next;
	}
}
