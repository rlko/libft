/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddtail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 14:22:40 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/03/17 14:35:22 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddtail(t_list **alst, t_list *newlist)
{
	t_list *last;

	if (newlist)
	{
		if (*alst)
		{
			last = *alst;
			while (last)
			{
				last = last->next;
				if (last)
					last->next = newlist;
			}
		}
		else
			*alst = newlist;
	}
}
