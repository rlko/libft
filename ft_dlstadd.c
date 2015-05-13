/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 13:50:38 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/12 07:30:51 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd(t_dlst **alst, t_dlst *new)
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
