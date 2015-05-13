/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 09:47:34 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/12 10:17:16 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst(t_list *list)
{
	if (list->next != NULL)
	{
		ft_putendl(list->content);
		ft_putlst(list->next);
	}
	else
		ft_putstr(list->content);
}
