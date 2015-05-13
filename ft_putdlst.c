/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdlst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliou-ke <rliou-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 09:48:26 by rliou-ke          #+#    #+#             */
/*   Updated: 2015/05/12 10:02:33 by rliou-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putdlst(t_dlst *list)
{
	if (list->next != NULL)
	{
		ft_putendl(list->content);
		ft_putdlst(list->next);
	}
	else
		ft_putstr(list->content);
}
