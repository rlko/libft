/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 13:50:38 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/15 06:16:49 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd(t_dlist **alst, t_dlist *new)
{
	if (alst)
	{
		if (new)
			new->next = *alst;
		*alst = new;
		(*alst)->prev = NULL;
		if ((*alst)->next)
			(*alst)->next->prev = *alst;
	}
}
